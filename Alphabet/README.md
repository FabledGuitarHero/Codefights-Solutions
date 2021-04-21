# Alphabet

### Problem:  
Given two words, determine if the second word can be created by rearraning the letters of the first.

### Example:
```
"act", "cat"
Returns: Yes  
"bat", "fail"
Returns: No
```

### Solution:
1)  Iterate over the length of the second string
2)  Search if character exists in the first string
3)  If character does not exist, return 'no'.
4)  If end of string is reached, return 'yes'.

