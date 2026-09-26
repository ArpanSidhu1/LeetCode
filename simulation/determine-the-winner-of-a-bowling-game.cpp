class Solution {
    public :
    int isWinner(vector<int> player1, vector<int> player2) {
        int n = player1.size();
        int p1Score = 0;
        int p2Score = 0;
        for(int i=0; i<n; i++) {
            int p1TurnScore = player1[i];
            int p2TurnScore = player2[i];
            if((i == 1 && player1[0] == 10) || (i-2 >= 0 && (player1[i-1] == 10 || player1[i-2] == 10))) {
                p1TurnScore *= 2;
            }
            if((i == 1 && player2[0] == 10) || (i-2 >= 0 && (player2[i-1] == 10 || player2[i-2] == 10))) {
                p2TurnScore *= 2;
            }
            p1Score += p1TurnScore;
            p2Score += p2TurnScore;
        }
        if(p1Score > p2Score) {
            return 1;
        } else if(p2Score > p1Score) {
            return 2;
        } else {
            return 0;
        }
    }
};