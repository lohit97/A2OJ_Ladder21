# 1.1.c. complex loops

- Let's look at some complex loops and trace the output

```c
for(i=1;i<=10;i=i+2)
{
	print(i)
}
```

- if we see the above program, it is similar to the loop, which we had seen in previous lecture, but here we are trying to increment the i value by 2
    - so the output of the loop will be 1,3,5,7,9
    - when i will become 11 , the condition will be false and control comes out from the loop.
- Let's look at another loop

```c
for(i=1;i<=10;i=i*2)
{
	print(i)
}
```

- if we see the above, here we are incrementing the i value by previous value multiplying with 2
- which means initially i=1, later it comes 2, 4,8,16 etc...
    - so the output will be 1,2,4,8
    - when i becomes 16, the condition will be false and control will comes out from the loop.