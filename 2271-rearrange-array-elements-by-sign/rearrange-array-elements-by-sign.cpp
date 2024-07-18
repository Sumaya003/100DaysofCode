class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        int p = 0,n = 0;

        for(int j = 0;j<nums.size();j++){
            if(j%2 == 0)
                nums[j] = pos[p++];
            else
                nums[j] = neg[n++];

        }
        return nums;
    }  
};