# 5.1.e

# Interview Problems

### 1. Two Sum Problem [Two Numbers whose sum is equal to K in sorted array ]

In this question, we are given a sorted array A, of size N, and an integer K, and we have to find out if there exist two values in the array, stored at different indices, such that their sum is exactly to K. 

- A naive brute force approach is to, fix one value, and then try to find the sum of this particular value with all the other values in the array, and check if any of them become equal to K.
- The worst-case time complexity of this approach is `O(N^2)`, where N is the size of the array.
- But since the array is sorted, a two-pointer approach can be useful here, such that we have two pointers, **left** and **right**, where the left pointer iterates the array from left to right, while the right pointer iterates from right to left.
- At every step, we find the sum of the elements stored at the left and the right pointer in the array. If the value of the sum is greater than the required sum K, we check for a smaller sum, by decreasing the right pointer, else if the sum is lesser than K, then we add a higher value by moving the left pointer ahead.
- If the value is equal to K, we return the index of the left and the right pointer.

### a) **Pseudo Code**

```jsx
function twoElementsWithSumK(array, K)
	left = 0
	right = array.length - 1
	while (left < right)
		sum = array[left] + array[right]
		if (sum == K) break //If the two numbers with sum equal to K are found, we break out of the loop.
		else if (sum > K) right --
		else left++
	return (left, right)
```

### **Example**

```jsx
Array = [2,7,11,15], and the value of K = 9. So, we have a pointer iterating from left to right, 
while another pointer iterates, from right to left. 
So, initally, the value of left = 0 and right = arr.length - 1.
	
1. Initially, when left = 0, and right = 3, then sum = array[left] + array[right], which is equal to 17. 
	 Since this sum is greater than K = 9, we decrement the right pointer, such that, right = 2. 
2. Now, again the sum of values at the left and right index is 13, which is again greater than K, 
	 so we again decrement the right pointer, so that right becomes 1. 
3. Now, the sum of the values at the left and the right index becomes equal to K = 9, so we return the indexes of left and right.
```

### b) **Time Complexity:**

- The time complexity will be `O(N)`, where N is the size of the array.

### c) **Space Complexity:**

- `O(1)`, No extra space is required.