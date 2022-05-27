# Infix-Prefix-Postfix Conversion & Finding min in stack in O(1)

---

### Pre-requisites —> Stacks

## Infix-Prefix-Postfix Conversion

Given two operands a and b and an operator O.

### Infix notation

The infix notation implies that O will be placed in between a and b ⇒ a O b .

### Prefix notation

The prefix notation implies that O will be placed before a and b ⇒  O a b .

### Post notation

The infix notation implies that O will be placed in after a and b ⇒ a b O .

### How to convert infix notation to postfix ?

1. Let I be the infix expression and let S be the stack. 
2. Start scanning the infix expression I from left to right.
3. If the scanned character is an operand, print it.
4. Else if the scanned character is an operator then,

    - If stack S is empty or top of S is contains a parenthesis or the precedence of the scanned operator is greater than the operator at top of stack S, push the operator into the stack S.
    - Else, pop all the operators from stack S till all these conditions satisfy:
           a. Stack S is not empty.
           b. Top of stack S is not a parenthesis.
           c.  Top operator of the stack S is greater than or equal to the precedence of the     scanned  operator.
    - Afterwards push the scanned character into S.
    - Print all the operators in the order they are popped from stack S.
5. Else if the scanned character is an opening bracket, push it to the stack.
6. Else if the scanned character is a closing bracket, pop the stack until an opening bracket is encountered.
Print all the operators in the order they are popped from stack S.
7. Repeat the steps 3 - 6 till entire expression I is scanned.
8. When the entire infix expression is scanned, pop the stack until it is not empty. Print all the operators in the order they are popped from Stack S.

    ### Example

    ```python
    I : ( A + B )*( C + D ) - E

    Stack S // Empty
    Postfix expression P // Emtpy

    First character : '(', Opening parenthesis --> Push into S => S : [ '(' ]
    Second character : 'A', Operand --> Print it => S : [ '(' ], P : A
    Third character : '+', Operator --> Push into S => S : [ '(', '+' ], P : A
    Fourth character : 'B', Operand --> Print it => S : [ '(', '+' ], P : AB
    Fifth character : ')', Closing parenthesis --> Pop the stack until you get a opening parenthesis 
    => S : [ ], P : AB+
    Sixth character : '*', Operator --> Push it into S => S : [ '*' ], P : AB+
    Seventh character : '(', Opening parenthesis --> Push into S => S : [ '*', '(' ], P : AB+
    Eigth character : 'C', Operand --> Print it => S : [ '*', '(' ], P : AB+C
    Ninth character : '+', Operator --> Push it => S : [ '*', '(', '+' ], P : AB+C
    Tenth character : 'D', Opereand --> Print it => S : [ '*', '(', '+' ], P : AB+CD
    Eleventh character : ')', Closing parenthesis --> Pop the stack until a opening parenthesis occurs 
    => S : [ '*' ], P : AB+CD+
    Twelfth character : '-', Operator : Since priority of '-' is less than '*' hence pop the stack =>
    => S : [ '-' ], P : AB+CD+*
    Last character : 'E' : Operand --> Print it => S : [ '-' ], P : AB+CD+*E

    Now pop all characters from the stack => S = [ ], P : AB+CD+*E-
    ```

    ### Time complexity

    $O( N )$, where N is the length of Infix expression.

    All characters can be pushed and popped from the stack at most once.

    ### Space complexity

    $O( N )$, where N is the length of the Infix expression.

    At most N characters can reside inside the stack

    ---

    ## Min stack O( 1 )

    Design a Stack that supports all the stack operations like push(), pop() along with a getMin() function which should return minimum element from the current state of the Stack. All these operations must be of O(1) time and space.

    Let us take an example 

    ```python
    Consider the following Stack
    6  --> TOP
    2
    5
    9
    5

    When getMin() is called it should return 2, 
    which is the minimum element in the current stack. 

    If we pop two elements of the stack, the stack becomes
    5  --> TOP
    9
    5

    Now, When getMin() is called, it should return 5
    which is the minimum in the current stack.
    ```

    Let us define a variable **min** which stores the current minimum element of the stack. Now how do we handle the case when minimum element is removed. To handle this, we push “**2x – min**” into the stack instead of x so that previous minimum element can be retrieved using current min value. Let us see how we implement it for push and pop operations :

    **Push( ) :**

    Let element X is to be pushed into stack.

    1. If stack is empty, insert X into the stack and assign min equal to X.
    2. If stack is not empty, compare X with min. Two cases may arise:
        - If X ≥ min, push X as it is.
        - If X < min then, push (2*x – min) into the stack instead of X and make min equal to X.

    **Pop()**

    Let element Y is popped from the top of stack, two cases may arise again :

    1. If Y ≥ min, value of min remains as it is.
    2. if Y < min, the minimum element now becomes (2*min – Y). This is how we get the previous minimum of the stack from the current minimum. 

    ### Pseudo code

    ```python
      Stack S;
      X; // Element to be pushed
      M; // Minimum of stack.

      PUSH(X):

      if( S is empty ){
        S.push(X);
        M = X;
      }

      else{

         if(X >= M ){
         S.push(X);
         }

         else{
           S.push(2X - M);
           M = X;
         }
           
      }

      POP():
      
      if( S[TOP] < M )
         M = 2M - S[TOP];
       }
      
      S.pop()
    ```

    Example

    ```python
      Stack S;

      push(3), S = { 3 }, M = 3.
      push(5), 5 > 3, hence push 5, S = { 3, 5 }, M = 3.
      push(1), 1 < 5, hence push 2*1 - 3, S = { 3, 5, -1 }, M = 1.
      getMin(), M = 1.
      pop(), top of stack = -1 and M = 1, 1 > -1, hence convert M = 2*1 - (-1) => M = 3, pop -1, S = { 3, 5 }.
      getMin(), M = 3.
    ```

    Why this works ?

    When element x is to be pushed is less than min, we insert “2x – min”. It is a point to note that, 2x – min is always less than x. Now while popping this element out we can observe that it's value is less than min, which is unusual, hence accordingly value of min can be updated.

    ### Time complexity

    $O( 1 )$, each operation can be done in constant time.

    ### Space complexity

    $O( 1 )$, as no extra space is required.
