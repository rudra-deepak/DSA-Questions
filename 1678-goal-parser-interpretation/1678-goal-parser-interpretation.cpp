#include <string>

class Solution {
public:
    std::string interpret(std::string command) {
        std::string result = "";
        
        for (int i = 0; i < command.length(); ++i) {
            if (command[i] == 'G') {
                result += 'G';
            } 
            else if (command[i] == '(') {
            ////Check the next character to decide the replacement...
                if (command[i + 1] == ')') {
                    result += 'o';
                    i++; // Skip the closing parenthesis
                } else {
                    result += "al";
                    i += 3; //// Skip 'a', 'l', and ')'
                }
            }
        }
        return result;
    }
};
