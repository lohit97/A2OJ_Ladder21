# 5.1.b

# Binary Search Problems

## 1. Lower Bound

- It is the lowest insertion position of a given number that will maintain the sorted order in an array.

**For Example**

What is the lowest possible insertion position of `11` in the following array so that it will maintain the sorted order?

```
**What is the lower bound of 11 ->**
+---+---+---+---+----+----+----+----+----+----+----+
| 2 | 3 | 5 | 7 | 11 | 11 | 13 | 17 | 19 | 23 | 29 |
+---+---+---+---+----+----+----+----+----+----+----+
| 0 | 1 | 2 | 3 |  4 |  5 |  6 |  7 |  8 |  9 | 10 |
+---+---+---+---+----+----+----+----+----+----+----+

**Solution: 4

* It is 4 because we can't push 11 into the index 3 as it will make the array unsorted.
* On pushing the 11 into index number 4, then the array will shift right by one index.**
```

### Algorithm

1. Intialise the low as 0 and high as N-1.
2. Compare target number with the middle element of the array.
3. If middle element is less than target then update left as mid + 1.
4. Else update right as mid.
5. Repeat the above steps while left < right.
6. On above loop termination, the low is the lower bound of target in the given array.

### Code

```python
def lowerBound(array, target):
		low = 0
		high = len(array)
		
		if array[high] < target:
				return len(array)

		while low < high:
				mid = (low + (high-low))/2

				if array[mid] < target:
						low = mid + 1

				else:
						high = mid

		return low
```

### Time Complexity

- O(log2 N), where N is the number of elements in the array.

### Space Complexity

- O(1) : No Extra Space required.

---

## 2. Upper Bound

- It is the highest insertion position of a given number that will maintain the sorted order in an array.

**For Example :**

What is the highest possible insertion position of 11 in the following array so that it will maintain the sorted order ?

```
<- upper bound of 11
+---+---+---+---+----+----+----+----+----+----+----+
| 2 | 3 | 5 | 7 | 11 | 11 | 13 | 17 | 19 | 23 | 29 |
+---+---+---+---+----+----+----+----+----+----+----+
| 0 | 1 | 2 | 3 |  4 |  5 |  6 |  7 |  8 |  9 | 10 |
+---+---+---+---+----+----+----+----+----+----+----+

**Solution: 6

* The position will be 6 as it is the last possible insertion index that will maintain  the sorted order.
* On pushing 11 on index 6, The array will be a right shift by one index.**
```

### Algorithm

1. Intialise the low as 0 and high as N-1.
2. Compare target number with the middle element of the array.
3. If middle element is less than equals to target then update left as mid + 1.
4. Else update right as mid.
5. Repeat the above steps while left < right.
6. On above loop termination, the low is the lower bound of target in the given array.

### Code

```python
def upperBound(array, target):
		low = 0
		high = len(array)
		
		if array[high] <= target:
				return len(array)

		while low < high:
				mid = (low + (high-low))/2

				if array[mid] <= target:
						low = mid + 1

				else:
						high = mid

		return low
```

### Time Complexity

- O(log2 N), where N is the number of elements in the array.

### Space Complexity

- O(1) : No Extra Space required.

---

## 3. Frequency Of Number

**Problem Statement :**

Given a sorted array of n elements, possibly with duplicates, find the number of occurrences of the target element.

**For Example :**

```
**Input:** arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 42], target = 8
**Output:** 3
```

```
**Input:** arr = [3, 5, 5, 5, 5, 7, 8, 8], target = 6
**Output:** 0
```

### Algorithm

1. Using Binary Search, Find the first occurence of target in an array. Suppose it is x.
2. Using Binary Search, Find the last occurence of target in an array. Suppose it is y.
3. return (y-x+1)

### Code

```cpp
int count(int arr[], int target, int sizeOfArray){
		int *low = lowerBound(arr, arr+sizeOfArray, target);
		
		// If element is not present
		if low == (arr + sizeOfArray) || *low != target

		int *high = upperBound(low, arr+sizeOfArray, target);
	
		// return count
		return high-low;
}
```

### Time Complexity

- O(log2 N), where N is the number of elements in the array.

### Space Complexity

- O(1) : No Extra Space required.