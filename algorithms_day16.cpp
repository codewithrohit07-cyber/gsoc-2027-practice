
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    const std::vector<int> hours{2, 3, 5, s0, 4};

    // Calculate the total using a standard library algorithm.
    const int total = std::accumulate(hours.begin(), hours.end(), 0);

    // Count how many days had at least 3 study hours.
    const auto productive_days = std::count_if(
        hours.begin(),
        hours.end(),
        [](int hour) {
            return hour >= 3;
        }
    );

    double average = 0.0;

    if (!hours.empty()) {
        average = static_cast<double>(total) / hours.size();
    }

    std::cout << "Total study hours: " << total << '\n';
    std::cout << "Days with at least 3 hours: "
              << productive_days << '\n';
    std::cout << "Average study hours: " << average << '\n';

    return 0;
}
