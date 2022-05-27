# Introduction to queue data structure

- Queues are linear data structures, where data is stored and operated as per FIFO method, where FIFO stands for First in First out.
- FIFO method focusses on retrieving the oldest data that has been put into the queue.
- The point at which data is inserted into the queue is called REAR.
- The point from which data is removed from the queue is called FRONT.
- Basic operations associated with queues :
    1. Enqueue() - Adding data at the REAR of queue .
    2. Dequeue() - Removing data from the FRONT of queue.
- If the queue is full then no element can be enqueued further. This condition is called "Overflow"
- If the queue is empty then no element can be dequeued. This condition is called "Underflow".

Example :

```python

Let Q be an empty queue with F be the front and R be the rear of Q.

     F
Q : [ ] // Queue initially empty with F and R pointing at the start of Q
     R            
                     F
Enqueue(1) : Q --> [ 1,  ]      // 1 is enqueued at the rear position and rear is moved one step ahead
                        R

                     F
Enqueue(2) : Q --> [ 1, 2,  ]   // 2 is enqueued at the rear position and rear is moved one step ahead
                           R

                     F
Enqueue(5) : Q --> [ 1, 2, 5,  ] // 5 is enqueued at the rear position and rear is moved one step ahead
                              R
                    F
Dequeue() : Q --> [ 2, 5,  ] // Fornt element 1 is removed and Front moves one step ahead
                          R

                       F
Dequeue() : Q --> [5,  ] // Fornt element 1 is removed and Front moves one step ahead
                      R
```

### PSEUDO CODE

```python
// Implementation using arrays

Q[N] // Queue having maximum size N
F = R = 0 // Front F and Rear R both pointing to 0th index of Q initially

Enqueue(X){
   
    if( R == N )
      "Overflow"

    else
      Q[R++] = X
}

Dequeue(){

    if( F== R )
    "Underflow"

    else{
    X = Q[F++]
    return X
    }
} 

```

- $O( 1 )$ time is required for both Enqueue and Dequeue operations.
- $O(N)$ space is required to store N elements in the queue

Till now we have seen example of simple queue. There are some other types of queues as well. Let us see about them briefly.

### Types of queues

1. Circular queue: In simple queues when the rear pointer reaches the end, there is a chance that some memory gets wasted. To overcome such problem circular queues are introduced in which the rear end is connected to the front. It is also called circular buffer.
2. Priority queue : In priority queues, there is an additional entity called priority that is assigned to the elements. The elements with higher priority is popped from the queue earlier than those having lower priority. 
3. Double ended queue : In simple queues it is allowed to enqueue elements from the rear while dequeue them from the front. Hence we require $O(N)$ time to fetch the last element of the queue. To overcome such problems doubly ended queues are introduced where it is allowed perform enqueue and dequeue operations from both front and rear.