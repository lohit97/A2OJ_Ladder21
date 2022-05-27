# 5.1.a

# Binary Search

### 1. Searching

- Searching is the elementary task that we do on daily basis.
    - For Ex: Searching a word in a dictionary.
- There are only Handful of algorithms exists of search algorithms.
- Some Popular Algorithms are Linear Search, Binary Search, Interpolation Search, Ternary Search, etc.
- Every algorithms has its own pros and cons.

---

### 2. Linear Search Algorithm

- Linear Search compare each item of the collection to the key item.
- We stop the searching when we find the element.
- For ex : Given students roll numbers in an array, and we need to find whether a particular roll no. x exists or not. We can leverage Linear search to figure it out. We compare each Roll number with the roll number x to be searched. If it's found then we say that Roll No. x is present else we say that Roll No. does not exist.
- **Sample Code**

    ```jsx
    for( i = 0; i<array.length; i++){
    		if array[i] === element {
    				return "Yes";
    		}
    }
    return "No"
    ```

### 3. Binary Search Algorithm

- Binary Search is based on Divide and Conquer Technique.
    - **Divide :** Break or divide the problem into the number of subproblems which are smaller instances of the same Problem.
    - **Conquer :** Breaking the subproblems into smaller subproblems.
    - **Combine :** Combine the solutions of the subproblems into the solution of original sub-problems.

    [![image](https://www.linkpicture.com/q/bs1_1.png)](https://www.linkpicture.com/view.php?img=LPic61add461ee4ee332899616)

    **Algorithm**

    1. Repeatedly Divides the problem into Sub-Problems that may contain the item.
    2. It continue halving the problems untill it finds the item.

    ---

### 4. **Binary Search Vs Sequential Search**

![https://media.giphy.com/media/BOKVyKqDGXvpe/giphy.gif](https://media.giphy.com/media/BOKVyKqDGXvpe/giphy.gif)

---

### 5. Iterative vs Recursive Implementation of Binary Search

```python
def iterativeBinarySearch(array, low, high, element):

	while low <= high:
		middle = low + (high-low)/2

		if array[middle] == element:
			return middle

		if array[middle] < element:
			low = middle + 1

		else:
			high = middle - 1
	
	return -1
```

```jsx
def recursiveBinarySearch(array, low, high, element):

	if high >= low:
		middle = low + (high-low)/2

	if array[middle] == element:
			return middle

	if array[middle] > element:
		return recursiveBinarySearch(array, low, middle-1, element)

	return recursiveBinarySearch(array, middle+1, high, element)
```

---

### 6. How should the "mid" be calculated

- $mid = (start + end)/2$
    1. This Formula is adding two integer.
    2. Since, We are adding two integer number, there is a possibility of integer overflow if these two numbers are very large

- $mid = start  + (end-start)/2$
    1. here, (end - start) < end . Therefore, This formula will not cause integer overflow for large values of start and end.

---

### 7. Time Complexity Of Binary Search

1. **Best Case Of Binary Search** 
    - When in first comparision , we found our element.
    - Best Case Complexity is O(1)
2. **Worst Case Of Binary Search**
    - Binary Search Finds its item at the end of the array.
    - Suppose , the array Size is 32
        - It will take atleast 5 comparision , to find the target element.

        ```jsx
        32/2 = 16 ----------------> Comparision 1
        16/2 =  8 ----------------> Comparision 2
        8/2 =   4 ----------------> Comparision 3
        4/2 =   2 ----------------> Comparision 4
        2/2 =   1 ----------------> Comparision 5

        Total = 5 Comparision
        ```

        There is a pattern between input size and number of comparison

                                            $32 = 2^5$

        Suppose n is the size of the input and k is the number of comparison, Then

                                        $n = 2^k$

         Applying Logarithm Both Side,

                                        $log_2(n) = k$

        **Thus , The worst case complexity of binary search is $O(log_2 n)$**

    **3. Recurrence Relation**

    - T(n)=T(n/2) + Constant

---

### 8. Square Root of an Integer

### **Problem Statement : Given an integer x, find it’s square root. If x is not a perfect square, then return floor(√x).**

### Solution :

- In binary search, we have to find a target element. Here we have to look for the element whose square will equal to our target. So this problem can be thought of as a searching problem.
- We deploy binary search when we don’t want to iterate over every element. Here also we want the same.
- Binary search is done in a sorted array. Here we are also using our algo for 1 to N.

### **Algorithm**

- Given a non negative integer N. Return its square root.
- Set start to 1 and End to N.
- The looping condition will be the same as the binary search algorithm.
- Calculate mid position = (start+end)/2

    a) Case 1: Mid element * Mid element = N We got our no, which is mid element. It is basically the case when N is a perfect square.

    b) Case 2: Mid element * Mid element > N Update end to mid-1

    Case 3: Mid element * Mid element < N Update starts to mid+1. Also, save this mid element in a variable say Root. It is the case where N is not a perfect square.

- If N is a perfect square then our answer is mid otherwise Root.
- Handle the base cases for N=1 and N=0.

### **Example**

```jsx
`1: N=100 (A perfect square)

Step 1: start = 1, end = 100, mid = (1+100)/2 = 50
50 *50 = 2500 > 100 
Since mid * mid > N, update end =  50-1

Step 2: start = 1, end =49, mid = 25
25 * 25 = 625 >100

Step 3: start = 1, end =24, mid = 12
12 * 12 = 144 >100

Step 4: start =1, end = 11 , mid =6
6 * 6 = 36 < 100
Since mid * mid < N, update start= 6+1

Step 5: start = 7, end = 11 ,mid =9
9*9 =81 <100

Step 6: start = 10, end =11 , mid =10
As 10 * 10 = 100 return mid i.e. 10

2: N=110 (Not A perfect square)

Step 1: start = 1, end = 110, mid = (1+110)/2 = 55
55 *55  > 110 
Since mid * mid > N, update end =  55-1

Step 2: start = 1, end =54, mid = 27
27 * 27  >110

Step 3: start = 1, end =26, mid = 13
13 * 13  >110

Step 4: start =1, end = 12 , mid =6
6 * 6 = 36 < 110
Since mid * mid < N, update start= 6+1 and Root to 6

Step 5: start = 7, end = 12 ,mid =9
9*9 =81 <110, update start= 9+1 and Root to 9

Step 6: start = 10, end =12 , mid =11
11 * 11 = 121 >110

Step 7: start = 10, end =10 , mid =10
10 * 10 = 100  < 110 , update start= 10+1 and Root to 10

Step 8: start = 11, end =10 , Loop end as start> end
Return Root i.e. 10 . It is floor(sqrt(110))`
```

### **Time Complexity:**

### **Recurrence : T(n) = T(n/2) + c**

- In every step of binary search,
    - We used to recur either left half or right half .
    - This will result in worst Case Time Complexity : `O(logn)`

### **Space Complexity:**

- No extra memory is needed
- Space : `O(1)`
