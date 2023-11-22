# 4.1.a.Introduction to Recursion

**Recursion :-** 

- The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function

- **Some classical example problems on recursion :-**
    - Tower of Hanoi / Tower of Lucas / Tower of Brahma
    - Generating subsequences
    - Generating permutation of given string/number

- Let's take an example, that is sum of N natural numbers
    - **Using Iteration [simply adding one by one ]: -**

                    **f(n) = 1 + 2 + 3 + .........n**

    - **Using Recursion : -**

                    **f(n) = 1                 ; if n==1**

                    **f(n) = n + f(n-1)   ; if n>1**

        **f(n) = 1 is called base condition.** 

        Every recursive program must contain a base condition/base case. Otherwise it will stack over flow error. because whenever any recursive call happens then one activation record will be pushed inside the stack, so if there is no base condition then an infinite number of activation records will be pushed inside the stack. which will results in stack overflow error.

- **factorial program using recursion : -**

```abap
int fact(int n)
{
    if (n < = 1) // base case
        return 1;
    else    
        return n*fact(n-1);    
}
```

- **fibonocci series using recursion :-**

```abap
static int fib(int n)
{
    // Stop condition
    if (n == 0)
        return 0;
 
    // Stop condition
    if (n == 1 || n == 2)
        return 1;
 
    // Recursion function
    else
        return (fib(n - 1) + fib(n - 2));
}
```