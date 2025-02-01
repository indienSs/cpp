double metersToKilometers(int meters) {
    return meters / 1000.0;
}
double getCircleSquare(int radius) {
    return 3.14 * (radius * radius);
}
double rublesToDollars(int rubles) {
    return rubles / 100.0;
}
double bodyWeightIndex(int height, int weight) {
    double idxHeight = height / 100.0;
    return weight / (idxHeight * idxHeight);
}