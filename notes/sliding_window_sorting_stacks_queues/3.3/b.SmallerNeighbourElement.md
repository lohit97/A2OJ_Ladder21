# Application of Stacks DS : Smaller Neighbor Element

---

## Pre-requisites —> Stacks

- Let A be an array having N non-negative integers. The smaller neighbor element for an array element A[ i ] ( 0 ≤ i ≤ N ) is the first smaller element on the left side of A[ i ] in array. Elements for which no smaller element exist (on left side), the smaller neighbor element is -1.

- Example :

```python
A : [ 5, 6, 3, 4, 2 ]

Array elements  Smaller neighbor   Explanation

A[0] = 5           -1,             No element is there on the left of 5
A[1] = 6            5,             Nearest element smaller than 6 on it's left is 5 
A[2] = 3           -1,             No element smaller than 3 exists on it's left
A[3] = 4            3,             Nearest element smaller than 4 on it's left is 3
A[4] = 2           -1,             No element smaller than 2 exists on it's left
```

### Brute force approach

- For each element of array A[ i ], check for the nearest j ( j < i ) such that A[ j ] < A[ i ]. If no such A[ j ] exists, then nearest smaller element of A[ i ] is -1.
- Time complexity for the above approach is $O( N*N )$, where N is the size of array.
- No extra space is required to solve this problem using brute force approach. Hence the space complexity is $O(1)$.

### Approach using stacks

Observation:

1. If A[i] < A[j] ( 1 <= j < i <= N ), then A[j] can never the nearest smaller element for A[i]. 
2. For any array element A[k] ( i < k ), A[i] is a better choice for nearest smaller neighbor than A[j].

Hence to calculate the nearest smaller element for any A[i] ( 1 <= i <= N ) we maintain a stack S and pop out all the elements T, from the top of stack one by one such that T > A[i] . After all pop operations are done two situation may arise:

1. If stack is empty, the answer for A[i] is -1.
2. Else, the top element of stack is the nearest smaller element of A[i].

Note - Dont forget pushing A[i] into the stack.

### Pseudo code

```python
  A[N]; // Array of size N
  Stack S;
  TOP;
  NearestSmallerNeighbour[N];

  for( i from 0 to N-1 ){
    
     while( S is not empty && S[TOP] > A[i] ){
          S.pop(); // Pop the top element
    }
    
     if( S is not empty )
          NearestSmallerNeighbour[i] = S[TOP];
     else
          NearestSmallerNeighbour[i] = -1;

     S.push(A[i]);

}
```

Below is the dry of the above code using an example 

```python
  Let A = [ 1, 4, 3, 5, 2 ].
  Stack S // Initially empty.

  For i = 0, A[0] = 1, S is empty, hence nearest smaller neighbour of A[0] is -1. Now, push A[0] to S, hence S will be [ 1 ].
  For i = 1, A[1] = 4, S = [ 1 ], S[TOP] = 1 < A[1], no pop operation will occur. Hence nearest smaller neighbour of A[1] is 1. Now, push A[1] to S, hence S will be [ 1, 4 ].
  For i = 2, A[2] = 3, S = [ 1,4 ], S[TOP] = 4 > A[2].Hence pop the TOP of stack. Now, S[Top] =  1, which is < 3. Hence nearest smaller neighbour of A[2] is 1. Now, push A[2] to S, hence S will be [ 1, 3 ].
  For i = 3, A[3] = 5, S = [ 1, 3 ], S[TOP] = 3 < A[ 3 ].Hence no pop operation is required. Hence nearest smaller neighbour of A[3] is 3. Now, push A[3] to S, hence S will be [ 1, 3, 5 ].
  For i = 4, A[4] = 2, S = [ 1, 3, 5 ], TOP = 5. 
  
  Observe:

  S[TOP] = 5 > A[4], hence pop the top of stack. S = [ 1, 3 ], S[TOP] = 3.
  S[TOP] = 3 > A[4], hence pop the top of stack. S = [ 1 ], S[TOP] = 1.
  S[TOP] < A[4], hence nearest smaller element of A[4] is 1.
```

### Time Complexity

$O( N )$, each element of array A gets pushed and popped from the stack at most once.

### Space Complexity

$O( N )$, at most N elements can be there inside the stack.
