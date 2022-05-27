# 5.3.a

# Recursive & Backtracking based solution to Subset sum problem & LCS

### 1. Subset Sum Problem

 [![image](https://www.linkpicture.com/q/Subset_Sum.png)](https://www.linkpicture.com/view.php?img=LPic61add81e73583422504200)

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

 [![image](https://www.linkpicture.com/q/SubsetSumBcktracking.jpg)](https://www.linkpicture.com/view.php?img=LPic61add81e73583422504200)
 
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

    [![image](https://www.linkpicture.com/q/recurrence.png)](https://www.linkpicture.com/view.php?img=LPic61add81e73583422504200)

### d) Psuedo-Code

[![image](https://www.linkpicture.com/q/code1.png)](https://www.linkpicture.com/view.php?img=LPic61add81e73583422504200)

---

### 2. Longest Common Subsequence

### Objective:

Given Two strings sequences, find the length of longest subsequence present in both of them.

### What is Longest Common Subsequence

A longest common subsequence is a sequence that appears in the same relative order, but not necessarily contiguous in both the string.

 [![image](https://www.linkpicture.com/q/lcs.jpeg)](https://www.linkpicture.com/view.php?img=LPic61add81e73583422504200)

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
