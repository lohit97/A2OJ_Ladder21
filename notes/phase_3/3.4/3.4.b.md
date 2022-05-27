# PSC ( QUEUE )

---

### Sliding window maximum

**Pre-requisites —> Deque**

### Problem statement :

Given an array A having N positive integers and an integer K. Find the maximum for each subarray of size K.

Example :

```python
A[5] = { 1, 6, 3, 5, 7 }, K = 2 
Output: 6 6 5 7
Explanation: 
Maximum of 1 and 6 is 6
Maximum of 6 and 3 is 6
Maximum of 3 and 5 is 5
Maximum of 5 and 7 is 7
```

### Approach using deque

We are going to use index of elements in dequeue instead of the array elements.

1. Process the first k elements separately to initiate the dequeue
2. Iterate over the array. At each window processing :
    - Clean the dequeue :
    - Keep only the indexes of elements from the current sliding window
    - Remove indexes of all elements smaller than the current one, since they will not be the maximum ones
    - Append the current element to the dequeue
    - Output the dequeue[0] at the end of each window processing, as it is the maximum value

### **Pseudo code:**

- Sliding Window Maximum using Dequeue

    ```python
      Begin
          q = Dequeue()
          ans = []
          // First K elements
          for( i = 0 to k-1)
          {
              while(!q.empty() and  arr[i] >= arr[q.back()])
              {
                  q.pop_back()
              }
              q.push_back(i)
          }
          ans.append(arr[q.front()])

          // For rest elements
          for(i = k to n-1)
          {
                  while(!q.empty() and q.front() <= i-k)
                      q.pop_front()

                  while(!q.empty() and arr[i] >= arr[q.back()])
                      q.pop_back()
                  q.push_back(i)
                  ans.append(arr[q.front()])
          }
          return ans
      End

    ```

### Time Complexity:

$O( N )$, where N is the size of array

### Space Complexity:

$O( K )$, where K is size of window

### Alternate Solution:

Using heap we could have solved the problem by making a max heap of size k and then inserting new elements to it as we move the window ahead and using heapify to maintain the heap and get the maximum value from root of the max heap, complexity of this approach will be $O(n*log(k))$

---
