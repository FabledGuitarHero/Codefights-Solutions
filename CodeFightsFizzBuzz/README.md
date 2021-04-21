# FizzBuzz

### Problem:  
Given a number, print:
1) "Fizz" if the number is divisible by 5
2) "Buzz" if the number is divisible by 7
3) "FizzBuzz" if the number is divisible by 5 and 7

### Example:
```
Input: 25

Output: 
Fizz (5)
Buzz (7)
Fizz (10)
Buzz (14)
Fizz (15)
Fizz (20)
Buzz (21)
Fizz (25)
Buzz (28)
Fizz (30)
FizzBuzz (35)
```

### Solution:
1)  Iterate a loop n-1.
2)  Send number to FizzBuzz function
3)  Test if number % (5, 7, 5 and 7) == 0
4)  Return appropriate string ("Fizz", "Buzz", "Fizzbuzz")
5)  Insert result into vector
6)  Return vector

