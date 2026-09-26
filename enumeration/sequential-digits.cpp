class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string window = "123456789";
        vector<int> result;

        int left = to_string(low).size();
        int right = to_string(high).size();

        // Length of the Window. (Left to Right)
        for(int i=left; i<=right; i++){
            // from where we will generate the window.
            for(int j=0; j<9; j++){
                string tempW = window.substr(j, i);
                int num = stoi(tempW);
                if(num>=low && num<=high && tempW.size() == i){
                    result.push_back(num);
                }
            }
        }

        return result;
    }   
};