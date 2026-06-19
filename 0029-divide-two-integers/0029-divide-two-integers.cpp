class Solution {
public:
    int divide(int dividend, int divisor) {
        
        // overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long long ans = 0;

        // binary division
        while (n >= d) {
            long long temp = d;
            long long multiple = 1;

            while (n >= (temp << 1)) {
                temp = temp << 1;
                multiple = multiple << 1;
            }

            n -= temp;
            ans += multiple;
        }

        // sign check
        if ((dividend < 0) ^ (divisor < 0))
            ans = -ans;

        return ans;
    }
};