# 4.1.b.Some Example problems on recursion

- **Sum of elements in an Array :-**

    ```c
    A: Array of Integers
    N: Size of Array

    function findSumOfArrayNumbers(A,N)
    {
    		if(N<=0)
    				return 0 
        else
    				return findSum(A,N-1) + A[N-1]
    }
    ```

- **Product of elements in an Array :-**

```c
A: Array of Integers
N: Size of Array [integer]

function findProductOfArrayNumbers(A,N)
{
		if(N<=0)
				return 0 
    else
				return findSum(A,N-1) * A[N-1]
}
```

- **Reverse a string using recursion :-**

```c
str: String 
n  : String length [ integer]

function reverseString(str,n)
    {
        if ((str==null)||(n<=1)
				{
		         print(str)
				}
        else
        {
            print(str.charAt(n-1))
            reverse(str.substring(0,n-1))
        }
    }
```

- **Find the largest element in an array using Recursion :-**

```c
A: Array of integers
N: Size of an Array [integer]
function findMax(A,N)
{
   if(n == 1)
       return A[0];
   else   
      return Math.max( A[N-1], findMax(A, N-1) );
}

**Note:- 
	1)Math.max(a,b) :** it returns the maximum value between a and b
  2)If we don't want use Math.min() or Math.max(), we can write our own implementation
	3)function max(a,b)
    {
         if(a>b)
						return a
				 else
						return b
     }
	4) so like that we can write our own function, and we can call it, whenever it's required.
```

- **Searching for an Element in an Array :-**

```c
A: Array of Integers 
l: Starting index of array,  i.e 0    [integer]
r: Ending index of array, i.e A.len-1 [integer]
Key: the element which we want to search in the array [integer]

function recSearch(A, l, r, Key)
{
	 if (l>r)
      return -1
   if (A[l] == Key)
      return l
   if (arr[r] == Key)
      return r;
   return recSearch(A, l+1, r-1, key);
}
main(){
	A=[1,2,3,4,5,6], key=12;
  recSearch(A, 0, A.len-1, key) // this is how we call in main function
                            
}
```

- **Check given string is palindrome or not :-**

```c
str: input String 
s: starting index of string[integer]
e: ending index of string [integer]

function isPalindrome(str,s,e)
{
		if(s==e)
	  {
			return true  // when there is only 1 character present inside a string.
    }
    if(str.charAt(s)!=str.charAt(e))
    {
      return false // 
    }
    if(s<e+1)
    {
        return isPalindrome(str,s+1,e-1)
    }
    return true
}

main()
{
     String str="amma"
     isPalindrome(str,0,3) // this how we call in main function
}
```