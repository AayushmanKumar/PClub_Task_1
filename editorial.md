A possible 2D Dynamic Programming Solution is as follows:
<p>
we can itarate over all the sub-arrays possible. <br>
We store the best difference for each sub-array in our dp array, where dp[left][right] stores the best difference possible for the entire sub-array $a_{left},a_{left+1},....,a_{right-1},a_{right}$. <br>
Now we give each player the subarray from left -> k once and k -> right once and calculate the best differnce among all possible values of k from left -> right using: <br>
 
```
 dp[left][right] = max(dp[left][right] , diff(left,k) - (k+1<=j ? dp[k+1][right] : 0));
 dp[left][right] = max(dp[left][right] , diff(k,right) - (k-1>=i ? dp[left][k-1] : 0));
```

<br>Finally the $dp[0][N]$ should store the best difference over the entire array on which the game started with !<br>
Time Complexity will be $O(N^3)$ <br>
because we iterate over the array of length N and each time, dp logic takes up $O(N^2)$.
 </p>
