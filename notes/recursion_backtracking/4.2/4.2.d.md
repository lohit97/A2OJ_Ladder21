# 4.2.d Introduction to DLL

A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list. 

![4%202%20d%20Introduction%20to%20DLL%20a39c69c706b54b63926a79ad02c95394/DLL1.png](4%202%20d%20Introduction%20to%20DLL%20a39c69c706b54b63926a79ad02c95394/DLL1.png)

- Using two pointers  prev and next, it can traverse in both directions that is forward and backward
- the node structure of DLL is similar to the SLL, expect that SLL is having only one pointer which points to next node BUT DLL is having an other pointer which points to previous node also.
- The Main difference between SLL and DLL is that, because SLL is having only one pointer so it can traverse only in one direction, while DLL is having two pointer so it can traverse in both forward and backward direction.
- The last node address is always null, with that it is going to identify the last node, if you see in DLL the first node is having prev pointer as null value, because it was the first node and same last node next pointer is also having null value, because it is the last node.