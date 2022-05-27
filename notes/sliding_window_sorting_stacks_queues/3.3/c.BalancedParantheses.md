# Application of Stacks DS : Balanced Parentheses

---

## Pre-requisites —> Stacks

## BALANCED PARENTHESES

- Balanced parentheses means that each opening bracket has a corresponding closing bracket and the pairs of brackets are properly nested.

- For example :

```python
Balanced :

()()()

(()()()())

(((())))

Unbalanced :

((())

()))

(()()
```

Given an string S having opening brackets : '(', '{' and, '[' , and closing brackets : ')', '}' and, ']'. Determine whether the given string is a balanced parentheses or not.

### Observation

For occurrences of any of the closing brackets ']', '}', '}' the immediate unbalanced opening bracket should be '[','{', or, '(' respectively. Also opening brackets already balanced should not be taken into consideration.

### Brute force approach

Hence for each closing bracket S[i], we can check for all opening brackets S[j] ( 1 <= j < i <= N ), such that S[j] is unbalanced. For each S[i], if the first unbalanced bracket S[j] matches 
( S[j] = '[' for S[i] = ']' or S[j] = '(' for S[i] = ')' or S[j] = '{' for S[i] = '}' ), the string is said to be balanced. Else, it is not balanced.
This approach leads to a time complexity of $O(N*N)$ .

### Approach using stacks

Loop through the entire string. While iterating :

1. If any opening bracket ( '(', '{', '[' ) arrives, push it into the stack.
2. If any closing bracket ( ')', '}', ']' ) arrives, then check whether the closing bracket matches the top of stack or not. If it does, pop out the top of stack and continue analysing the string.
If it doesn't then the string is not balanced.

After processing the entire string the stack becomes empty if the string is balanced. Else it is not.

### Pseudo code

```python
  Stack STK;
  String S;
  N;
  TOP;
  FLAG = 0;

  for ( i from 0 to N - 1){
  
    if( S[i] == '(' or S[i] == '{' or S[i] == '[' )
           STK.push(S[i]); 
    else{
         if(STK is EMPTY ){
             FLAG = 1;
             break;
         }
        
         else{ 
             if( ( S[i] == ')' && STK[TOP] != '(' ) or ( S[i] == '}' && STK[TOP] != '{' ) or ( S[i] == ']' && STK[TOP] != '[' ) ){
                  FLAG = 1;
                  break;
             }
             else
                 STK.pop();
         }
   }
}

if(FLAG == 1 )
  print("Not balanced")

else{
  
  if(STK.empty)
    print("Balanced")
  
  else
    print("Not Balanced")
}
```

Below is the dry of the above code using an example 

```python
1. N = 6, S : [()]{}
     Stack Stk;
     for i = 0, S[0] = '[', push into Stk. Stk = { '[' }
     for i = 1, S[1] = '(', push into Stk. Stk = { '[' '(' }
     for i = 2, S[2] = ')', Stk[Top] = '(', which matches with S[2], hence pop the top of stack. Stk = { '[' }
     for i = 3, S[3] = ']', Stk[Top] = '[', which matches with S[3], hence pop the top of stack. Stk is empty.
     for i = 4, S[4] = '{', push into stack. Stk = { '{' }
     for i = 5, S[5] = '}', Stk[Top] = '{', which matches with S[5], hence pop the top of stack. Stk is empty.

     After processing the string Stk is empty and out string is balanced.

  2. N = 4, S : [(])
     Stack Stk;
     for i = 0, S[0] = '[', push into Stk. Stk = { '[' }.
     for i = 1, S[1] = '(', push into Stk. Stk = { '[' '(' }.
     for i = 2, S[2] = ']', Stk[Top] = '(', which doesn;t matches with S[2], hence flag = 1, break the process.

     Since flag value is 1 the string is not balanced.
```

### Time Complexity

$O( N )$, where N is the length of the string.

Each character of the string gets pushed and popped from the stack at most once.

### Space Complexity

$O( N )$, where N is the length of the string.

At most N characters can be there inside the stack.
