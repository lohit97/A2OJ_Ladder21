# 4.2.b.Reverse SLL, Rotation of SLL, Slow and Fast pointer Tech

1. **Reversion of SLL :-**
    - Lets look at how we are going to reverse the SLL using following sample code

    ```c
    /* Function to reverse the linked list */
        Node reverse(Node node)
        {
            Node prev = null;
            Node current = node;
            Node next = null;
            while (current != null) {
                next = current.next;
                current.next = prev;
                prev = current;
                current = next;
            }
            node = prev;
            return node;
        }
    ```

2. **Rotate the SLL by K places Clock wise direction**
    - To rotate the linked list, we need to change the next of Kth node to NULL, the next of the last node to the previous head node, and finally, change the head to (k+1)th node.
    - So we need the get hold of three nodes: kth node , (k+1)th node, and last node
    - Traverse the list from the beginning and stop at kth node
    - store pointer to kth node. we can get (k+1)th node using kthNode→ext.
    - keep traversing till the end and store a pointer to the last node also. Finally change pointers as stated above.
    - Lets look at sample code  for that

    ```c
    function rotate(k)
    {
         if(k==0)
             return
         Node current = head
         count=1
         while(count<l && current!=NULL)
         {
                current=current.next;
                count++
         }
         if(current ==NULL)
             return
         Node KthNode = current
         while(current.next !=NULL)
         {
              current=current.next
          }
          current.next=head
          head=KthNode.next
          KtNode.next=NULL
    }
    ```

3. **Finding middle node of a SLL using slow and fast pointer technique** 
    - Traverse list using two pointers. Move one pointer by one and the other pointers by two.
    - when fast pointer reaches the end slow pointer will reach the middle of the linked list.
    - lets look at sample code

    ```c
    function printMiddle()
    {
         Node slow_ptr=head
         Node fast_ptr=head
         if(head!=NULL)
         {
             while(fast_ptr!=NULL && fast_ptr.next!=NULL)
             {
                  fast_ptr=fast_ptr.next.next
                  slow_ptr=slow_ptr.next
             }
    				 print(slow_ptr.data)
         }
             
     }
    ```