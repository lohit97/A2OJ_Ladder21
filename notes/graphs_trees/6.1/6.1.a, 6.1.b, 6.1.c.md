# Graph Theory

- Simply put, a graph is a collection of nodes and edges

## Types of Graphs

- We are mainly interested in 2 types of graphs
1. **Undirected Graphs**
2. **Directed Graphs**

![Graphs%20Notes/Screenshot_2020-08-18_at_3.56.42_PM.png](Graphs%20Notes/Screenshot_2020-08-18_at_3.56.42_PM.png)

![Graphs%20Notes/Screenshot_2020-08-18_at_3.57.17_PM.png](Graphs%20Notes/Screenshot_2020-08-18_at_3.57.17_PM.png)

- Incase of undirected graphs, the edge can be traversed in both directions, but in case of directed graphs, it can be traversed only in  a single direction

## Graph Representations

- There are 3 common ways to represent a graph
1. **Edge list**
2. **Adjacency matrix**
3. **Adjacency list**
- Let us understand these representations through examples

![Graphs%20Notes/Screenshot_2020-08-18_at_4.04.14_PM.png](Graphs%20Notes/Screenshot_2020-08-18_at_4.04.14_PM.png)

![Graphs%20Notes/Screenshot_2020-08-18_at_4.08.35_PM.png](Graphs%20Notes/Screenshot_2020-08-18_at_4.08.35_PM.png)

- In general, adjaceny list is the most commonly used form

## Graph Traversals

**Depth First Search**

- We explore depth wise first in these type of traversals, instead of breadth wise
- Let us understand this through an example

    ![Graphs%20Notes/Screenshot_2020-08-18_at_4.24.57_PM.png](Graphs%20Notes/Screenshot_2020-08-18_at_4.24.57_PM.png)

- We use a visited set to keep track of all elements we have visited, so that we don't end up in infinite loops during traversals. A set is the most ideal choice to keep track of visited elements because addition and lookup of elements can be done in O(1) time using sets

```python
# dfs - recursive
# assume g is the graph represented as an adjacency list
# code is same for directed/undirected graphs
# only difference would be how you are constructing the graph

def dfs(root):
    visited.add(root)
    for child in g[root]:
        if child not in visited:
            dfs(child)

g = {
    
    1:[2,3],
    2:[1],
    3:[1]
}

visited = set()
for node in g:
    if node not in visited:
        dfs(node)
```

```python
# dfs - iterative
# assume g is the graph represented as an adjacency list
# code is same for directed/undirected graphs
# only difference would be how you are constructing the graph

def dfsiterative(root):
    stack = [root]
    added_to_stack.add(root)
    while len(stack) > 0:
        curr = stack.pop()
        # do any processing here
        for child in g[curr]:
            if child not in added_to_stack:
                stack.append(child)
                added_to_stack.add(child)

g = {
    
    1:[2,3],
    2:[1],
    3:[1]
}

added_to_stack = set()
for node in g:
    if node not in added_to_stack:
        dfsiterative(node)
```

- TC - **O(V+E)** where V is the number of vertices and E is the number of edges
- SC - **O(V+E)**

**Breadth First Search**

- As opposed to a dfs, we do traversals breadth wise here

```python
# bfs - iterative
# assume g is the graph represented as an adjacency list
# code is same for directed/undirected graphs
# only difference would be how you are constructing the graph

from collections import deque
def bfsiterative(root):
    queue = deque([root])
    added_to_queue.add(root)
    while len(queue) > 0:
        curr = queue.popleft()
        # do any processing here
        for child in g[curr]:
            if child not in added_to_queue:
                queue.append(child)
                added_to_queue.add(child)

g = {
    
    1:[2,3],
    2:[1],
    3:[1]
}

added_to_queue = set()
for node in g:
    if node not in added_to_queue:
        bfsiterative(node)
```

- TC - **O(V+E)** where V is the number of vertices and E is the number of edges
- SC - **O(V+E)**