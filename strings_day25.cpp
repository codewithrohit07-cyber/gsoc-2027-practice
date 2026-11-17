#include <iostream>
#include <string>

int main() {
    std::string language = "C++";
    std::string topic = "Programming";

    std::cout << "Language: " << language << '\n';
    std::cout << "Topic: " << topic << '\n';

    std::cout << "Language length: "
              << language.length() << '\n';

    std::cout << "Topic size: "
              << topic.size() << '\n';

    // Concatenation using +.
    std::string full_topic = language + " " + topic;

    std::cout << "\nUsing + operator:\n";
    std::cout << full_topic << '\n';

    // Concatenation using append().
    std::string message = "I am learning ";
    message.append("C++");

    std::cout << "\nUsing append():\n";
    std::cout << message << '\n';
    

    // Extract a word using substr().
    std::string sentence = "I am learning C++ programming";

    std::string extracted = sentence.substr(14);

    std::cout << "\nExtracted text: "
              << extracted << '\n';

     // Replace part of a string.
     std::string updated_sentence = "I am learning Java programming";

     updated_sentence.replace(14, 4, "C++");

     std::cout << "\nUpdated sentence: "
               << updated_sentence << '\n';
   
    if (updated_sentence.find("C++") != std::string::npos) {
        std::cout << "C++ is present in the updated sentence.\n";
    }
    return 0;
}