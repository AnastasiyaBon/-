#include <iostream>
#include <map>
#include <string>

std::string charToMorse(char c) {
    std::map<char, std::string> morseMap{
        {'А', ".-"}, {'Б', "-..."}, {'В', ".--"}, {'Г', "--."},
        {'Д', "-.."}, {'Е', "."}, {'Ё', "."}, {'Ж', "...-"},
        {'З', "--.."}, {'И', ".."}, {'Й', ".---"}, {'К', "-.-"},
        {'Л', ".-.."}, {'М', "--"}, {'Н', "-."}, {'О', "---"},
        {'П', ".--."}, {'Р', ".-."}, {'С', "..."}, {'Т', "-"},
        {'У', "..-"}, {'Ф', "..-."}, {'Х', "...."}, {'Ц', "-.-."},
        {'Ч', "---."}, {'Ш', "----"}, {'Щ', "--.-"}, {'Ъ', ".--.-."},
        {'Ы', "-.--"}, {'Ь', "-..-"}, {'Э', "..-.."}, {'Ю', "..--"},
        {'Я', ".-.-"},
        {'а', ".-"}, {'б', "-..."}, {'в', ".--"}, {'г', "--."},
        {'д', "-.."}, {'е', "."}, {'ё', "."}, {'ж', "...-"},
        {'з', "--.."}, {'и', ".."}, {'й', ".---"}, {'к', "-.-"},
        {'л', ".-.."}, {'м', "--"}, {'н', "-."}, {'о', "---"},
        {'п', ".--."}, {'р', ".-."}, {'с', "..."}, {'т', "-"},
        {'у', "..-"}, {'ф', "..-."}, {'х', "...."}, {'ц', "-.-."},
        {'ч', "---."}, {'ш', "----"}, {'щ', "--.-"}, {'ъ', ".--.-."},
        {'ы', "-.--"}, {'ь', "-..-"}, {'э', "..-.."}, {'ю', "..--"},
        {'я', ".-.-"},
        {' ', "/"}
    };

    return morseMap[c];
}

char morseToChar(const std::string& morse) {
    std::map<std::string, char> reverseMorseMap;
    for (const auto& pair : charToMorse('0')) {
        reverseMorseMap[pair.second] = pair.first;
    }

    return reverseMorseMap[morse];
}

std::string stringToMorse(const std::string& text) {
    std::string morseCode = "";
    for (char c : text) {
        morseCode += charToMorse(c) + " ";
    }
    return morseCode;
}

std::string morseToString(const std::string& morseCode) {
    std::string result = "";
    std::string morseChar = "";
    for (char c : morseCode) {
        if (c == ' ' && morseChar != "") {
            result += morseToChar(morseChar);
            morseChar = "";
        } else if (c != ' ') {
            morseChar += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    
    while (true) {
        std::cout << "Введите фразу на русском для перевода в код Морзе (Введите 'выход' для завершения): ";
        std::getline(std::cin, input);

        if (input == "выход") {
            break;
        }

        std::string morseResult = stringToMorse(input);
        std::cout << "Код Морзе: " << morseResult << std::endl;

        std::string decodedString = morseToString(morseResult);
        std::cout << "Обычный текст: " << decodedString << std::endl;
    }

    return 0;
}
