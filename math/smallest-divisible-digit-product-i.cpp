class Solution {
public:
    int smallestNumber(int n, int t) {
        int k = n;
        while(true){
            int prod = 1;
            int ans = k;
            cout<<" K : "<<k<<endl;
            while(k!=0){
                int r = k%10;
                prod = prod*r;
                k = k/10;
            }
            cout<<"Prod  : "<<prod<<endl;
            if(prod % t == 0) return ans;
            k = ans;
            k++;
        }
        return 0;
    }
};