class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dupli;
        set<int> st;
        
        for(int i=0; i<nums.size();i++){
            if(st.count(nums[i])){
                dupli.push_back(nums[i]);
            }
            else{
                st.insert(nums[i]);
            }
        }
        return dupli;
    }
};