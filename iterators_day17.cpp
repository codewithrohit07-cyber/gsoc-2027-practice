
#include <iostream>
#include <vector>

int main() {
    const std::vector<int> hours{2, 3, 5, 4};

    std::cout << "Study hours using iterators:\n";

    for (auto it = hours.begin(); it != hours.end(); ++it) {
        std::cout << *it << '\n';
    }

    int total = 0;
    for (auto it = hours.begin(); it != hours.end(); ++it) {
        total += *it;
    }

    std::cout << "Total study hours: " << total << '\n';
    std::cout << "\n";
    std::cout << "Study hours doubled:\n";

    for (auto it = hours.begin(); it != hours.end(); ++it) {
         std::cout << (*it * 2) << '\n';
    }

    return 0;
}
