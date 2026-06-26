// 1281. Subtract the Product and Sum of Digits of an Integer


class Solution {
public:
    int subtractProductAndSum(int n) {

        // Store sum of digits
        int sum = 0;

        // Store product of digits
        int product = 1;

        // Process every digit of n
        while(n > 0)
        {
            // Get the last digit
            int digit = n % 10;

            // Multiply digit into product
            product = product * digit;

            // Add digit into sum
            sum = sum + digit;

            // Remove the last digit
            n = n / 10;
        }

        // Return product - sum
        return product - sum;
    }
};
