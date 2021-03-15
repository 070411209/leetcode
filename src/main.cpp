#include <iostream>
#include <vector>

using namespace std;
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


int fib(int N) {
    if (N == 1 || N == 2) return 1;
    vector<int> dp(N+1, 0);
    dp[1] = dp[2] = 1;
    for(auto i = 3; i < N; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[N];
}


int main() {
    std::cout << "Hello world" << std::endl;
    clock_t start, end;
    start = clock();
    int ret = fib(20);
    end = clock();
    cout << "Take Time : " << (double)(end - start) << "ms" << endl;
    std::cout << "FIB = " <<  ret << std::endl;
    return 0;
}