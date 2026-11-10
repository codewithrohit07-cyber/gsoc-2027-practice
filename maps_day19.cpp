
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> study_hours;

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

    // Access a value using its key.
    std::cout << "C++ study hours: "
              << study_hours["C++"] << '\n';

    // Update an existing value.
    study_hours["C++"] = 5;

    std::cout << "Updated C++ hours: "
              << study_hours["C++"] << '\n';

    auto it = study_hours.find("Linux");

    if (it != study_hours.end()) {
        std::cout << "Linux found: "
                  << it->second << " hours\n";
    } else {
        std::cout << "Linux not found!\n";
    }

    return 0;
}
