# 4.2.a.Introduction to Linked List

- In array we can store all elements of same data type and elements will stored in continuous memory locations, because of that reason In arrays random accessing is possible
- Now coming to Linked List it is not like that, every element in a Linked List is represented using a node, node contains a data type and a pointer to the next node
- so because of that in Linked List, random access is not possible
- But we can modify linked list, like adding a node where ever we want, for example Middle, or at the beginning or at the end or at the specific position.
- Because of that linked are flexible, compare to Arrays.
- Let's have look at structure of Linked list
- every linked list node contains two elements, once is data part and other is a pointer which points to next node, i.e it will stores address of the next node.

![4%202%20a%20Introduction%20to%20Linked%20List%20f93360080f9a4c45a44599354af43a05/Linkedlist-2.png](4%202%20a%20Introduction%20to%20Linked%20List%20f93360080f9a4c45a44599354af43a05/Linkedlist-2.png)

- So Head is a pointer that will always point to the beginning of the linked list and for the last node address part is null, so which indicates that it is the end of the linked list
- we can access the data of any node of a linked list like this head→data or head. data depends on the language the syntax is going to change. so throughout these lectures, we are going to use the head. data to access the node data.
- **lets see how to traverse the linked list**

```c
curr = head
while(curr!=NULL)
{
   print(curr.data)
   curr=curr.next
}
```

- **Let's look at some of the operations that we can perform on the linked list very effectively which we can't do using arrays effectively.**

1. **Insert a node at the beginning of SLL :-** 

```c
function insertAtBegnining(int value)
{
      Node beg = new Node() // which creates a new node
      beg.data = value // assigning value to the newly created node
      beg.next = head  // new node address is assigned with head address
      head=beg          // head is moved to the beg node
}
```

**2.Insert a node at the ending of DLL :-**

```c
function insertAtEnding(int value)
{
     Node end = new Node()// which creates a new node of name end
     end.data = value  // end node data part, I am assigning value
	   curr=head
     while(curr.next!=NULL)//try to move curr pointer to the last node
     {
         curr=curr.next
     }
     curr.next = end// curr node address is assigned with end node address
     end.next=NULL // end address is assigning with null, so that now it becomes last node
}
     
```

  a. on the similar way we can insert any node at the middle and after or before any particular node.

  b. only thing is to play with the nodes. 

**Till now we seen about how to insert the nodes, now lets see about deletion.**

1. **delete the beginning node of SLL :-** 

```c
function removeFirstNode(Node head)
{
        Node temp = head;
        head = head.next; // initially my head will points to 1st node, not lets make it point 2nd node
        return head;
 }
```

2. **delete the ending node of SLL :-** 

```c
function removeLastNode(Node head) // just make second last node address to NULL
{
    Node second_last_node = head
    while(second_last_node .next .next !=NULL)
    {
        second_last_node=second_last_node.next
    }
    second_last_node=NULL
}
```

so similarly we can delete any node like how we done with insertion.