class Solution {
public:
    int findClosest(int x, int y, int z) {
    int x_z = abs(z-x); // distance from x to z.
    int y_z = abs(z-y); // distance from y to z.
    // if x distance is greater then y.
    if(x_z>y_z){
        return 2;
    }   
    else if(y_z>x_z){
        return 1;
    }
    return 0;
    }   
};