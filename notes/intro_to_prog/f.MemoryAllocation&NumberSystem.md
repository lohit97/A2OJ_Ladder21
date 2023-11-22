# 1.1.f. Memory Allocation and Number System

- **Memory Allocation :-**

```c
int a =10;
```

- when I write above code, what exactly happening is, compiler will allocates 4Bytes of memory to the variable a and it assigns value 10 to a
- Assume that integer is going to take 4Bytes. so when ever we want to print the value of a, then use simply print(a)
- so a will points to the address in memory where 10 was stored.

```c
int arr[5]={1,2,3,4,5}
```

- when I write the above statement, then 20 Bytes of memory is going to allocate to the array
- because each element is an integer and each integer is going to take 4bytes, so total 5 elements. therefore the size array is 20Bytes.
- each element in the array can be accessing using it's indices, like arr[0], arr[1], etc..
- In an array, an element is stored in a contiguous memory location. because of that Arrays Random accessing is possible.
- lets assume that array starting address is 1000, then next elements address are some thing like this 1004,1008,1012,1016.
- each element is an integer and it's size is 4Bytes, each element address incremented by 4.

- **Number System** :-Number System is a method of representing Numbers on the Number Line with the help of a set of Symbols and rules. These symbols range from 0-9 and are termed as digits.
- **Types of Number System**:-
    1. **Decimal Number System  [ 0,1,2,.....9]**
    2. **Binary Number System  [0,1]**
    3. **Octal Number System  [0,1,2,...7]**
    4. **Hexadecimal Number System [0,1,2,..9, A,B,..F]**
- **Decimal Number System:**-
    - A number system with a base value of 10 is termed a Decimal number system. It uses 10 digits i.e. 0-9 for the creation of numbers. Here, each digit in the number is at a specific place with place value a product of different powers of 10. Here, the place value is termed from right to left as first place value called units, second to the left as Tens, so on Hundreds, Thousands, etc. Here, units have the place value as 10^0, tens have the place value as 10^1, hundreds as 10^2, thousands as 10^3, and so on.

              **Example: 10285** has place value as

                (1*10^4) + (0*10^3) + (2*10^2) + (8*10^1) + (5*10^0) = 10285

    - **Binary Number System:-**
        - Number System with base value 2 is termed as Binary number system. It uses 2 digits i.e. 0 and 1 for the creation of numbers. The numbers formed using these two digits are termed as Binary Numbers. Binary number system is very useful in electronic devices and computer systems because it can be easily performed using just two states ON and OFF i.e. 0 and 1.
        - Decimal Numbers 0-9 are represented in binary as: 0, 1, 10, 11, 100, 101, 110, 111, 1000, and 1001
    - **Octal Number System:-**
        - Octal Number System is one in which the base value is 8. It uses 8 digits i.e. 0-7 for the creation of Octal Numbers. Octal Numbers can be converted to Decimal value by multiplying each digit with the place value and then adding the result. Here the place values are 8^0, 8^1, and 8^2. Octal Numbers are useful for the representation of UTF8 Numbers.
    - **Hexadecimal Number System:-**
        - Number System with base value 16 is termed as Hexadecimal Number System. It uses 16 digits for the creation of its numbers. Digits from 0-9 are taken like the digits in the decimal number system but the digits from 10-15 are represented as A-F i.e. 10 is represented as A, 11 as B, 12 as C, 13 as D, 14 as E, and 15 as F. Hexadecimal Numbers are useful for handling memory address locations.