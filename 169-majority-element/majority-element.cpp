class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int freq=0 , ans=0 ;
        // for(int i=0;i<nums.size();i++){
        //     if(freq==0){
        //         ans= nums[i];
        //     }
        //     if(ans==nums[i]){
        //         freq++;
        //     }
        //     else{
        //         freq--;
        //     }
        // }
        // return ans;

        unordered_map<int,int> mp;
        int n = nums.size(); 

        for (int num : nums){
            mp[num]++;
            
            if(mp[num]>n/2){
                return num;
            }
        }
        return -1;
    }
};