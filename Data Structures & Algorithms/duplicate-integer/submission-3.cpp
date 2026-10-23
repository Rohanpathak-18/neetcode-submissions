class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int>mp;

       for(int num:nums){
        if(mp.count(num)){
            return true;
        }
        mp.insert(num);
       }
       return false;
    }
};

// int n = nums.size();
//        sort(nums.begin(),nums.end());
      

//       for(int i = 1; i<n; i++){
//          if(nums[i] == nums[i-1]){
//             return true;
//          }
//       }
//       return false;