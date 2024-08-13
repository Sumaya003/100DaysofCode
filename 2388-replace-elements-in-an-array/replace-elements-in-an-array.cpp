class Solution {
public:
    vector<int> arrayChange(vector<int>& nums,vector<vector<int>>& operations) {
        unordered_map<int,int> mp;
        //store the index of each num in nums
        for(int i=0 ; i < nums.size() ; i++){
            mp[nums[i]] = i;
        } 
        // for appling operation , we delete element and map its index to new value
            for (vector<int> a : operations){
                //map index to new value arr = 1 , 2 , 3 
                //operation [1,3] so index of 1 is 0; so we mapped 
                //this index to new value 3 : 0
                mp[a[1]] = mp[a[0]];
                //now we changed the index of 1 to -1;
                mp[a[0]] = -1; 
            }

            for(auto i : mp)
                if(i.second >= 0) 
                    nums[i.second] = i.first;
        
        return nums;
    }
};
