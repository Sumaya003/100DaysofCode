class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = INT_MAX;
        int r = INT_MIN;
        vector<int> lmin;
        vector<int> rmax;

        for(int p:prices){
            l = min(l,p);
            lmin.push_back(l);
            
        }
        
        

        for(int i = prices.size() - 1;i>=0;i--){
            r = max(r,prices[i]);
            rmax.push_back(r);
            
        }
        

        reverse(rmax.begin(),rmax.end());
        int ans = INT_MIN;

        for(int j = 0;j<prices.size();j++){
            int diff = rmax[j] - lmin[j];
            ans = max(ans,diff);
        }
        return ans;

    }
};