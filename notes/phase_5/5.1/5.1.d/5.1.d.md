# 5.1.d

## Classical Problems Of Binary Search

[![image](https://www.linkpicture.com/q/codingInterview.jpeg)](https://www.linkpicture.com/view.php?img=LPic61add5180850e950938297)

### 1. Minimum in sorted & rotated array

- We want to find the smallest element in a rotated sorted array.
- What if the array is not rotated? How do we check that? If the array is not rotated and the array is in ascending order, then the last element > the first element. This means there is a point in the array at which you would notice a change. This is the point which would help us in this question.
- We call this the Inflection Point. In this modified version of the binary search algorithm, we are looking for this point. The following condition holds true, with regards to the inflection point.
- All the elements to the left of inflection point > first element of the array.
- All the elements to the right of inflection point < first element of the array.

### a) **Algorithm**

- Find the mid element of the array.
- If mid element > first element of array this means that we need to look for the inflection point on the right of * mid.
- If mid element < first element of array this that we need to look for the inflection point on the left of mid.
- We stop our search when we find the inflection point, when either of the two conditions is satisfied:
    - nums[mid] > nums[mid + 1] Hence, mid+1 is the smallest.
    - nums[mid - 1] > nums[mid] Hence, mid is the smallest.

### b) **Time Complexity:**

- `O(logN)`, where N is the size of array.

### c) **Space Complexity:**

- `O(1)`,no extra space required.

---

### 2. Search in Rotated and Sorted Array

The entire array is not sorted from left to right, the subarray on the left of the pivot and on the right of the pivot will still be sorted. We can use this fact and apply binary search to find the element in the array in O(log(n)) time complexity.

In this rotated sorted array we would first need to find out the point/index which divides the array into two parts such that we have two sorted arrays and then decide which part does target belongs to.

- arr = [ 5 6 7 8 1 2 3 4]
- For e.g. in the array if we are searching for target = 6 then first part of the array is where we need to search by using Binary Search.

### a) **Algorithm**

- Divide the array and perform binary search to find the pivot point.
- After applying binary search, pivot can be found.
- After finding out the pivot, Now divide the array in two sub-arrays.
- As individual sub-arrays are sorted. Thus, the element can be searched using Binary Search.

### b) **Time Complexity:**

- `O(logN)`, where N is the size of array.

### c) **Space Complexity:**

- `O(1)`, no extra space required.

---

### 3. Peak Element in an Array

### **Approach 1 : Linear Search**

### a) **Algorithm :**

1. Check first , whether the first element of the array is greater then the next element or the last element is greater than its previous element . If true, then return the number.
2. If not then traverse the array for second to second last element and check for each element whether it is greater then its neighbours or not.
    - Consider an array nums of size n.
    - Condition nums[i] > nums[i-1] and nums[i] > nums[i+1]

### b) **Time Complexity:**

- `O(N)` Beacause one traversal is needed, where N is the size of array.

### c) **Space Complexity:**

- `O(1)` : No Extra Space needed.

---

### **Approach 2 : Binary Search**

### a) **Algorithm**

1. Two varaibles are initialized , low = 0 and high = size-1
2. Iteration will keep on running , While low≤high
3. Calculate mid , check whether it is the peak element or not, If yes then return.
4. If the left side of the middle element is greater then find the peak on the left side.
5. otherwise try to find on the right side.

### b) **Complexity Analysis for Binary Search**

1. **Time Complexity**

    Time complexity is **O(Logn)** Because of binary search.

2. **Space Complexity**

    O(1), no extra space required.

---

### 4. Check if a given number is perfect square

- The number which is made by squaring a whole number is called a perfect square.

**For Example : 16 is a perfect square number because we can get 16 by squaring 4.**

### a) Algorithm

1. Intialise the low as 2 and high as N/2.
2. Compare target number with the square of mid. If equals then return 1.
3. If square of mid is greater than target then update high as mid -1.
4. Else update low as mid+1.
5. Repeat the above steps while left ≤ right.
6. If above loop terminate, then there  is No number exist. 
7. Therefore, return -1.

### b) Code

```python
def validPerfectSquare(N):

		if N == 1: 
				return 1

		low = 2
		high = len(array)/2
		
		while low <= high:
				mid = (low + (high-low))/2

				if mid*mid == N:
						return 1

				elif mid*mid > N:
						high = mid - 1

				else:
						low = mid + 1

		return -1
```

### c) **Time Complexity:**

- `O(N)` Beacause one traversal is needed, where N is the size of array.

### d) **Space Complexity:**

- `O(1)` : No Extra Space needed.
