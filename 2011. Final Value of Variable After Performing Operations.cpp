// 2011. Final Value of Variable After Performing Operations


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        // Start with x = 0
        int x = 0;

        // Loop through all operations
        for(int i = 0; i < operations.size(); i++)
        {
            // Check the middle character of the current operation
            // Examples:
            // "++X" -> operations[i][1] = '+'
            // "X++" -> operations[i][1] = '+'
            // "--X" -> operations[i][1] = '-'
            // "X--" -> operations[i][1] = '-'
            if(operations[i][1] == '+') // here operations[i][1] means the array i where "X++" so its index is "012" respectively so we have to only se the 1st index sign wether it is + or -
            {
                // Increase x by 1
                x++;
            }
            else
            {
                // Decrease x by 1
                x--;
            }
        }

        // Return the final value of x
        return x;
    }
};
