# 1.1.e. function, return

- **function** :- we can divide a large program into the basic building blocks known as function
- **Function Aspects :-**
    - **Function declaration** A function must be declared globally in a c program to tell the compiler about the function name, function parameters, and return type.

    ```c
    return_type function_name (argument list);
    ```

    - **Function call** Function can be called from anywhere in the program. The parameter list must not differ in function calling and function declaration. We must pass the same number of functions as it is declared in the function declaration.

    ```c
    function_name(argument_list);
    ```

    - **Function definition** It contains the actual statements which are to be executed. It is the most important aspect to which the control comes when the function is called. Here, we must notice that only one value can be returned from the function.

    ```c
    return_type function_name(argument list)
    {
    		function body
    }
    ```

    - **Example :-** write a function to check given number is even or odd

    ```c
    int isEven(int); // function declreation 

    function int isEven(n)// function definition
    {
    	  if(n%2==0)
    			  return 1
    		else
    				return 0
    }

    main()
    {
         result = isEven(10) // function calling
         if(result==1)
    				 print("even number")
         else
    	       print("odd number")
    }
    ```

    - so if we see in main function we are calling the isEven function using the value 10
    - if the 10 is even then function will return the value 1, so that in main function we comparing with it.
    - if it is 1 then we are printing the number is even or we are printing the given number is odd

- **return** :-
    - Java return keyword is used to complete the execution of a method
    - It is used to exit from the method.