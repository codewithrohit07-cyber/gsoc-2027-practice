#include <iostream>
#include <vector>

int main() {
    std::vector<int> hours;

    hours.reserve(10);

    std::cout << "Initial size: "
              << hours.size() << '\n';

    std::cout << "Initial capacity: "
              << hours.capacity() << '\n';

    hours.push_back(2);
    hours.push_back(4);

    hours.emplace_back(6);
    hours.emplace_back(8);

    std::cout << "\nAfter adding elements:\n";

    std::cout << "Size: "
              << hours.size() << '\n';

    std::cout << "Capacity: "
              << hours.capacity() << '\n';

    std::cout << "\nVector elements:\n";

    for (int hour : hours) {
        std::cout << hour << ' ';
    }

    std::cout << '\n';

    std::cout << "Final size: " << hours.size() << '\n';
    std::cout << "Final capacity: " << hours.capacity() << '\n';
    
    return 0;
}