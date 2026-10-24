class Solution {
public:
    int days(string s){
        int month = (s[0] - '0') * 10 + (s[1] - '0');
        int day = (s[3] - '0') * 10 + (s[4] - '0');

        //int total = day;
        int monthdays [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i=0;i<month-1;i++){
            day += monthdays[i];
        }
        return day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a1 = days(arriveAlice);
        int a2 = days(leaveAlice);

        int a3 = days(arriveBob);
        int a4 = days(leaveBob);

        int start = max(a1,a3);
        int end = min(a2,a4);
        if(start > end) return 0;
        return end - start + 1;
    }
};