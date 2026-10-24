class Solution {
public:
    int f(string &s) {
        int d[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int m = (s[0] - '0') * 10 + (s[1] - '0');
        int x = (s[3] - '0') * 10 + (s[4] - '0');
        for (int i = 0; i < m - 1; i++) x += d[i];
        return x;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a = max(f(arriveAlice), f(arriveBob));
        int b = min(f(leaveAlice), f(leaveBob));
        return max(0, b - a + 1);
    }
};