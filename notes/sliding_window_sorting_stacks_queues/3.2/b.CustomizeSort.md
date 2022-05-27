# Customize Sort

- Standard sorting algorithms can be modified or tweaked a little to match a certain requirement. For example, conventionally an array of integers, when sorted returns an array an increasing order. The same sorting algorithm can be tweaked to get the array in decreasing order
- The following code block shows the implementation to get the array in decreasing order using bubble sort

```java
function reverseSort(array[]){
		int n = array.length
		for (i = 0;i<n-1;i++){
				for (j = 0;j<n-i-1;j++){
						if (array[j] < array[j+1]) swap(array,j,j+1)
				}
		}
}
```

- **Time Complexity** → $O(N^2)$
- **Space Complexity** → $O(1)$
- As you can notice, the time and space complexity of the solution remains unaffected

## New Sorting Algorithm

- This question basically wants to sort the array, such that the values are sorted based on their modulo with K
- For example, given an array → `[12, 18, 17, 65, 46]`,  and the value of `K = 6` , we find the modulo of all the values in the array with K, which results in the following values

```java
12 % 6 = 0
18 % 6 = 0
17 % 6 = 5
65 % 6 = 5
46 % 6 = 4
```

- As you can see, the value obtained after modulo with K, for 46 is 4, and needs to be swapped with 17, as the modulo obtained for K with 17, is 5
- For 12 and 18, the order remains the same, as the modulo is 0 for both of them. Similarly, the order of 17 and 65 remains the same
- Our existing sorting algorithms can be modified to sort the array in the given fashion. The idea is to use the value of modulo obtained for K, to determine the decision to swap or not
- The following code block shows the implementation for bubble sort for the same question

```java
function customSort(array[], k){
		n = array.length
		for (i = 0;i<n;i++){
				for (j = 0;j<n-i-1;j++){
						if ((array[j] % k) > (array[j + 1] % k)) swap(array,j,j+1)
				}
		}
}
```

- From the above implementation, it can be seen that the time and space complexity as same as that of original bubble sort
- **Time Complexity** → $O(N^2)$
- **Space Complexity** → $O(1)$

---

## Make Leaderboard

- In this question, we have to make the rank list of the students, while we are given the names and scores of the students. The ranking should be done such that

```java
1. The students having more mark gets better rank

2. If students have similar mark, their rank will be same(In case of similar marks, the person whose name comes first in alphabetical order comes first in order. However their rank will be same)

3. The student placed next to the same marks students will get the rank skipping the intermediate ranks.
```

- This question can be basically divided into three parts
- We have to ensure that the names are arranged in alphabetical order, their names should be displayed higher, however, the rank should be the same. Therefore, the list has to be sorted in alphabetical order
- The students with higher marks should be getting the better ranks, therefore, the entire list has to be sorted in decreasing order of marks
- Finally, the ranks are printed along with the student names, according to the given rules
- First thing, we have to ensure that the names are sorted alphabetically. Our existing sorting algorithms can be modified such that the strings are sorted alphabetically. A separate function needs to be created such that, we can identify when to swap two strings or not
- The helper function created is such that the it tells the sort function, when to swap the strings or not

```java
function checkStrings(String a,String b){
		 n = a.length()
		 m = b.length()
		for(i = 0;i<minimum(n,m);i++){
				if (a[i] != b[i]){
						if (a[i] > b[i]) return true
						return false
				}
		}
		return false
}
[AA,BC,CC,DDDC,DDDB]
```

- This function returns `true` if the strings need to be swapped, and returns `false` if the strings are in correct order
- The following function is called, to check if the two strings need to be swapped or not

```java
function sortNames(names[],marks[]){
	n = names.length
	for (i = 0;i<n;i++){
			for (j = 0;j<n-i-1;j++){
					if (checkStrings(names[j],names[j+1]) == true) swap(names,marks,j,j+1)
			}
	}
}
```

- The swapping has to be done in such a way, that the marks at a corresponding index are also updated along with the names at that index
- After this, the marks are updated in the descending order. Therefore, the existing sorting algorithm is modified to get the required order

```java
function sortMarks(names[],marks[]){
	n = names.length
	for (i = 0;i<n;i++){
			for (j = 0;j<n-i-1;j++){
					if (marks[j] < marks[j + 1]) swap(names,marks,j,j+1)
			}
	}
}
```

- Finally, the rank list is to be printed such that the students with the same ranks get the same marks, by skipping the immediate ranks. The below code block shows the implementations for the same

```java
function printRankList(names[],marks){
	count = 0
	rank = 1
	previous = -1
	n = names.length
	for (i = 0;i<n;i++){
			if (marks[i] == previous){
						print (rank,names[i])
			}else{
					rank += count
					count = 0
					print (rank,names[i])
			}
			count++
			previous = names[i]
	}
}
```

- **Time Complexity** → $O(N^2 * M)$, M is the maximum length of the string.  It would be wrong to consider M, as an average of all the strings, for example, consider the test case → `[aa,bb,cc,ddde,dddc]`, in the worst case, the helper function will run time 4 times, which is the maximum length of the string, while the average length of the string is 3, and hence it does not take care of the worst case
- **Space Complexity** → $O(1)$, as no extra space is required

---