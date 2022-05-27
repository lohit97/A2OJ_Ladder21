# Arrays, Strings, Key - Value Pairs

---

## Arrays

- An array is a collection of data elements of similar type, such that the elements in the array are stored at contiguous memory locations
- Since, the elements are stored at continuous memory locations, this makes it easier to access the array elements
- The next element can be obtained by adding the memory required to store a single element, to that of the previous element
- For example, consider the following example → An array contains integer elements, and the first element is stored at Memory location 200 (hypothetically). If it takes 2 units of memory to store a single integer, then the next element will be found at 202, as elements are stored in contiguous manner
- Arrays have indexes, which can be used to access elements. Generally, in most programming languages, indexing starts from 0, which means that the index of the first element is 0
- Consider, the following code block, which contains an array, and the indexes of the different elements in the array

 

```java
array -> [1,2,3,4,5]
Value - Index
1         0
2         1
3         2
4         3
5         4
```

---

## Strings

- Strings are a group of characters. They can also be referred as an array of characters
- The difference between a string and an array of characters, lies in the way they are stored in the memory
- Strings are stored in memory such that, they terminate with a special character, `\0`
- Just like in arrays, strings also have indexes, which can be used to fetch character. For example, consider the string → `aabcc` , the element stored at $0th$ position is `a` , while the character stored at the second position is also `a` , the element stored at 3rd position is `b`, and so on
- Some general terms associated with strings are → `Substrings`  and `Subsequences`
- A substring is a continuous sequence of characters within a string.

 

```java
For example, given the string "abc"
All the substrings of the string are 
"a"
"ab"
"abc"
"b"
"bc"
"c"
```

- A subsequence is a sequence of characters, which can be derived from a given string, without changing the order of elements in the original string

```java
For example, given the string "abc"
All the subsequences of the string are 
"a"
"ab"
"abc"
"ac"
"b"
"bc"
"c"
```

---

## Key Value Pairs

- In a large number of scenarios, it is very useful to have mapping of entities. For example, you must have seen a mapping of the day of the week, with a particular number, such as given below

```java
0 -> Sunday 
1 -> Monday
2 -> Tuesday
3 -> Wednesday
4 -> Thursday
5 -> Friday
6 -> Saturday
```

- From the above block, it can be seen that the number 0 is mapped to `Sunday` , 1 to `Monday` , 2 to `Tuesday` and so on. An arrangement like this is very helpful in a lot of scenarios, and are known as Key - Value Pairs, in some programming languages, they are known as Hash-Maps
- In this data structure, a particular key is associated to a particular value, or a group of values, such that all the keys in the data structure is unique, and can be used to identify only a certain value or group of values. Values, however, can be duplicate
- For example, consider an array = [1,2,2,2,3,4,5], and you have to find the element that occurs the maximum number of times
- The obvious and the brute force approach would be to fix one element and compare it with all the other elements, resulting in a time complexity of $O(N^2)$,in the worst case. This can be improved by using some extra space, in the form of a key - value pair
- For every element, we design the key - value pair such that, it stores the element as the key, and frequency (the number of times an element occurs)
- Finally, we iterate through the key value pair, and find out the element which is occurring the maximum number of times
- The following code block shows the implementation of the above approach

```java
array = [1,2,2,2,3,4,5]

After iterating through the array, the key value pair generated looks as follows
{1 -> 1}
{2 -> 3}
{3 -> 1}
{4 -> 1}
{5 -> 1}

From the key value pair, it can be seen that, the element 2, which occurs 3 times, has the highest frequency
Therefore, the output is 2
```

- The entire array has to be traversed a single time, and all the keys in the key-value pair have to be traversed. Both the loops are independent of each other. Therefore, the time complexity of the above solution is 
**Time Complexity** → $O(N)$, where N is the size of the array
- The size of the key - value pair is determined by the number of keys present in the key - value pair. In the worst case, all the elements in the array will be unique. Therefore,  the number of keys in the key - value pair will be N, which is the size of the array. Therefore, the space complexity of the above solution is 
**Space Complexity** → $O(N)$