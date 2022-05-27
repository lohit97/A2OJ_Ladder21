# 4.1.e. Why and When Recursion

- In the class we already seen couple of classical examples for the recursion, those are
    - Tower of Hanoi (or) Tower of Lucas (or) Tower of Brahma
    - Printing subsequences of a given string
    - Printing Permutation of given string
- so we seen that those problems can be solved using recursion very easily, by writing the simple code just in 4-5 lines.
- that is nothing but, simply 1 base case, and call the function recursively with 3-4 lines
- But, those same programs if we want to write using iteratively, it will be very length and we need to use extra data structures called Stack, Queue etc..
- But if we use recursion, in internally stack will be getting used, why because for every recursion there will be one activation record will be getting pushed inside the stack.
- so when ever we feel that, we can solve the program with the help of stack and calling same function again and again, then best way is to use **Recursion,** by defining the proper base case.
- Main reason is to go for recursion is code looks very simple and elegant compare to Iterative code.