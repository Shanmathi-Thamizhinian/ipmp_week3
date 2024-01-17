class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj;
        int n=nums.size();
        unordered_map <int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto it: freq){
            if(it.second>n/2){
                maj=it.first;
            } 
        }
        return maj;
    }
};
