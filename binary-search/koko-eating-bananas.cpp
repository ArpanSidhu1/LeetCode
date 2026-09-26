class Solution {
public:
    long long gethours(vector<int>& piles,int mid){
        long long total = 0;
        for(int i=0; i<piles.size(); i++){
            int hourstoeat = ceil(piles[i]/(double)mid);
            total += hourstoeat;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1, high = *(max_element(piles.begin(),piles.end()));
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low) / 2;
        long long hours = gethours(piles,mid);
        if(hours<= h){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }    
    return ans;
    }
};