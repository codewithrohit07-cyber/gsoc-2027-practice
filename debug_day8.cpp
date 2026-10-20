
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

    // Bug: integer division happens before conversion.
    return static_cast<double>(total) / hours.size();
}

int main() {
    const std::vector<int> hours = {0};

    std::cout << "Total: " << calculate_total(hours) << '\n';
    std::cout << "Average: " << calculate_average(hours) << '\n';

    return 0;
}
