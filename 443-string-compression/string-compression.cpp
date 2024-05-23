class Solution {
public:
    int compress(vector<char>& ch) {

        // int ct=1,j=0,k=1;
        // vector<int>v;
        // char c=ch[0];
        // for(int i=1;i<ch.size();i++){
        //     if(c==ch[i]){
        //         ct++;
        //     }else{
        //         c=ch[i];
                
        //       if(ct>1){
        //           if(ct<=9){ch[k++]=char(ct)+48;}else{
        //               int n=ct/10;
        //               ch[k++]=char(n)+48;
        //               ch[k++]=char(ct%10)+48; }
        //       }
        //       ch[k++]=c;
        //       ct=1;
        //     }
        // }
        // int n=ch.size();
        // if(ch[n-1]==ch[n-1]){
        //                    if(ct>1){
        //           if(ct<=9){ch[k++]=char(ct)+48;
        //           }else{

        //           while(ct!=0){
        //              v.push_back(ct%10);
        //              ct=ct/10;
        //           } 
        //           for(int i=v.size()-1;i>=0;i--) {
        //               ch[k++]=char(v[i])+48;   
        //           } 
                   
        //             }
        //       }

        // }
        // for(auto i=ch.begin()+k;i!=ch.end();i++){
        //          ch.erase(i);i--;
        // }
       
        // int ans=ch.size();
        // return ans;

        int i=0;
        int ansIndex = 0;
        int n = ch.size();

        while(i<n){
            int j=i+1;
            while(j<n && ch[i]==ch[j]){
                j++;
            }

            ch[ansIndex++] = ch[i];

            int count = j - i;
            if(count>1){
                string cnt = to_string(count);
                for(char chr:cnt){
                    ch[ansIndex++] = chr;
                }
            }
            i=j;
        }

        return ansIndex;
        
    }
};