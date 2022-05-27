# Stacks and queues

---

## Pre-requisites —> Stacks, Queues

## Implement stack using two queues

Let stack to be implemented be ‘S’ and queues used to implement be ‘q1’ and ‘q2’.

The following methods can be used to implement stack using two queues :

**Method 1: Making push operation costly**

As per this method, the recent element to be pushed into the stack will be maintained into the front of q1 always. Hence, whenever pop operation is performed the top of stack can be fetched from the front of q1.

**Push() operation**

Let X be the element to be pushed inside S.

- Enqueue X to q2
- Dequeue all the elements from q1 one by one and enqueue to q2 in the order they are dequeued from q1
- Swap the names of q1 and q2

**Pop() operation**

As top of stack is always maintained at the front of q1 hence, dequeue the front of q1 and return it.

**Method 2: Making pop operation costly**

**Push() operation**

Let X be the element to be pushed inside S.

- Enqueue X to q1

**Pop() operation**

- One by one dequeue all the elements of q1 except the last one and enqueue to q2
- The last item of q1is the required top of stack. Dequeue and return it
- Swap the names of q1 and q2

### Pseudo codes

```python
// Method 1
  
 QUEUE Q1, Q2;
 F1, F2; // Fronts of Q1 and Q2 respectively
 R1, R2; // Rears of Q1 and Q2 respectively

 PUSH( X ){

   R1++;
   Q1[ R1 ] = X;
   
   while( F1 + 1 != R1 ){
     Q2[ R2++ ] = Q1[F1++];
   }
   
 }

 POP(){

 X = Q1[F1];
 F1++;

 }    
 
 // Method 2
  
 QUEUE Q1, Q2;
 F1, F2; // Fronts of Q1 and Q2 respectively
 R1, R2; // Rears of Q1 and Q2 respectively

 PUSH( X ){

   R1++;
   Q1[ R1 ] = X;
   
 }

 POP(){

 while( F1 + 1 != R1 ){
     Q2[ R2++ ] = Q1[F1++];
 }

 X = Q1[F1];
 F1++;

 }
```

Example:

```python
  // Only Method 2 is shown
 
  q1, q2 // Two required queues

  push(2), q1 = { 2 }, q2 = { }
  push(3), q1 = { 2, 3 }, q2 = { }
  pop(),   q1 = { 3 }, q2 = { 2 }. Top of stack is front of q1 = 3. After top of stack is popped, q1 = { }, q2 = { 2 }.
  push(4), q1 = { }, q2 = { 2, 4 },  q1 to be treated as q2 and vice versa.
  pop(),   q1 = { 2 }, q2 = { 4 }. Top of stack is front of q2 = 4. After top of stack is popped, q1 = { 2 }, q2 = { }./
```

### Time complexity

$O(1)$, for push operation and, $O( N )$ for pop operation and vice versa.

Element X is enqueued into q1 for push operation. For pop operation N-1 elements of q1 is dequeued and enqueued to q2.

### Space complexity

$O( N )$, where N is the number of elements pushed into the stack

At most N elements can reside inside the queues.

---

## Implement queue using two stacks

Let queue to be implemented be ‘Q’ and stacks be used to implement be ‘s1’ and ‘s2’.

The following methods can be used :

**Method 1 : Making Enqueue operation costly**

This method ensure that oldest entered element in the queue is always at the top of s1, so that dequeue operation just pops from s1.

**Enqueue() operation** :

Let X be the element to be enqueued.

- Push everything from s1 to s2 till there is no element left in s1.
- Push X to s1.
- Pop all elements of s2 and push them back to s1.

**Dequeue() operation** :

The top of stack s1 is the corresponding front of Q. Hence pop it and return it.

**Method 2 : Making Dequeue operation costly**

The recent element inserted into Q is always maintained at the top of s1. Now, if s2 is empty all the elements of s1 are popped and pushed inside s2 in the order they are popped. Hence top of s2 always has the front of Q.

**Enqueue() operation** :

Let X be the element to be enqueued.

- Push X to s1.

**Dequeue() operation** :

- If s2 is empty, pop all the elements of s1 and push them to s2 one by one in the order they are popped.
- Pop the top of s2 and return it.

### Pseudo code

```python
// Method 1
  
  Stack S1, S2;
  
  enqueue( X ){
    
     while( S1 is not empty ){
        S2.push(S1.peek())
        S1.pop()
     }
     
     S1.push(X);

     while( S2 is not empty ){
        S1.push(S2.peek());
        S2.pop()
     }
  }
  
  dequeue(){
    X = S1.peek()
    S1.pop()
    return X
  }

}

// Method 2
  
  Stack S1, S2
  
  enqueue( X ){
    
     S1.push(X);
  }
  
  dequeue(){

    if(S2 is empty ){
       while( S1 is not empty ){
        S2.push(S1.peek());
        S1.pop()
     }  
  }

  X = S2.peek();
  S2.pop();
  return X
 
  }
```

Example :

```python
// Only Method 2 is shown
  
  N = 5
  1 2 1 3 2 1 4 2
  Let S1 and S2 be the required stacks.

  Query 1: Query type = 1, X = 2. S1 = { 2 }, S2 = { }.
  Query 2: Query type = 1, X = 3. S1 = { 2, 3 }, S2 = { }.
  Query 3: Query type = 2. S1 = {  }, S2 = { 3, 2}. Dequeued element = 2, hence update S2 = { 3 }.
  Query 4: Query type = 1, X = 4. S1 = { 4 }, S2 = { 3 }.
  Query 5: Query type = 2. S1 = { 4 }, S2 = { 3 }. Since S2 is not empty, dequeued element = 3, updated S2 = { }.
```

### Time complexity

Method 1:

Push operation : $O( N )$, where N is the size of stack S1.
Pop operation : $O( 1 )$.

All elements of S1 is popped and pushed to S2 while enqueue operation.

Method 2:

Push operation : $O( 1 )$
Pop operation : $O(N)$, where N is the size of stack S1.

If stack S2 is empty, all elements of S1 is to be popped and pushed to stack S2.

### Space Complexity:

$O(N)$.

Two separated stacks and required for dequeue and enqueue operations.