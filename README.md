# Assignment 8 
## Objectives

To gain an understanding of File I/O.

### Part 1
1. Write a program `wordcount.c` that takes in a text file, `text.txt` and prints to screen the number of words in the file.  You may consider any non-whitespace characters surrounded by whitespace to be a word.  The end of the file will be `"########"`.  Submit only your wordcount.c file.
2. Submit your exercise from class.  Include your program (e.g. `fileio.c`) and your input file (e.g. `input.txt`).


### Part 2

In a text file `assignment8.txt`, answer the following questions:

1. Compare and contrast fprintf() and printf(). Be thorough - include details on input, output, and details of the functions.
2. What, if anything, is the difference between opening a file in “rw” mode and opening it in “wr” mode?  What is the difference between opening a file in “w” mode and opening it in “a” mode?  Give an example of when you would use each.
3. Why should using the function `gets()` be avoided?
4. What does `fp` point to? Explain.
``` C
#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("trial", "r");
    return 0;
}
```



### Submission Guidelines
Please include your name and a description in a comment at the top of your code files. Please also include your name at the top of your `assignment8.txt` file.

All files must be submitted via GitHub by 10:10am 8/3.
