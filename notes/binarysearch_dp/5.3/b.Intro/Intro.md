# 5.3.b

## 1. Introduction

> Imagine you have a bag of coins where each coin is of value 5 Rs and you have to find the total amount of money available in that bag, What would you do to find the total amount in the bag?

To solve this problem, we will perform a simple mathematics

- count the number of coins and multiply it with 5 Rs.
- So, If  number of coins are 100 then we have 500 Rs amount of money.

**Now If I add 10 more coins of 5 Rs in that bag, How much is the amount now ?**

**Yes**, Right the amount will be 550 Rs

**Let's analyse our approach to the problem :**

- Did we count all the number of coins in the bag and multiply it with 5 Rs ?
- **No**, Since we already knew that the bag had 100 coins and by adding 10 more coins the total number of coins i.e 110, and when we multiply 110 with 5 Rs. We will get 550 Rs.

This approach to problem solving , is called Dynamic Programming

- We store the answer of a subproblem in memory and use that to solve the problem.
- But this approach cannot be used to solve all types of problems
- How could we identify whether a problem can be solved with Dynamic Programming ?

---

### 2. How could we identify whether a problem can be solved with Dynamic Programming?

      To apply Dynamic Programming, it should satisfy the following properties 

- The problem can be divided into smaller subproblems.
- The Subproblems should be overlapping.
- It should show the optimal substructure property. For example Finding Shortest Path, Longest Path, or the maximum or minimum amount.

---

### 3. When is DP used?

     There are two necessary conditions a problem must satisfy to apply DP :

1. Overlapping Sub Problems
2. Optimal Substructure

### 3.1 Overlapping Sub Problems

- A sub-problem is a smaller version of the problem.
- Divide Conquer Algo works through the principle of sub-problems. The divided part refers to splitting a problem into sub-problems.

    For Ex : Mergesort and quicksort.

- When these sub-problems have to be solved more than once, they are said to be overlapping.

     Let's try to understand this, we will take the example of fibonacci

### 3.1.1 Fibonacci Equation

 [![image](https://www.linkpicture.com/q/Untitled_87.png)](https://www.linkpicture.com/view.php?img=LPic61addb83627d787780814)
 
- Fibonacci problem is solved recursively.
- Recursive tree of call graph for computing the values of the nth Fibonacci tesrm is shown below

### 3.1.2 Recursion Tree

[![image](https://www.linkpicture.com/q/DP1.png)](https://www.linkpicture.com/view.php?img=LPic61addb83627d787780814)

- There are overlapping problems exist in the above tree.
- In the above picture, You can see that there are overlapping sub-problems. f(n-3) is getting solved thrice, f(n-4) is also thrice , etc.

### 3.2 Optimal Substructure Property

- A problem is said to have an optimal substructure if, in order to find its optimal solution, you must first find the optimal solutions to all of its subproblems. In order to find the optimal solution to a given subproblem, you must compute the optimal solution to each of its subproblems, and so on and so forth.

### 3.2.1 Example

**Suppose you want to find the shortest path from A to B.**

Let X be an intermediate point between A and B with a single edge connecting it to A.

 [![image](https://www.linkpicture.com/q/dp2.png)](https://www.linkpicture.com/view.php?img=LPic61addb83627d787780814)

- To find the shortest path from A to B, we need to find the **shortest path from all intermediate nodes(X) to B** and then find the **shortest path from A to X** + **shortest path from X to B** which is shortest for all X.

```jsx
	ShortestPath(A, B) = min(AtoX + ShortestPath(X,B)) for all intermediate nodes
```

- here, we are trying to find the optimal intermediate solution and use that to find the final optimal answer.
