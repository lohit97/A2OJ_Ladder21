# 5.2.a

## 1. Optimization Problem

- A problem which requires either minimum result or maximum result.
- Let there is a problem P, in which I want to travel from A to B

    Problem P : A → B

    This Problem has n solution , i.e S1, S2, S3.......Sn

    ### 1.1 Feasible Solution

    - Those Solutions Which satisfied the constraint of the problem, are known as Feasible Solution.

    ### 1.2 Optimal Solution

    - Out of Feasible Solutions, The solution which gives the minimum result or maximum result , is known as an Optimal Solution.

    **For Example : Find The minimum travel cost from Bombay To Delhi.**

    **Constraint : Travel Time Should be under 12 hrs**

    [![image](https://www.linkpicture.com/q/Untitled_Diagram_-1.jpg)](https://www.linkpicture.com/view.php?img=LPic61add58da38681461817137)
    
    - Note : There will be only 1 optimal solution but Multiple Feasible Solutions.
    - Thus, Greedy Algorithm is used to solve the Optimization Problem.

### 2. Strategy To Solve Optimization Problem

1. Greedy Technique
2. Dynamic Programming
3. Branch and Bound

---

### 3. Optimal Substructure

- Optimal means best and Substructure means a sub-problem of the main problem.
- If an optimal solution to the main problem can be constructed efficiently from optimal solution of its subproblems, Then we can say that problem have an optimal substructure.
- **For Example:** Suppose we have a network of roads and we are given a task to go from city A to city B by taking the shortest path.

    The optimal solution to our main problem (Shortest Path from A to B) is composed of optimal solutions of smaller sub-problems such as the shortest path between two intermediate cities.

    ### 3.1 How to prove that Optimal Solution is composed of optimal solutions to sub-problems?

    - **Use "Proof By Contradiction".**

    Suppose that we know that shortest path between city A and city B is P(ab).

    **Now, We need to verify that it is composed of collection of shortest paths between intermediate cities.**

    **Proof :** 

    1. consider two intermediate cities U and V that have the shortest path P(uv) through which P(ab) passes.
    2. Suppose another path between U and V call it P’(uv) exists and is shorter than P(uv).
    3. The new path P’(ab) between A and B passing through P’(uv) will be shorter than P(ab) which is a contradiction because we know for sure that P(ab) is the shortest path.
    4. Thus the P’(uv) does not exist and P(uv) is the shortest path between U and V.
    5. Thus , we proved that the shortest path between A and B is composed of a collection of shortest paths.

---

### 4. Greedy Algorithm

- Greedy Algorithm is an approach to solve certain kinds of optimization problems.
- Greedy algorithm makes optimal choice at each step in order to find the globally optimal solution to the problem.
- At any given point on your algorithm, instead searching through all possible solutions and picking the best one, just pick the one that seems the best at that moment.Then On next step, pick the one that seems the best again.

### 4.1 Where you shouldn’t use Greedy approach?

*Question: Given a tree, you need to find the path from the root to any leaf that has the maximum sum of node values along the path.*

[![image](https://www.linkpicture.com/q/greedy_1.png)](https://www.linkpicture.com/view.php?img=LPic61add58da38681461817137)

**Solution :**

- If you form the path by choosing the maximum value child at each level(The Greedy Choice!),
- you will end up with the path 5->7->2 But we can see that clearly **5->3->17** is the path with the maximum sum of values
- **Greedy Approach,**
    1. Greedy Solution : 5 → 3 → 17 
    2. Sum = 5 + 3 + 17 = 25
- **Optimal Approach**
    1. Optimal Solution: 5 → 7 → 2
    2. Sum = 5 + 7 +2 = 14 [ Maximum ]
- Here, Greedy is not giving the optimal maximum or Global Maximum solution Because Greedy is focussing on finding maximum at each step.

---

### 4.2 Greedy : Proof Of Correctness

- Greedy algorithms can be some of the simplest algorithms to implement, but they're often among the hardest algorithms to design and analyze.
- That's Why, Always proove your greedy solution.
- When you are trying to write proof that shows that a greedy algorithm is correct, you often need to show two different results.
- First, you need to show that your algorithm produces a feasible solution, a solution to the problem that obeys the constraints.
- Next, you need to show that your algorithm produces the optimal solution, a solution that maximizes or minimizes the appropriate quantity.

    **Approaches To Prove Greedy**

    1. **Mathematical Proof**
        1. **By Contradiction**
        2. **By Mathematical Induction**
    2. **By Writing Contradicting Test Cases**

---

## 4.3 How To Generate Contradicting Test Cases

### 1. Task Scheduling Problem

- Given some set of tasks with their start time and end time, we have to find that **what is the** **max no. of tasks** that we can do, so that no tasks get overlapped?

[Table : Schedule 1.1](https://www.notion.so/a2338dbc83da44e39efc68661f30f18d)

**Let's try to think some of the possible Solution :**

**Possible Solution 1 : Choose the task first that takes least time.**

- According To the solution, We have to choose those task first whose running time is least.
- As Given In the above Table, We need to place the task according to the increasing order of least time: **Task A, Task D, Task B, Task C**

    [![image](https://www.linkpicture.com/q/Ts1.jpg)](https://www.linkpicture.com/view.php?img=LPic61add58da38681461817137)
    
- Above Solution 1 delivers the optimal solution for the problem.
- But we need to verify this solution, By giving a contradicting Example.
- **Contradicting Test Case**

[Test Case 1](https://www.notion.so/0d3d16f83d8f4b9b824f0cfba30ef2e0)

  [![image](https://www.linkpicture.com/q/TS2.jpg)](https://www.linkpicture.com/view.php?img=LPic61add58da38681461817137)

**Thus , Our Solution 1 Failed**

**Possible Solution 2 : Choose the task first that begins at the Earliest.**

- According To the solution, We have to choose those task first which begins at the earliest.
- As Given In the above Table, We need to place the task according to the Start Time: **Task A, Task B, Task C, Task D**

  [![image](https://www.linkpicture.com/q/ts3.png)](https://www.linkpicture.com/view.php?img=LPic61add58da38681461817137)
  
- Above solution 2 delivers the optimal solution for the problem.
- But we need to verify this solution, By giving a contradicting Example.
- **Contradicting Test Case**

[Test Case 2](https://www.notion.so/ebcba8bdf86b4fe4a3aab42564459bb9)

    [![image](https://www.linkpicture.com/q/ts4_-3.jpg)](https://www.linkpicture.com/view.php?img=LPic61add58da38681461817137)

**Thus , Our Solution 2 Failed**

**Possible Solution 3 : Choose the task first with least overlap.**

- According To the solution, We have to choose those task first which overlaps least.
- As Given In the above Table **Schedule 1.1.** We need to place the task in the order according to the overlap they have: **Task A, Task D, Task B, Task C**

    [![image](https://www.linkpicture.com/q/ts5.jpg)](https://www.linkpicture.com/view.php?img=LPic61add58da38681461817137)

- Above Solution 3 delivering the optimal solution for the problem.
- But We need to verify this solution, By giving a contradicting Example.
- **Contradicting Test Case**

[Test Case 3](https://www.notion.so/c2e0b3a470d34b3a858d25dc711828e2)

  [![image](https://www.linkpicture.com/q/ts6.jpg)](https://www.linkpicture.com/view.php?img=LPic61add58da38681461817137)
  
**Thus , Our Solution 3 Failed**

**Final Solution 4 : Choose the task first which ends earliest.**

- According To the solution, We have to choose those task first which ends earliest.
- As Given In the above Table **Schedule 1.1.** We need to place the task in the order according to the earliest ending time they have: **Task A, Task D**

    [![image](https://www.linkpicture.com/q/ts7.jpg)](https://www.linkpicture.com/view.php?img=LPic61add58da38681461817137)

- Above Solution 4 will generate the Optimal Solution for all cases.
- Trying All the above examples on this solution, it is leading to the optimal Solution.
- **Thus , Our Solution 4 Passed.**

---
