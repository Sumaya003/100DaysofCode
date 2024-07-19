class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left;
        vector<int> right;
        vector<int> water;

        int maxl = INT_MIN,maxr = INT_MIN;
        for(auto x:height){
            maxl = max(maxl,x);
            left.push_back(maxl);
        }
        int k = height.size() - 1;
        while(k>=0){
            maxr = max(maxr,height[k]);
            right.push_back(maxr);
            k--;
        }
        reverse(right.begin(),right.end());

        for(int i = 0;i<height.size();i++){
            water.push_back(min(left[i],right[i]));
        }
        for(auto x:water){
            cout<<x<<" ";
        }
        int j = 0,sum = 0;

        while(j<height.size()){
            sum = sum + water[j] - height[j];
            // cout<<sum<<" ";
            j++;
        }

        return sum;
    }
};