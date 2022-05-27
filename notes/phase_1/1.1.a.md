# 1.1.a. Variables, data types, conditional statements and loops

- **Variables** :-
    - A variable is nothing but a name given to a storage area that our programs can manipulate
    - The programming languages like C/C++/JAVA, the variables can be attached with the something called as data type.
    - The programming languages like java script / python where we don't use data types they already depends on the data type, it is already inherited
    - that means for example I want to store some integer value (10), then in C/C++/Java I need to define like this **int a=10.**
    - the same thing If I want to use the same thing in python or javascript simply we can do like this **a=10 or var a=10** respectively.

- **Data type :-**
    - The data type or simply type is an attribute of data which tells the compiler or interpreter who the programmer intends to use the data.
    - For example I want to store the name of a student, then I should go for **String** data type.
        - **String s = "Hari"**
        - So if you see above we taken a variable called as s, and store the name of student called Hari, for that we declared a s as of type **String.**
        - so compiler will interpret that s a type of string and it will allocate memory like that.
    - the mostly used data types are **int, float, string, char, long, double, etc...**
    - depends on the requirement we should use the required data type appropriately.

- **Conditional Statements :-**
    - when we want to check any condition, then we are going to use conditional statements.
    - if, if-else, if - else if - else are the 3 most conditional statements that we often use while writing the programs
    - **if :-** This executes the body of bracketed code starting with statement 1 if condition evaluates to true

    ```c
    if(condition 1)
    {
    	 statement1;
    		......
        ......
    }
    ```

    - if - else : This executes the body of bracketed code starting with statement1 if condition evaluates to true, or it executes the body of code starting with statement2 if condition evaluates to false. Note that only of the bracketed code section will ever be executed

    ```c
    if(condition)
    {
         statement1 
    		 ...........
    }
    else
    {
    		 statemenet2
         .......
    }
    ```

    - **if - else if - else** : in this structure, dependent statements are chained together and the  condition for each statement is only checked if all prior conditions in the chain evaluated to false. Once a condition evaluates to true, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each  condition in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

    ```c
    if(first condition)
    {
       ....
    }
    else if(Second condition)
    {
    	 .....
    }
    .
    .
    .
    .
    else if((n-1)th condition)
    {
    	  ...
    }
    else
    {
    	.......
    }
    ```

- **Loops:-** In programming languages, loops are used to execute a set of instructions/functions repeatedly when some conditions become true. Mostly frequently used loops are **for** and **while** loops
- Every loop consists of 4 parts, those are
    1. **Initialization**: It is the initial condition which is executed once when the loop starts. Here, we can initialize the variable, or we can use an already initialized variable. It is an optional condition.
    2. **Condition**: It is the second condition which is executed each time to test the condition of the loop. It continues execution until the condition is false. It must return boolean value either true or false. It is an optional condition.
    3. **Statement**: The statement of the loop is executed each time until the second condition is false.
    4. **Increment/Decrement**: It increments or decrements the variable value. It is an optional condition.
- Let's take one example that is printing numbers between 1 to 10.
- **Using For loop :-**

```c
for(i=1;i<=10;i++)
{
	print(i)
}
// i=1 is initilization , i<=10 is condition , print(i) is statement, i++ is increment
```

- **Using while loop :-**

```c
i=1
while(i<=10)
{
	print(i)
  i++
}
```

- **Nested loop :-** inside one loop we can define  a loop
    - **Nested while loop :-** sample program which demonstrates the nested while loop

    ```c
    i=1
    while(i<=5)
    {
      j=1
    	while(j<=5)
    	{
    		 print(i+j)
         j++;
       }
    	i++
    }
    ```

    - **Nested for loop :-** let's write above program using nested for loop

    ```c
    for(i=1;i<=5;j++)
    {
    	  for(j=1;j<=5;j++)
    		{
    		    print(i+j)
        }
    }
    ```