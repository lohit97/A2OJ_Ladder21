# Introduction to Stack Data Structure

- Stacks are data structures, which store in data in ***LIFO*** form, where it stands for ***Last In First Out***.   The idea is to store the data in such a way, that the element that was inserted at the last, comes out first
- An interesting thing to note that, stacks are designed in such a way that they have a single point of entry and exit
- The single point is used to enter elements into the stack, and pop the elements out of it, and is known as top of the stack
- There are three basic operations that are performed on the stack, **push()**, **pop()**, and **peek()**
- The push() operation is used to add elements at the top of the stack, while the pop() operation is used to remove the elements from top of the stack
- The peek() operation, returns the value at the top of the stack, without removing it
- Care has to be taken that the pop() and peek() operation should not be performed on an empty stack
- The following code block represents the various operations on the stack

```java
|      |         push(3) -> Element 3 is pushed at the top of the stack
|      |         
|      |         
|__3___|    

|      |         push(4) -> Element 4 is pushed at the top of the stack
|      |         
|  4   |         
|__3___|    

|      |         pop()  -> The value at the top of the stack i.e. is 4, is removed from the top of the stack
|      |         
|      |         
|__3___|  

|      |         peek() -> The value returned by the peek function is 3, the value at the top of the stack
|      |         
|      |         
|__3___|     
```

---

## **Stack as an Abstract Data Structure**

- Stack is an abstract data structure, and can be implemented with the help of existing data structures
- Arrays or Linked List(something that you will learn at a later point of time in the curriculum), can be used to implement the stack data structure
- Implementing the stack data structure, basically means implementing the three basic operations of the stack data structure, which are push(), peek(), and pop()
- The following code block shows the implementation of the stack data structure using an array

```java
array = []
top = -1

function push(data){
	array[++top] = data
}

function pop(){
	if (top == -1) return "Empty Stack"
	ans = array[top]
	top--
	return ans
}

function peek(){
	if (top == -1) return "Empty Stack"
	return array[top]
}
```

- As you can observe from the above implementation, the time complexity of the various operations is as given below
- **push() - $O(1)$**
- **pop()** - $O(1)$
- **peek()** - $O(1)$
- The condition, when we are trying to remove an element or peek an element from an empty stack is called an ***UNDERFLOW***
- The condition, when we are trying to add an element into a stack, which is full, is called an ***OVERFLOW***

---