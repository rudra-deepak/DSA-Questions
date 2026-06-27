#include <string>

class Solution {
public:
    std::string interpret(std::string command) {
        std::string result = "";
        int i = 0;
        int n = command.length();
        
        while (i < n) {
            // Case 1: Character is 'G'
            if (command[i] == 'G') {
                result += 'G';
                i += 1;
            } 
            // Case 2: Sequence is "()"
            else if (command[i + 1] == ')') {
                result += 'o';
                i += 2;
            } 
            // Case 3: Sequence is "(al)"
            else {
                result += "al";
                i += 4;
            }
        }
        
        return result;
    }
};
