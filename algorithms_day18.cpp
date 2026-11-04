
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> hours{8, 3, 6, 2};

    // Sort in ascending order.
    std::sort(hours.begin(), hours.end());

    std::cout << "Ascending order: ";
    for (int hour : hours) {
        std::cout << hour << " ";
    }
    std::cout << '\n';

    // Sort in descending order.
    std::sort(hours.begin(), hours.end(), std::greater<int>());

    std::cout << "Descending order: ";
    for (int hour : hours) {
        std::cout << hour << " ";
    }
    std::cout << '\n';

    // Search for the value 4.
    const auto it = std::find(hours.begin(), hours.end(), 10);

    if (it != hours.end()) {
        std::cout << "Value 10 found!\n";
    } else {
        std::cout << "Value 10 not found!\n";
    }

    return 0;
}
