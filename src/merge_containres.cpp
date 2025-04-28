#include <vector>
#include <span>
#include <algorithm>

template <typename T>
std::vector<T> mergeContainers(std::span<T> f, std::span<T> s) {
    std::vector<T> res;
    res.reserve(f.size() + s.size());

    for (const T& el : f) {
        res.push_back(el);
    }

    for (const T& el : s) {
        res.push_back(el);
    }

    std::sort(
        res.begin(),
        res.end(),
        [](T& a, T& b) -> const bool { return a < b; }
    );

    return res;
};