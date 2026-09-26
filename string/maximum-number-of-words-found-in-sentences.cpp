class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int n = sentences.size(); int maxi = 0; 
    for(int i=0; i<n; i++){
    int c = 0;
    for(int j=0; j<sentences[i].size(); j++){
        if(sentences[i][j]==' ') c++;
    }
    maxi = max(c+1,maxi);
    }
    return maxi;    
    }
};