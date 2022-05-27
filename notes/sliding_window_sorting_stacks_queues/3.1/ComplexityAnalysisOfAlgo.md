# Complexity Analysis of Algorithms

*An essential aspect to data structures is algorithms. Data structures are implemented using algorithms. An algorithm is a procedure that you can write as a program. An algorithm states explicitly how the data will be manipulated.*

## **Need for Complexity Analysis**

Suppose you have been given a positive integer n and asked to write a program to check if the given **n** is a prime number or not

**Approach #1.**

```
declare variable i = 2
declare boolean variable is_prime = True
while i < n
	if n is divisble by i
	     is_prime = False
	increment i by 1

is_prime has the answer if n is prime or not
```

**Approach #2.**

```
declare variable i = 2
declare boolean variable is_prime = True
while i <=  square_root(n)
	if n is divisble by i
	     is_prime = False
	increment i by 1

is_prime has the answer if n is prime or not
```

If both the approaches are implemented on systems with exact same configuration, approach #1 will take more time because there are more number of instructions to be executed in that approach. 

For instance, In approach# 1, if n = 100 - then the loop and the instructions written inside the loop will get executed close to 100 times but the same will run close to 10 times in approach 2.
This difference will be significantly higher as the value of n increases. 

→ In any case, we can clearly say that the approach#2 is better than approach# 1 as it is taking lesser time.

But what if the approach #1 is executed on a system which has better configurations than the one on which approach #2 is executed. In that case, there are some chances that Approach #1 perform better in terms of the exact time taken. 

### Based on our discussion above, we can conclude that:

1. There can be multiple ways to solve a problem
2. Two most important parameters that define which way is better than the other are 'Time' and 'Space' taken by the programs (Time has higher priority over space)
3. Exact time and space taken by the program depends on lots of things like hardware, operating system, processors, I/O handling etc
4. Since the exact time & space taken can be a factor of multiple parameters, we must keep this idea of time separate from "wall clock" time, many factors unrelated to the algorithm itself can affect the real time (like the language used, type of computing hardware, proficiency of the programmer, optimization in the compiler, etc.). 

It turns out that, if we chose the units wisely, all of the other stuff doesn't matter and we can get an independent measure of the efficiency of the algorithm - a mathematical function to define the time taken by our program instead of the "wall clock" time. 

We will attempt to remove the various system related parameter from the analysis and define **Time complexity** of an algorithm as the amount of time taken by an algorithm to run as a **function of the length of the input.** Similarly, Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run **as a function of the length of the input.**

---

## Running time of algorithms

We are clear that though the exact time taken in the execution can be a factor of multiple different parameters, but we are interested in developing a mathematical relationship between the time and the input size only - often referred as **Order of growth.** For this reason, we will assume a machine with other parameters fixed and input as the only variable parameter. 

Let's make following assumption about the time taken by that machine:

- Each arithmetic operation takes 1 unit of time
- Each assignment as well as comparison operation takes 1 unit of time
- Each return statement inside a function takes 1 unit of time

The idea is that if we want to restrict the time taken just as a function of length of input, let's assume all the algorithms are implemented on same machine and then compare the time taken.

Based on the assumptions, try to find the time taken by the following code

```python
def product(a, b):
    c = a * b    # 2 unit time taken - 1 for arithmetic operation + 1 for assignment
    return c     # 1 unit time taken 
```

Time taken = 3 units

Similarly, try to find the time taken by following code

```python
# program to calculate product of n numbers present in an array passed as 'arr'
def product(arr, n):
    prod = 1           # 1 unit 
    for num in arr:    # gets executed n times since there are n numbers in arr
        prod *= num    # 2 unit time taken each instance this is executed
    return prod        # 1 unit time taken
```

Total time taken = (1) + (n * 2) + 1

                       = 2*n + 2

Here, total time taken is a function of n 

Following steps like above, we can easily calculate the runtime of written code on any standard machine.

---

## Different notations

If we look at the runtime function that we came up, it is $2 * n + 2$. Similarly, sometimes it can be $n^2 + 2n + 3$. The problem with direct runtime is that it becomes little too precise. So, in order to make the comparisons between the algorithms easier, we just analyze for a larger value of n (input size). As a result, we have benefits like the following

Assume Runtime of Approach  #1: $3n^2 + 5n + 6$

Assume Runtime of Approach #2: $5n^2 + 4n + 8$

If we don't get into the specifics, we can say that both the approaches are of **Quadratic growth.**

Hence, to avoid getting into details, we talk about analysis only when ***n → infinity*** (n as a very high value). 

This is where Different Asymptotic Notations come into picture

### Big-O Notation

The most common notation used is "big O" notation. In the above example, we would say $3n^2 + 5n + 6 = O(n^2)$ (read "big oh of n squared"). This means, intuitively, that the important part of $3n^2 + 5n + 6$  is the $n^2$ part.

**Formally defined as**

> Let f(n) and g(n) be functions, where n is a positive integer. We write f(n) = O(g(n)) if and only if there exists a real number c and positive integer n0 satisfying **0 <= f(n) <= cg(n)** for all n >= n0. (And we say, "f of n is big oh of g of n." We might also say or write f(n) is in O(g(n)), because we can think of O as a set of functions all with the same property.)

Big O gives us a formal way of expressing asymptotic upper bounds, a way of bounding from above the growth of a function. Knowing where a function falls within the big-O hierarchy allows us to compare it quickly with other functions and gives us an idea of which algorithm has the best time performance. 

![Complexity%20Analysis%20of%20Algorithms%20ba44856fa7bd4b419eb7595a7e4d6092/600px-Big-O-notation.png](Complexity%20Analysis%20of%20Algorithms%20ba44856fa7bd4b419eb7595a7e4d6092/600px-Big-O-notation.png)

Example of Big O notation: f(x) ∈ O(g(x)) as there exists c > 0 (e.g., c = 1) and x0 (e.g., x0 = 5) such that f(x) ≤ cg(x) whenever x ≥ x0.
Courtesy Wikipedia

### Lower Bounds and Tight Bounds

Big O only gives you an upper bound on a function, i.e., if we ignore constant factors and let *n* get big enough, we know some function will never exceed some other function. But this can give us too much freedom. 

We have a lower bound, a function that always grows more slowly than f(n), and a tight bound, a function that grows at about the same rate as f(n)

**Big Omega** is for lower bounds what big O is for upper bounds

**Formally defined as:**

> Let f(n) and g(n) be functions, where n is a positive integer. We write $f(n) = \Omega(g(n))$  if and only if g(n) = O(f(n)). We say "f of n is omega of g of n."

This means g is a lower bound for f; after a certain value of n, and without regard to multiplicative constants, f will never go below g.

**Theta notation** combines upper bounds with lower bounds to get tight bounds:

**Formally defined as:**

> Let f(n) and g(n) be functions, where n is a positive integer. We write $f(n) = \Theta(g(n))$ if and only if g(n) = O(f(n)). and g(n) = Ω(f(n)). We say "f of n is theta of g of n."

Following can help you judge if your algorithm is fast enough to get an Accepted ( assuming the algorithm is correct) according to the constraints set by most of the Online judges.

[Analysis for TLE (Time Limit Exceeded) Error](https://www.notion.so/89f1b984c90f443daf6cc28cfdd86303)