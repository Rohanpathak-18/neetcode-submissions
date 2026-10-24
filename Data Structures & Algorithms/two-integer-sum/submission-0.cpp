class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>sum;
        int n= nums.size();

        for(int i = 0; i<n; i++){
            int remaining = target-nums[i];

            if(sum.find(remaining) != sum.end()){
                return{sum[remaining],i};
            }
            sum[nums[i]]=i;
        }
        return{};
    }
};
