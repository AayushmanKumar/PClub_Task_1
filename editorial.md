A possible 2D Dynamic Programming Solution is as follows:



using dp, we can itarate over all the sub arrays possible.
We store the best difference in our dp array, where dp[left][right] stores the best difference possible for sub array $a_left,a_(left+1),....,a_(right-1),a_(right)$.
Now we give each player the subarray from left -> k once and k -> right once and calculate the best differnce among all possible values of k from left -> right.

'''
 dp[left][right] = max(dp[left][right] , diff(left,k) - (k+1<=j ? dp[k+1][right] : 0));
 dp[left][right] = max(dp[left][right] , diff(k,right) - (k-1>=i ? dp[left][k-1] : 0));
'''

Time Complexity will be O(n^3) because we iterate over the array and each time, dp logic takes up O(n^2)
