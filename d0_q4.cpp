class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            while(nums[i]==nums[i-1]){
                if(i==nums.size()-1) return count;
                i++;
            }
            index++;
            nums[index]=nums[i];
            count++;
        }
        return count; 
    }
};
