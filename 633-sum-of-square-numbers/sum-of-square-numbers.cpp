class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0;
        long long b = static_cast<long long>(sqrt(c));

        while (a <= b) {
            long long sum_of_squares = a * a + b * b;
            if (sum_of_squares == c) {
                return true;
            } else if (sum_of_squares < c) {
                a++;
            } else {
                b--;
            }
        }
        return false;
    }
};