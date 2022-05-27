# 4.1.d.Complexity analysis of Recursion

- Let's Analyze complexity of recursion program by taking one simple example

```c
0,1,1,2,3,5,8,.....
n: nth Fibonacci which we want

function nthFibonocci(n)
{
		1.if(n<=1)
			 2.return n
	  3.else
			 4.return fib(n-1)+fib(n-2)
}

```

- **Time Complexity :-**
    - If you see the above program, I given line number for each and every line, so lets take each and every line, and let's try to write the recurrence relation and analyze the T.C
    - line-1, 2,3 are constant operations, so it will take constant amount of time = = > **O(1)**
    - if we see the 4th line we are calling the nthFibonocci(n-1) two times == > **2T(n-1)**
        - **The recurrence relation will be**
            - **T(n) = 1                   ; n==1**

                **T(n)= 1 + 2T(n-1)    ; n>1**

        - so if we derive the above equation we will get the Time Complexity as **O(2^n)**
        - for the derivation  please refer the class notes, there I explained how to solve those recurrence relation very clearly.
- **Space Complexity :-**
    - In general, when you want derive space complexity of any recursive program, just try to draw the recursion tree [we discussed in class how to draw], and see at any point of time maximum how many activation records are present in stack
    - so the number of activation records present in stack maximum at any point of time will be same as the maximum depth of recursion tree.
    - so that will become the space complexity of recursive programs
    - If you see above example and try to draw the recursive tree, we can see that it's depth will be n, so space complexity will be **O(n)**