# 5.1.c

## Abstract Binary Search

- To solve Optimization problem where we need to find some maximum or minimum result.
- There is a predicate function which helps in determine which all values will work or not.
- At Each Iteration, Problem space will decrease.

### Example :

Let's try to understand Abstract Binary Search using a Wood Cutter Problem.

**Problem Statement :**

Given an array of n non-negative integers, find the maximum integral value that can be subtracted from each value of the array such that the sum of remaining values is greater than a given value ‘m’.

**Explanation**

We can easily check what is the wood collected if the saw blade was kept at a particular height. For instance, assume the test case is

4 7

20 15 10 17

If the height of blade is kept at 12 units, then the amount of wood collected would be

20 - 12 = 8

15 - 12 = 3

10 - 12 < 0, therefore 0 effectively

17 - 12 = 5

total = 8 + 3 + 0 + 5

= 16 units

a) **Pseudo code for finding the wood collected for a set length of blade (assume ‘len’)**

```jsx
declare length_collected = 0
height = [] of heights of all trees

for each tree i:
		if len < height[i]:
					length_collected += (height[i] - len)
```

- It can be agreed that If for a particular value of x, you can get a sum that is lesser than m, then for all the values bigger than x, you will be getting a sum that will be lesser than m.
- Similarly, if for a particular value of x, you get a sum that is greater than m, then for all the values smaller than x, you get a sum that is greater than m.
- Range in which answer can lie:
    1. Minimum value: 0 (if the length of wood to be collected is equal to the sum of original heights of all the trees)
    2. Maximum value: height of the tallest tree

We can binary search in the given range of potential answers to search the actual answer. If for a particular set length of blade, we can collect ≥m unit of wood, we can discard the left part of the range and search in the right half.

Similarly, if for a particular length of the blade, we could get < m unit of wood, we will discard the right half of range and search just in the left half.

**b) Complexity Analysis**

1. Time Complexity
- O(n * log (max height))

 2.    Space Complexity

- No extra space required for processing, therefore O(1)