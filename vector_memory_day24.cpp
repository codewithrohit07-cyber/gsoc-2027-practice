#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    for (int i = 1; i <= 10; ++i) {
        numbers.push_back(i);

        std::cout << "Added: " << i
                  << " | Size: " << numbers.size()
                  << " | Capacity: " << numbers.capacity()
                  << '\n';
    }

    return 0;
}