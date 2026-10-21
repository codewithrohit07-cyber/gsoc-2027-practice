
#include <cassert>
#include <iostream>
#include <vector>

int calculate_total(const std::vector<int>& hours) {
    int total = 0;

    for (const auto hour : hours) {
        total += hour;
    }

    return total;
}

double calculate_average(const std::vector<int>& hours) {
    if (hours.empty()) {
        return 0.0;
    }

    const auto total = calculate_total(hours);
    return static_cast<double>(total) / hours.size();
}

void test_normal_values() {
    const std::vector<int> hours = {2, 3, 5};

    assert(calculate_total(hours) == 10);
    assert(calculate_average(hours) > 3.33);
    assert(calculate_average(hours) < 3.34);
}

void test_empty_vector() {
    const std::vector<int> hours;

    assert(calculate_total(hours) == 0);
    assert(calculate_average(hours) == 0.0);
}

void test_single_value() {
    const std::vector<int> hours = {5};

    assert(calculate_total(hours) == 5);
    assert(calculate_average(hours) == 5.0);
}

int main() {
    test_normal_values();
    test_empty_vector();
    test_single_value();

    std::cout << "All Day 9 tests passed!\n";
    return 0;
}
