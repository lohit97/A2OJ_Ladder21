# PSC (2d arrays) & Basics of 3d arrays

## Pre-requisites → 2D Arrays

---

- Till this point, you already know that a 2D array is an array of arrays. A single index is sufficient to identify the position of a particular element in a one dimensional array, in a 2D array, a pair of indices is used to identify the position of a particular element
- For example, the following code block gives the indexes for all the elements in the 2D matrix

```java
matrix = [[1,2,3]
					[4,5,6]
					[7,8,9]]
The indexes of the different elements in the matrix are 
1 -> (0,0)
2 -> (0,1)
3 -> (0,2)
4 -> (1,0)
5 -> (1,1)
6 -> (1,2)
7 -> (2,0)
8 -> (2,1)
9 -> (2,2)
```

- The two indexes `(i,j)` used to define the position of the matrix are commonly known as row and column in the matrix respectively
- Upon observation, it can be seen that on moving down in the matrix, the value of the row is incremented, while on moving up, the values are decremented
- Similarly, on moving left, the value of the column is decremented, and on moving right, the value of the column is incremented
- These observations become very crucial, when we have to traverse the elements in a certain order
- For example, let us suppose that we have to traverse the elements in a way, such that the pattern formed by joining the indexes of the traversed positions is similar to that of a letter `N`

```java
1 2 3 
|\  |     N Traversal of the given matrix -> [7,4,1,5,9,6,3]
4 5 6
|  \|
7 8 9
```

- If you observe carefully, you can see that the first column is being traversed from bottom to top, followed by the primary diagonal, and then followed by the last column from bottom to top
- Therefore, for the first column, the value of   `j (which indicates column)` is 0, and we traverse the row from last to first
- After this, we traverse the primary diagonal, but care has to be taken that the first element, stored at index (0,0) is not traversed again, as it was traversed in the previous iteration
- After this, finally the last column is traversed, such that the value of `j (which indicates column)`  is `(N - 1` , and the row is traversed from bottom to top. But again, the element stored at bottom right corner, stored at position (N-1, N - 1), should not be traversed again
- The following pseudo code shows the implementation of the above approach

```java
function NTraversal(matrix){
		ans = []
		n = matrix.length
		for (i = n-1;i>=0;i--) {
			ans.push(matrix[i][0])
		}
		for (i = 1;i<n;i++){
			ans.push(matrix[i][i])
		}
		for (i = n-1;i>=0;i--){
				ans.push(matrix[n-1][i])
		}
		return ans
}
```

- All the loops are running independently, therefore, the time complexity of the above solution is, 
**Time Complexity** → $O(N)$
- No extra space is required, therefore, the space complexity of the above solution is, 
**Space Complexity** → $O(1)$

---

## 3D Arrays

- Similar to 2D Arrays, 3D arrays are array of 2D arrays. In a 2D Array, we need two indexes to identify a particular position in the 2D array, for a 3D array, we need three indexes to identify a particular position in the 3D array
- As we have rows and columns in a 2D array, we have ***layers, rows and columns,*** in a 3D array
- The following block shows the structure of a 3D array

```java

          [[1,2,3]
		 0 ->	 [4,5,6]
			     [7,8,9]] 
					
					[[10,11,12]
     1->   [13,14,15]
           [16,17,18]]

The index of all the elements in the 3D array given above is
1 -> (0,0,0)    4 -> (0,1,0)    7 -> (0,2,0)
2 -> (0,0,1)    5 -> (0,1,1)    8 -> (0,2,1)
3 -> (0,0,2)    6 -> (0,1,2)    9 -> (0,2,2)

10 -> (1,0,0)   13 -> (1,1,0)   16 -> (1,2,0)
11 -> (1,0,1)   14 -> (1,1,1)   17 -> (1,2,1)
12 -> (1,0,2)   15 -> (1,1,2)   18 -> (1,2,2)

```

- In a 2D array, we have `N * M`  elements, where N x M is the dimension of the matrix, we have 
`L*N*M`  elements, where L x M x N, are the dimensions of the 3D array
- Just like in a 2D array, we can traverse elements in the 3D array, with the help of their indexes
- The following block of code shows the traversal of the 3D array, in the order similar to the previous code block

```java
function traverse(array[][][],layer,rows,columns){
		for (i = 0;i<layer;i++){
				for(j = 0;j<rows;j++){
						for (k = 0;k<columns;k++){
								print (array[i][j][k])
						}
				}
		}
}
```

- In the given solution, all the elements of the 3D array have to be visited once, therefore, the time complexity of the above solution is, 
**Time Complexity** → $O(L*M*N)$
- No extra space is required, therefore the space complexity of the solution is, 
**Space Complexity** → $O(1)$

---