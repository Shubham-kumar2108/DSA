class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long firstMax = LONG_MIN;
        long secondMax = LONG_MIN;
        long thirdMax = LONG_MIN;
        for (int i=0; i<nums.size(); i++){
        long num = nums[i];

        if (num == firstMax || num == secondMax || num == thirdMax)
                continue;

        if(num>firstMax){

            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = num;
            
        }

        else if (num > secondMax){
            thirdMax = secondMax;
            secondMax = num;
        }

        else if (num > thirdMax) {
            thirdMax = num;
        }

        }
        if (thirdMax == LONG_MIN){
            return firstMax;
        }else{
            return thirdMax;
        }

    }
};