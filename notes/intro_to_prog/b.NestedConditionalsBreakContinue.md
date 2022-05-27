# 1.1.b. Nested Conditional statements, break and continue

- **Nested Conditional Statements:-**One conditional can also be nested within another. We could have written the three-branch.
- **Example :-**

```c
let's take 3 variables x and y
if(x==y)
	print(x and y are equal)
else
	if(x<y)
		print( x is less than y)
	else
		print(x is greater than y)

```

- “Nesting” conditional statements means that you can use one if or else if statement inside another if or else if statement(s)
- **Syntax :-**

```c
if( expression 1) { 
	// Executes when the expression 1 is true 
	if(expression 2) { 
		// Executes when the expression 2 is true 
	} 
} 
else{ 
	//Executes when expression 1 is false 
	if(expression 3){ 
		//Executes when expression 3 is true 
	}  
}
```

- **break:-** the break statement is used to break out of from a loop

```c
//lets try to print elements from 1 to 10, but when it comes to print 4 it should break
for (int i = 1; i <= 10; i++) {
  if (i == 4) {
    break;
  }
 print(i)
}
// 1,2,3
```

- **continue:-**The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

```c
for (int i = 1; i < = 10; i++) {
  if (i == 4) {
    continue;
  }
  print(i)
}
//1,2,3,5,6,7,8,9,10
```