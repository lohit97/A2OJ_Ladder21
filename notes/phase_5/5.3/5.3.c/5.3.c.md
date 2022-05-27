# 5.3.c

# DP Approaches

There are two different ways to store our values so that they can be reused.

### 1. Tabulation or the Bottom-Up Approach

- In this approach, we start with the smallest possible subproblems, figure out a solution to them and then slowly build itself up to solve the larger more complicated problem.

### 2. Memoization or the Top Down Approach

- In this approach, we start with the large, complex problem and understand how to break it down into smaller subproblems, memoizing the problem in parts.

### Examples :

**For Example** : Let's try to understand this using fibonacci problem.

The fibonacci sequence is 0, 1, 1, 2, 3, 5, 8, 13, 21,...

The fibonacci equation is

```jsx
**Fn = Fn-1 + Fn-2
F0 = 0
F1 = 1**
```

### Solving Problem Recursively

- The recursion tree for f(6) is

    [![image](https://www.linkpicture.com/q/dp6.png)](https://www.linkpicture.com/view.php?img=LPic61adecc4c92c826389583)

a) **Code**

```jsx
def fibonacciRecursive(n):
   if n <= 1:
       return n
   else:
       return(fibonacciRecursive(n-1) + fibonacciRecursive(n-2))
```

b) **Complexity Analysis**

- Fibonacci eqn recurrence relation is :

    [![image](https://www.linkpicture.com/q/DP4.png)](https://www.linkpicture.com/view.php?img=LPic61adecc4c92c826389583)

Time Complexity = O(2^n)

Space Complexity = O(n)

### Using Top Down Approach

- The top-down approach uses recursion where the problem is divided into smaller sub-problems.

**Recursion Tree**

 [![image](https://www.linkpicture.com/q/dp5.png)](https://www.linkpicture.com/view.php?img=LPic61adecc4c92c826389583)

**Code**

```jsx
int fibonacciTopDownRecursion(int n, vector<int> &dp)
{
	// Base Case
	if (dp[n] != -1) return dp[n];
	
	// Recursive Calls
	else
	{
		dp[n] = fibonacciTopDownRecursion(n-1, dp) + fibonacciTopDownRecursion(n-2, dp);
		
		// Return the nth term
		return dp[n];
	}
}

int fibonacciTopDown(int n)
{
	vector <int> dp (n+1, -1);
	dp[0] = 0
	dp[1] = 1
	return fibonacciTopDownRecursion(n, dp);
}
```

**Complexity Analysis**

Time Complexity = O(n)

Space Complexity = O(n)

### Using Bottom Up Approach

- We can solve the Fibonacci problem by starting from the bottom i.e start by calculating 2nd term and then 3rd term and so on and finally calculating the higher term.
- We use a term tabulation for this process because it is like filling up a table from the start.

    [![image](https://www.linkpicture.com/q/dp7.png)](https://www.linkpicture.com/view.php?img=LPic61adecc4c92c826389583)

a) **Code**

```jsx
int fibonacciBottomUp(int n)
{
	// Intialize Dp array
	vector<int> dp(n+1, 0);

	// Base Case
	dp[0] = 0
	dp[1] = 1

	// Loop over each index of dp starting after the base case
	for(int i = 2 ; i<=n; i++)
		dp[i] = do[i-1] + dp[i-2];

	// return nth fibonacci term
	return dp[n];
}
```

**b) Complexity Analysis**

Time Complexity = O(n)

Space Complexity = O(n)

---

### Top-Down vs Bottom Up

 [![image](https://www.linkpicture.com/q/ComparisionDP.jpeg)](https://www.linkpicture.com/view.php?img=LPic61adecc4c92c826389583)

---

### Dynamic Programming vs Greedy Algorithm

> a DP algorithm will exhaustively search through all of the possible subproblems, and then choose the best solution based on that. Greedy algorithms only search through one subproblem, which means they’re less exhaustive searches by definition.

- Dynamic Programming is similar to the greedy algorithm paradigm.
- In both approaches, we use an optimal substructure, Where the optimal solution will hold the optimal Solution for the sub-problems within it.
- In Dynamic Programming, we find the optimal solution for every single sub-problem and choose the best option.
- In Greedy Algorithm, we only solve one sub-problem, based on an intial greedy choice.

    [![image](https://www.linkpicture.com/q/DPVsGreedy.jpeg)](https://www.linkpicture.com/view.php?img=LPic61adecc4c92c826389583)
