# 5.3.d

## Dynamic Programming Problems

### 1. Coin Change Problem

[![image](https://www.linkpicture.com/q/coinChange.png)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### Problem Statement :

> Suppose you’re given an array of numbers that represent the values of each coin. Then you’re given an amount and asked to find the minimum number of coins that are needed to make that amount.

- **** ***Assume the number of coins you have is infinite.***

**Example:**

**Coins: [1, 2, 5]**

**Amount: 11**

**Answer: 3 coins (because 5 + 5 + 1 = 11)**

### Solution :

### Approach 1 : Brute Force

- Generate All subsets of Coin Frequencies from our coin set C that adds up to the sum S.
- Return the subset with minimum coins.

    **For Ex : C = [ 1,2,3 ]  and S = 4**

    All subsets with sum 4 are = {1,1,1,1}, {1,1,2}, {2,2}, {1,3}.

    Subsets with minimum coins = {2,2}, {1,3}

    Size of minimum subset = 2

    Minimum number of coins to get S = 4 is 2.

    - **Complexity Analysis:**

        In the worst case every coin denomination **Ci** could have at most **S/Ci** values. Therefore the number of possible combinations is : 

          S/C1 * S/C2 * S/C3 ...................* S/Cn  =  S^n / C1*C2*C3..............*Cn

          **Time Complexity = O(S^n)**

    In worst case the maximum depth of recursion is n.

    **Space Complexity = O(n)**

      

### Approach 2 : Dynamic Programming

To apply Dynamic Programming, Two conditions must be satisfied :

1. Optimal Substructure
2. Overlapping Sub Problems

1. **Optimal Substructure:** 

Coin change problem can be divided into 2 sub problems.

1. **Selecting a coin:** Make the amount (Sum - coin we added) with the same set of coins.
2. **Ignoring a coin:** Make the same sum with the original set of coins, minus the coin we ignored.

  2.  **Overlapping Sub problems:**

    We have infinite supply of coins Ci so there will be overlapping sub problems.

    It can be handled by memorization.

### a) Psuedocode

 [![image](https://www.linkpicture.com/q/Psuedo_Code_Coin.png)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### b) Recurrence Relation :

[![image](https://www.linkpicture.com/q/coinChange_recrrence.png)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### c) Complexity Analysis

       1. **Time Complexity: O(S*n)**

     Where S is the given sum and n is the number of coins given.

  2. **Space Complexity: O(S)**

As we need storage till amount S to store the sum.

---

### 2. Subset Sum Problem

 [![image](https://www.linkpicture.com/q/Subset_Sum_1.png)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### Problem Statement :

> You are given a set of numbers and a sum ‘S’. Your task is to find a subset from the given set of numbers such that the sum of elements in the subset is equal to sum ‘S’.

### Solution :

### Approach 1 : Backtracking

**Objective :**  Given a set of positive integers, and a value sum S, find out if there exist a subset in array whose sum is equal to given sum S.

**For Example :** Given Array = [ 3 , 2, 7, 1],  Sum = 6

Output : Yes, There exists a subset i.e [3, 2, 1] 

### Subset Sum

**The subset sum problem have following steps :**

1. We include current element in subset and recurse the remaining elements with remaining sum.
2. We exclude current element from subset and recurse the remaining elements.
3. Finally, We return true if we get subset by including and excluding current item else we return false.

### a) Recursion Tree

- Suppose Array = [ 3, 2, 7, 1] , Sum = 6

    Let's consider each element as xi i.e         [ 3,   2,   7,   1]

                                                                       x1  x2  x3  x4

- For each element xi, We have two choices :
    1. xi is included
    2. xi is not included

 [![image](https://www.linkpicture.com/q/SubsetSumBcktracking_1.jpg)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### b) Complexity Analysis :

### 1. Time Complexity for Brute Force

- Since, The No. Of Elements are N i.e 4
    1. No. Of Levels = 5 (including root)
    2. Height of Tree = 4
    3. Thus , Total No. Of Paths = 2^4

- Now, For N no. of elements
    1. No. Of Levels = N+1 (including root)
    2. Height Of Tree = N
    3. Thus, Total No. Of Paths = 2^N

Thus, **Time Complexity = O(2^N)**  Because we need to calculate 2^N paths

### 2. Space Complexity For Brute Force

- As Such no Extra Space is required
- Thus , **Space Complexity is O(1)**

### c) Recurrence Relation

- The following is the recurrence relation :

    [![image](https://www.linkpicture.com/q/recurrence_1.png)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)
    
### d) Psuedo-Code

 [![image](https://www.linkpicture.com/q/code1_1.png)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### Approach 2 : Dynamic Programming

1. To improve the time complexity, We need to minimize the recursive calls.
2. Since we have many repetitive calls, We will use Dynamic Programming.
3. The main Idea of Dynamic Programming is :
    - Avoid recomputing the same sub-problem by storing the answers
4. But The question is :
    - How to identify the sub-problems
    - How much space we need

### a) **How to identify the sub-problems ?**

The sub-problems basically have two things i.e Original Array, Target Sum

For Ex: SubsetSum( N, Sum)

 [![image](https://www.linkpicture.com/q/ss1_2.jpg)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)
 
### b) **How much space we need ?**

- **We Store the answer based on 2 parameters :**
    1. **Start Index in the array**
    2. **Value of Sum**
- The Starting index can range between 0 - n-1
- The Value of sum has (S+1) different values
- **Thus, The Total number of sub-problems are n(S+1)**

### c) Psuedo-Code

 [![image](https://www.linkpicture.com/q/code2_2.png)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)
 
### d) Complexity Analysis

### 1. Time Complexity

        **As The Total number of Sub-problems is n(S+1)**

   **The Running Time Complexity is : O(nS)**

- **n is the Size of the array**
- **S is the target sum**

### 2. Space Complexity

        **As The Total number of Sub-problems is n(S+1)**

   **The Space Complexity is : O(nS)**

- **n is the Size of the array**
- **S is the target sum**

---

### 3. Longest Increasing Subsequence

 [![image](https://www.linkpicture.com/q/LIS.png)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### Problem Statement :

> Given an unsorted array of integers determine the length of the longest subsequence whose elements are in strictly ascending order.

**For Examples :**

```
Input: {1,5,2,7,3}
LIS = 3.  
The longest increasing subsequence could be any of {1,5,7},{1,2,3},{1,2,7}

Input: {13,1,3,4,8,4}
LIS = 4.  
The longest increasing subsequence {1,3,4,8}

Input: {13,1,3,4,8,19,17,8,0,20,14}
LIS = 6.  
The longest increasing subsequence {1,3,4,8,17,20},{1,3,4,8,19,20}
```

### Solution :

### Approach 1 : Backtracking

1. Given Array, At every step we have to choices either to include first element of array or not.
2. If Include then compare the array element with Prev Value. (Initially Prev Value = -1) 
    1. If array element > Prev :
        - Include the array element into , LIS array
3. If not include, Then Pass the array to next recursive loop without having the first array element and also not include the element into LIS array.

   [![image](https://www.linkpicture.com/q/includeExclude.jpg)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### a) Recursion Tree

- Let's consider a array : array = {1, 2, 5, 3, 4}
- We have two choices at every step :
    - Include
    - Not Include

    [![image](https://www.linkpicture.com/q/LongestSubTree.jpg)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### b) Complexity Analysis of Backtracking

### 1. Time Complexity

- The recurrence relation Is : **T(n) ≤ 2T(n − 1) + O(1)**
- Thus, **T(n) is O(2^n)**

### 2. Space Complexity

- Space Complexity is **O(n)**

### Approach 2 : Dynamic Programming

- In this method, we believe that the longest increasing subsequence possible upto the ith index in a given array is independent of the element coming later on in the array.
- If upto ith index , we know the length of longest Increasing Subsequence then we can find out the length of LIS possible by including the (i+1)th element.
- We will use DP[] array. DP[i] is the length of longest increasing subsequence possible (upto ith index, including ith element).
- We will include the (i+1)th element depending upon the situation if its greater then the (i-1)th element.

    [![image](https://www.linkpicture.com/q/LISEqn.png)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### Complexity Analysis

### 1. Time and Space Complexity

- Time Complexity : **O(n^2)**
- Where n is the size of the array

### 2. Space Complexity

- Space Complexity : **O(n)**
    - Because DP array of size n is used.
    - Where n is the size of the array.

---

### 4. Longest Common Subsequence

### Objective:

Given Two strings sequences, find the length of longest subsequence present in both of them.

### What is Longest Common Subsequence

A longest common subsequence is a sequence that appears in the same relative order, but not necessarily contiguous in both the string.

 [![image](https://www.linkpicture.com/q/lcs_1.jpeg)](https://www.linkpicture.com/view.php?img=LPic61adee26cce2f1619658731)

### Algorithm

1. Let us consider two input sequnce be X and Y of size n and m.
2. Let LCS(X[i], Y[j]) be the length of LCS of the two sequences A and B.
3. If character of both sequence matches then add 1 and move to next characters of both A and B.
4. Otherwise take maximum by either move characters on first sequence A or second sequence B.
5. Follow Bottom up approach and print LCS.

### Recursive Equation

```cpp
If X[i] == Y[j] : 1 + LCS(i + 1,j + 1)
If X[i] ≠ Y[j] : LCS(i,j + 1) // skipping j th character of Y
If X[i] ≠ Y[j] : LCS(i + 1,j) // skipping i th character of X
```

### Code

```cpp
def lcs(X, Y, m, n):
    if m == 0 or n == 0:
        return 0;
    elif X[m-1] == Y[n-1]:
        return 1 + lcs(X, Y, m-1, n-1);
    else:
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
```

- Approach is good but it is time consuming.
- Time Complexity is O(2^n).

### DP Solution

- DP = Recursion + Memoization

### Code

```cpp
def lcs(X, Y):
    m = len(X)
    n = len(Y)

    # Here we are creating a 2d Matrix 
    L = [[None]*(n + 1) for i in range(m + 1)]

    for i in range(m + 1):
        for j in range(n + 1): 
            if i == 0 or j == 0 :
                L[i][j] = 0
            elif X[i-1] == Y[j-1]:
                L[i][j] = L[i-1][j-1]+1
            else:
                L[i][j] = max(L[i-1][j], L[i][j-1])
    return L[m][n]
```

## **Time-Complexity:**

If m and n are the length of the two sequences respectively then time complexity of this dynamic algorithm will be O(mn).

## **Space-Complexity:**

If m and n are the size of the two sequences respectively then space required by this algorithm will be O(m+n).

---

### 5. 0/1 Knapsack Problem

- **What is KnapSack Problem ?**

    A Thief goes to a house to Steal n Objects having some price values but his knapsack can hold only a fixed amount of weight. Thus, He needs to select the items very smartly so that he maximizes the amount of money he can make from them. 

    **Note : Object can be broken in the pieces**

### Problem Statement

- Let for ith item I ( 1 <= i <= N ), Vi be its value and Wi be its weight. Let S be the subset of items that has the greatest value.
- Let F be a function such that F( i, j ) denotes a state, when there is a choice to put the ith item inside the knapsack weight j. Hence F( 1, W ) returns the greatest value the knapsack can have.
- Now two cases may arise:

    ```cpp
    `Note - Base case: if N = 0 or W<=0 answer will be 0.

     1.  ith item is included in the knapsack. This can happen only when Wi <= j. 
         Hence the maximum value of knapsack we get after this event is: Vi + F( i+1, j-Wi ).
         
     2.  ith item is not included in the knapsack. Hence the maximum value of knapsack we get after this event is: F( i+1, j ).
         
    Hence F( i, j ) returns the maximum of the above two cases.`
    ```

- For any state of knapsack ( i, j ) ( 1<= i <= N , 1<= j <= W ), recursion will do the job in fetching the optimal answer. But in worst case there is will be 2^n recursive calls which is not feasible with given constraints.
- The time complexity can be brought down by memoizing the optimal answers for each state of the knapsack, i.e if F( i, j ) has already been calculated there is no need to calculate it again.

    This technique reduces the calculation of redundant function calls which make the time complexity exponential. This approach is top-down in nature.

- Since the relation is well known the problem can be approached in bottom-up manner which further reduces the overhead of recursive calls.

### **Time Complexity:**

`O(N*W)`, where `N` is the number of items and `W` is maximum weight the knapsack can hold.

It takes at most NxW recursive calls to fill the 2D memoising table.

### **Space Complexity:**

`O(N*W)`, where `N` is the number of items and `W` is maximum weight the knapsack can hold.

A separate 2D table is required for memoising the optimal answer for each state.

---

### 6. Kadane Algorithm

### Problem Statement:

The **maximum subarray problem** is the task of finding the largest possible sum of a contiguous subarray, within a given one-dimensional array A[1…n] of numbers.

![https://miro.medium.com/max/816/1*li8Wlm3ZpInWLvpJ3yE9Iw.png](https://miro.medium.com/max/816/1*li8Wlm3ZpInWLvpJ3yE9Iw.png)

Maximum Sum Subarray (In Yellow)

**For example,** The contiguous subarray with the largest sum is [4, -1, 2, 1], with sum 6. 

### Approach

- Let A be the array of size N having containing integers.
- One way to solve this problem is to generate all subarrays and calculate their sum. Maximum sum among all obtained, is the required answer.

    This leads to a time complexity of `O( N*N*N )` which is not desirable.

- **Observation:**

    Let for any array element A[i] ( 1 < i <= N ), CURR be sum of current subarray that includes A[i-1]. Let MAX be the maximum sum of all subarray possible till A[i-1].

    1. If CURR < 0 and A[i] > 0, then CURR + A[i] is reducing the value of A[i]. Hence it is better for CURR to be reset 0 at (i-1)th index.
    2. Else, assign CURR to CURR + A[i].
    3. If CURR > MAX, update the value of MAX with CURR.

    Hence iterating over the entire array and repeatedly updating the MAX value will fetch our required answer.

- Note - The above appraoch is known as Kadane's algorithm.

```cpp
- Algorithm:

    `Let MAX be the maximum sum of all subarray possible till A[i-1].

    1. CURR = CURR + A[i].
    2. IF ( CURR > MAX ) then, CURR + MAX
    3. ELSE IF ( CURR < 0 ) then, CURR = 0.
    4. Return MAX.`

- Example -

    `Let N = 8, A = [2, -3, 4, -1, -2, 1, 5, -3]

    CURR = 0, MAX = 0.

    Iteration 1: A[1] = 2, CURR = 2, MAX = 2.

    Iteration 2: A[2] = -3, CURR = -1, MAX = 2. Resent CURR to 0.

    Iteration 3: A[3] = 4, CURR = 4, MAX = 4.

    Iteration 4: A[4] = -1, CURR = 3, MAX = 4.

    Iteration 5: A[5] = -2, CURR = 1, MAX = 4.

    Iteration 6: A[6] = 1, CURR = 2, MAX = 4.

    Iteration 7: A[7] = 5, CURR = 7, MAX = 7.

    Iteration 8: A[8] = -3, CURR = 4, MAX = 7.

    Hence the sum of the maximum subarray is 7.`
```

### **Time Complexity:**

`O(N)`, where N is the size of array.

Maximum 32 iterations are required to calculate power of 2 as well as decimal value B.

### **Space Complexity:**

`O(1)`, no extra space is required.
