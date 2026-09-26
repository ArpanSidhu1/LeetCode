class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
    int n = h.size(); priority_queue<int> q; int i=0;
    for(i; i<n-1; i++){
        if(h[i]>=h[i+1]) continue;
        int d = h[i+1]-h[i];
        if(d<=b){
            b-=d;
            q.push(d);
        }
        else if(l>0){
            if(q.size())
            {
            int x = q.top();
                if(x>d )
                {          
                b+=x;
                q.pop();
                q.push(d);
                b-=d;
                }
            }    
            l--;
        }
        else break; 
    }
    return i;
    }
};