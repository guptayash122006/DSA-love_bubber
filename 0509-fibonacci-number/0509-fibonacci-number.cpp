// class Solution {
// public:
//     int fib(int n) {
//         if(n==0 ) {
//             return 0;
//         }
//         if(n==1) {
//             return 1;
//         }

//         int ans = fib(n-1) + fib(n-2) ;
//         return ans ;
//     }
// };


// class Solution {
// public:
//         int dp[31] ;
//     int fib(int n) {
//         memset(dp, -1, sizeof(dp));
//         if(n==0 ) {
//             return 0;
//         }
//         if(n==1) {
//             return 1;
//         }

//         if(dp[n] != -1) {
//             return dp[n] ;
//         }

//         dp[n] = fib(n-1) + fib(n-2) ;
//         return dp[n] ;
//     }
// };


class Solution {
public:
    int fib(int n) {

        if (n == 0) return 0;
        if (n == 1) return 1;

        int prev1 = 1;
        int prev2 = 0;

        for (int i = 2; i <= n; i++) {

            int curr = prev1 + prev2;

            // Shift logic
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};