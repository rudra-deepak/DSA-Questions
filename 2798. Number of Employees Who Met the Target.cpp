// 2798. Number of Employees Who Met the Target


class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for (int i=0; i< hours.size(); i++){
            if(hours[i]>= target){   // yha pe "hours[i]" ka matlab ye hai ki array i (i.e -- 0 1 2 3 4) sare check krega...
                count++; 
            }

        }
        return count;
    }
};
