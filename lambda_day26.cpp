#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> study_hours{2, 3, 5, 1, 4, 6, 2};

    // Count productive days (at least 3 hours).
    auto is_productive = [](int hours) {
        return hours >= 3;
    };

    auto productive_days = std::count_if(
        study_hours.begin(),
        study_hours.end(),
        is_productive
    );

    // Calculate total study hours.
    int total = std::accumulate(
        study_hours.begin(),
        study_hours.end(),
        0
    );

    // Calculate average.
    double average = static_cast<double>(total)
                     / static_cast<double>(study_hours.size());

    std::cout << "Total study hours: " << total << '\n';
    std::cout << "Productive days: " << productive_days << '\n';
    std::cout << "Average study hours: " << average << '\n';

    return 0;
}