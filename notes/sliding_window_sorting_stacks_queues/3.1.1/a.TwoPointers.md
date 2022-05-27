# Two Pointers

- As the name suggests, two pointer technique involves the using two pointers (generally, to keep track of indexes), to solve a problem, with the benefit of saving time and space
- A simple example can be to find out if a given string is a palindrome or not. The most intuitive way to check if the given string is a palindrome or not, is to reverse the string, and then check if the reversed string and the original string are equal. But, this problem involves the reversal of the string, and storing it in a separate string, which involves using extra space
- To do the same without using any extra space, we can use a two pointers
- We maintain two pointers `left` and `right`, where left is initalized to the start of the string, while right is initialized to the end of the string.
- At each point, we check if the character pointed by the left pointer and the character pointed by the right pointer are same or not. If they are, we increment the left pointer, and decrement the right pointer, otherwise we return false, which indicates the string is not a palindrome.
- This is done till the point, the two pointers meet. Once the pointers meet, and we exit the loop, indicating all the characters have been processed, we return true

```java
function checkPalindrome(str)
		left = 0
		right = str.length() - 1
		while(left < right)
			if (str[left] != str[right]) return false
			left++
			right--

		return true
```

For the above code, 

**Time Complexity** → $O(N)$

**Space Complexity** → $O(1)$

- You can observe that, in the above case, we were able to reduce the space complexity, while at the same time maintaining the same time complexity, as the previous solution

## **Two Sum**

- One rather interesting and a very popular problem that involves the usage of two pointers, is the **Two Sum** problem
- The problem statement states that, ***Given a sorted array of integers, find out if there exists a pair of integers, whose sum is exactly equal to a given number K. If such a pair exists, return their indexes, else return -1***
- The brute force approach to solve this problem, would be to select a number from the array, for example, we select `A[i]`, and then check if the number `K - A[i]`, exists in the array. The worst case time complexity of this solution is $O(N^2)$
- The time complexity can be further reduced to linear time complexity by maintaining a key value pair, and with the help of Key - Value Pair Objects***,*** the search time can be reduced. But, the space complexity is increased to $O(N),$ in the worst case
- We can solve this problem without using extra space, and in linear time complexity with the help of two pointers technique
- We can make use of the the fact that the array is sorted. We maintain two pointers, one at the beginning of the array, and one at the end of it, and find the sum of the values indicated by the two pointers.
- If the sum of the values indicated by the two pointers is greater than that of K, than that means we have to make the sum smaller, and this is possible by shifting the right pointer towards left, since the array is sorted
- Similarly, if the value indicated by the two pointers is greater than that of K, than that means we have to make the sum larger, so by we shift the left pointer towards right
- If the sum of the two values indicated by the two pointers is exactly equal to K, than that means we have found the required sum, and we return the value of the left and the right pointer
- The following block shows a dry run of this approach

```java
array = [1,2,3,7,8] K = 5
Step 1 -> 1 2 3 7 8 
		array[L]  = 1       array[R] = 8
The sum of the values indicated by left and right is equal to 9, which is greater than K, so we move the right pointer one step to the left
Step 2 -> 1 2 3 7 8
                array[L]  = 1       array[R] = 7
The sum of the values indicated by left and right is equal to 8, which is greater than K, so we move the right pointer one step to the left
Step 3 -> 1 2 3 7 8
                 array[L] = 1   array[R] = 3
The sum of the values indicated by the left and right pointers is 4, which is lesser than K, so we move the left pointer one step to the right
Step 4 -> 1 2 3 7 8
                  array[L] = 2  array[R] = 3
The sum of the values indicated by the left and the right pointer is 5, which is equal to K, so we return the values of the left and the right pointer
```

- The pseudo code for the above approach is given below

```java
function twoSum(array,k){
		left = 0
		right = array.length - 1
		while(left < right){
				sum = array[left] + array[right]
				if (sum == k) return {left, right}
				else if (sum > k) right--;
				else{
						left++
				}
		}
		return -1
}
```

- In the worst case, all the elements of the array will have to be processed once, which makes the time complexity of the solution to be $**O(N)$.**
- We are not using any extra space, therefore, the space complexity of the solution is $O(1)$.

## Conclusion

- Two Pointer technique is a powerful technique, which can be used in scenarios which involve two pointers, and at each step both the pointers are coming towards each other
- Some interesting problems that can be solved optimally using two pointers are
    - Reversing an Array (Constant Space Complexity)
    - Rotating an Array by K Steps
