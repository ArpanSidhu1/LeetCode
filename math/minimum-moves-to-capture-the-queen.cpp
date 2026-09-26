class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
    if(a==e || b==f) // rook is in the same position as queen
      {
          if(a==e && a==c && (d-b)*(d-f)<0) return 2; // bishop lies in between queen and rook (horizontally).
          if(b==f && b==d && (c-a)*(c-e)<0) return 2; // bishop lies in between queen and rook (Vertically).  
          return 1;
      }   
    if(abs(c-e) == abs(d-f)) // if queen is diagonal to bishop
    {
        if(abs(c-a)==abs(d-b) && ((b-f)*(b-d))<0) return 2;  // if the rook is in between the bishop and queen.
        return 1;
    }
    return 2; // either the rook will be required 2 moves to get the queen.
    }
};