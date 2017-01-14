I have decided not to do every exercise to save some time. Here are the exercises I chose to do:

1. The common field cricket chirps in direct proportion to the current temperature. Adding 40 to the number of time a cricket chirps in a minute, then dividing that value by 4 gives us the temperature. Write a program that takes as input the number of chirps in a minute and prints the current temperature. For example,

```
Number of chirps: 120
The temperature is: 40.0 degrees. 
```

2. Write a program that will compute your final grade for a programming course you are taking. Here is the grading scheme:
Final grades will be based on the following:

```
40% Assignments   15% Midterm Examination
35% Final Examination
10% Class Participation Grade 
```

Your program should ask the user for the four assignment scores, the midterm, final and section grades. Then, the final score is calculated and printed. To do the calculations, you average the four assignment scores together and then multiply it by 0.4 (40%). You then multiply the midterm score by 0.15, the final by 0.35 and the participation grade by 0.1. Then you add all the results of these multiplications together.

Use functions wherever you can in this program. You can create a function to get the input by passing in as a parameter the string to be displayed in an explanatory cout. Here is an example run:

```
Enter the score for the first assignment. 75
Enter the score for the second assignment. 85
Enter the score for the third assignment. 82
Enter the score for the fourth assignment. 94
Enter the score for the midterm. 81
Enter the score for the final. 89
Enter the score for the section grade. 100
The final grade is: 86.9
```

7. This is a number analogy to a famous card trick. Ask the user to enter a three-digit number. Think of the number as ABC (where A, B, C are the three digits of the number). Now, find the remainders of the numbers formed by ABC, BCA, and CAB when divided by 11. We will call these remainders X, Y, Z. Add them up as X+Y, Y+Z, Z+X. If any of the sums are odd, increase or decrease it by 11 (whichever operation results in a positive number less than 20; note if the sum is 9, just report this and stop the process). Finally, divide each of the sums in half. The resulting digits are A, B, C. Write a program that implements this algorithm.