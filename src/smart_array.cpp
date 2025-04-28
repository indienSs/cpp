#include <algorithm>
#include <utility>

template <typename T>
class SmartArray {
public:
    SmartArray(int capacity = 8) : arr_(new T[capacity]), capacity_(capacity) {}
    ~SmartArray() { delete[] arr_; }
    SmartArray(const SmartArray& sa) : arr_(new T[sa.capacity()]), capacity_(sa.capacity()) {
        std::copy(sa.arr_, sa.arr + sa.size_, arr_);
    }
    SmartArray& operator=(const SmartArray& sa) {
        if (this != &sa) {
            delete[] arr_;
            size_ = sa.size_;
            capacity_ = sa.capacity_;
            std::copy(sa.arr_, sa.arr_ + sa.size_, arr_);
        }
        return *this;
    }

    void push_back(T&& el) {
        if (size_ == capacity_) {
            resize();
        }
        arr[size_++] = std::forward<T>(el);
    }
    void pop_back() {
        if (size_ > 0) {
            --size_;
        }
    }
    int size() const { return size_ + 1; }
    int capacity() const { return capacity_; }
    T& operator[](int pos) const { return arr_[pos]; }
    void resize() {
        capacity_ *= 2;
        T* temp = arr_;
        arr_ = new T[capacity_];
        std::copy(temp, temp + size_, arr_);
        delete[] temp;
    }

private:
    T* arr_{};
    int size_{};
    int capacity_{};
};