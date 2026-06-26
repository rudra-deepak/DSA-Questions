class Solution {
public:
    int countOdds(int low, int high) {
        // The count of odd numbers up to high minus the count of odd numbers up to low - 1
        return (high + 1) / 2 - low / 2;
    }
};
