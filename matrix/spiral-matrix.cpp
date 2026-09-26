class Solution {
public:
    
    void moveSpiral(vector<vector<int>>& matrix,vector<int>& result,int top,int bottom,int left,int right,int type){
        if(type == 1){
            for(int i=left; i<=right; i++){
                cout<<"Top : "<<matrix[top][i]<<endl;
                result.push_back(matrix[top][i]);
            }
        }else if(type == 2){
            for(int i=top; i<=bottom; i++){
                cout<<"Right : "<<matrix[i][right]<<endl;
                result.push_back(matrix[i][right]);
            }
        }else if(type == 3){
            for(int i=right; i>=left; i--){
                cout<<"Bottom : "<<matrix[bottom][i]<<endl;
                result.push_back(matrix[bottom][i]);
            }
        }else if(type == 4){
            for(int i=bottom; i>=top; i--){
                cout<<"Left : "<<matrix[i][left]<<endl;
                result.push_back(matrix[i][left]);
            }
        }
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0;
        int bottom = matrix.size()-1;
        int left = 0; 
        int right = matrix[0].size()-1;
        vector<int> result;
        while(left<=right && top<=bottom){
            // Left to Right.
            moveSpiral(matrix,result,top,bottom,left,right,1);
            top++;
            // Right to Bottom.
            moveSpiral(matrix,result,top,bottom,left,right,2);
            right--;
            if(top<=bottom){
                // Bottom Right to Left.
                moveSpiral(matrix,result,top,bottom,left,right,3);
                bottom--;
            }
            if(left<=right){
                // Right to Left.
                moveSpiral(matrix,result,top,bottom,left,right,4);
                left++;
            }
        }
        return result;
    }
};