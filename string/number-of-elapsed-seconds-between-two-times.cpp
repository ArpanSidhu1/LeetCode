class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int h1,h2,m1,m2,s1,s2;
        sscanf(startTime.c_str(), "%d:%d:%d", &h1, &m1, &s1);
        sscanf(endTime.c_str(), "%d:%d:%d", &h2, &m2, &s2);

        int totalSecondsSt = h1*3600 + m1*60 + s1;
        int totalSecondsEt = h2*3600 + m2*60 + s2;

        return totalSecondsEt - totalSecondsSt;
    }
};