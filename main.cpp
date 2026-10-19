
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

int main() {
    const std::vector<int> normal_hours = {2, 3, 4};
    const std::vector<int> zero_hours = {0, 0, 0};
    const std::vector<int> empty_hours = {};
    const std::vector<int> one_hour = {5};

    assert(calculate_total(normal_hours) == 9);
    assert(calculate_average(normal_hours) == 3.0);

    assert(calculate_total(zero_hours) == 0);
    assert(calculate_average(zero_hours) == 0.0);

    assert(calculate_total(empty_hours) == 0);
    assert(calculate_average(empty_hours) == 0.0);

    assert(calculate_total(one_hour) == 5);
    assert(calculate_average(one_hour) == 5.0);

    std::cout << "All tests passed!\n";
    return 0;
}
