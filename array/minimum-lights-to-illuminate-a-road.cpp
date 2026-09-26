class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();
        vector<int> storeIndex(n+1,0);
        vector<bool> converedIndex(n,false);

        for(int i=0; i<n; i++){
            int v = lights[i];
            if(v!=0){
                int left = max(0, i - v);
                int right = min(n-1,i + v);
                storeIndex[left]++;
                storeIndex[right+1]--;
            }
        }

        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + storeIndex[i];
            if(sum>0){
                converedIndex[i] = true;
            }
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(converedIndex[i] == false){
                count++;
                i+=2;
            }
        }   
        return count;
    }
};