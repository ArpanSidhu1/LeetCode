class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
    int n = words.size();
    vector<int> result;
    for(int i = 0; i < n ; i++)
    {
        int j = 0;
        int k = words[i].size();
        while(j<k)
        {
         if(words[i][j]==x){
            result.push_back(i);
            break;
        }
        j++;
        }
    }    
    return result;
    }
};