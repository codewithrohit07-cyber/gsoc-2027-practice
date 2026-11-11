
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> study_hours;

    // Insert values.
    study_hours["C++"] = 3;
    study_hours["Git"] = 2;
    study_hours["Linux"] = 4;
    study_hours["Python"] = 2;

    // Display all key-value pairs.
    std::cout << "Study hours by subject:\n";

    for (const auto& entry : study_hours) {
        std::cout << entry.first << ": "
                  << entry.second << " hours\n";
    }

    // Access a value.
    std::cout << "C++ study hours: "
              << study_hours["C++"] << '\n';

    // Update a value.
    study_hours["C++"] = 5;

    std::cout << "Updated C++ hours: "
              << study_hours["C++"] << '\n';

    // Search for Linux.
    const auto it = study_hours.find("Python");

    if (it != study_hours.end()) {
        std::cout << "Python found: "
                  << it->second << " hours\n";
    } else {
        std::cout << "Python not found!\n";
    }

    return 0;
}
