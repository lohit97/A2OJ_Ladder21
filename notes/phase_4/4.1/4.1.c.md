# 4.1.c.Recurrence relation and when to use iteration compared to recursion

- Let's look at Recurrence relations for the programs which we seen in previous lectures.
- **Sum of elements in an Array and Products of elements in an Array :-**
    - Let T(n) be the time taken to find the sum of n elements in the array, then the Recurrence relation is as follows

                 **T(n) = 1                     ;  if n==1**

                 **T(n) = 1 + T(n-1)       ; if n>1**

    - for solving those Recurrence relation please refer the class notes.
    - The same Recurrence relation will hold for both sum of array elements and product of array elements also

- **Reverse a string using recursion :-**
    - Let T(n) represents time taken to reverse the string length of n, then recurrence relation is as follows

               **T(n) = 1                     ;  if n==1**

               **T(n) = 1 + T(n-1)       ; if n>1** 

- Similar kind of recurrence relation will holds for the remaining problems of previous lecture.
- now let's see some interesting things about iteration, where iteration takes advantage over recursion.
- **Finding Nth Fibonacci number :-**
    - **Recursive Solution : -**

    ```c
    0,1,1,2,3,5,8,.....
    n: nth Fibonacci which we want

    function nthFibonocci(n)
    {
    		if(n<=1)
    			 return n
    	  else
    			 return fib(n-1)+fib(n-2)
    }

    ```

              if we see the recurrence relation for the above code is as follows

                   **T(n) = 1               ; if n==1**            

                   **T(n)=1+2T(n-1)       ; if n>1**

    so if we solve the above recurrence relation we will get time complexity as **O(2^n),** which is very huge i.e **Exponential.**

    - **Iterative Solution:-**

    ```c
    function nthFibonocci(n)
    {
    		 t1=0,t2=1
         res=t1+t2
         for (i = 1; i <= n; ++i) {
            t1 = t2;
            t2 = res;
            res= t1 + t2;
        }
        return res
    ```

           Now, if we see the recurrence relation for the above program it looks as follows

                 **T(n) = 1               ; if n==1**

                 **T(n) = 1 + T(n-1) ; if n>1**

    so if we solve the above recurrence relation it will be **O(n) [ Linear ]**

    **Conclusion:-** 

    - If we see the above problem, with the help of recursion we got the time complexity as **O(2^n),** whereas for the same problem if solve using iteration we got the time complexity as **O(n).**
    - so we should be very full to decide, when to go for recursion and when to go for iteration
    - If the code requires to be very short and some how we figure out that internally it requires that stack, then in such case we should go for recursion. Like TOH, Generating Permutation and Generating subsequences.
    - related to recursion tree, please refer the class notes, how recursion tree can be drawn and when an activation record will be pushed inside to stack and when it get's popped out from stack.
    - those all things we discussed in the class at great detail.