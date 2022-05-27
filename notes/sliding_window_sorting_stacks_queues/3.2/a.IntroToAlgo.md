# Introduction to Algorithms

- Algorithms are defined as, ***a process or set of rules to be followed in calculations or other problem-solving operations, especially by a computer***
- A general example is given below, which gives the algorithm to add two numbers

```java
1. Start
2. Declare variable A and B, and sum
3. Read the values A and B, from the user
4. sum = A + B
5. Display sum
6. Stop
```

- Some of the popular algorithms are Selection Sort (Sorting Algorithm), Bubble Sort(Sorting), Linear Search (Searching Algorithm) etc.
- We will be looking at the following two sorting algorithms in details
1. **Selection Sort**
2. **Bubble Sort**

---

## Selection Sort

- Selection Sort is a sorting algorithm which works in such a way that the entire list is divided into two parts - the sorted part, and the unsorted part.
- Initially, the sorted part is empty, and the unsorted part contains all the elements in the list itself.
- The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array.
- This process continues moving unsorted array boundary by one element to the right.
- This algorithm is an in-place algorithm, such that the input array is modified into sorted form and no extra space is required.
- The following block contains the Pseudo Code for the selection sort algorithm

```java
function selectionSort(array){
		n = array.length
		for (i = 0;i<n-1;i++){
				min = i
				for (j = i + 1;j<n;j++){
						if (arr[min] > arr[j]) min = j;
				}
				swap(array,min,i)
		}
}
```

- **Time Complexity** → $O(N^2)$
- **Space Complexity** → $O(1)$
- The following block shows how selection sort works on an unsorted array

```java
array = [5,4,0,1,2]

After first iteration -> [0,4,5,1,2]
After second iteration -> [0,1,5,4,2]
After third iteration -> [0,1,2,4,5]
After fourth itertion -> [0,1,2,4,5]

```

---

## Bubble Sort

- Similar to selection sort, bubble sort also works by dividing the arrays into two parts, sorted part and unsorted part.
- The difference between bubble sort and selection sort lies in the fact, in which they enhance the sorted part. Selection sort increases the length of the sorted part by ensuring that at each step, the minimum element in the unsorted part, finds its place in the sorted part, whereas bubble sort ensures that the maximum element in the unsorted part, finds its position in the sorted part.
- Bubble sort compares adjacent element, and swaps them if they are out of order. At each step, the maximum element in the unsorted part of the array, finds its place in the sorted part.
- Similar to bubble sort, this algorithm is in-place, ensuring that no extra space is required.
- The following code block gives the Pseudo code for bubble sort.

```java
function bubbleSort(array){
		n = array.length
		for (i = 0;i<n-1;i++){
				for (j = 0;i<n-i-1;j++){
						if (array[j] > array[j + 1]) swap(array,j,j+1)
				}
		}
}
```

- A short optimization is bubble sort can be that if we count the number of swaps that happen in the nested loop. If the number of swaps are zero, then it can be confirmed that the array has been sorted, and we can break out of the loop.

```java
function bubbleSort(array){
		n = array.length
		for (i = 0;i<n-1;i++){
				number_of_swaps = 0
				for (j = 0;i<n-i-1;j++){
						if (array[j] > array[j + 1]) {
									swap(array,j,j+1)
									number_of_swaps++
						}
						if (number_of_swaps == 0) break
				}
		}
}
```

- **Time Complexity** → $O(N^2)$
- **Space Complexity** → $O(1)$
- The following block shows how bubble sort works on an unsorted array

```java
array = [5,4,0,1,2]

After first iteration -> [4,0,1,2,5]
After second iteration -> [0,1,2,4,5]
After third iteration -> [0,1,2,4,5]
```