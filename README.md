Mini C Quiz Program

This project is a simple Multiple-Choice Quiz Program written in C.
The program asks five questions, takes the user's answers, checks correctness, and finally displays the score.
It is ideal for beginners learning arrays, loops, and user input in C.


---

⭐ Features

5 MCQ-based questions

Displays options for each question

Accepts user input (A/B/C/D)

Shows Correct ❇️ or Wrong ❌ response immediately

Displays final score

Beginner-friendly and easy to modify



---

🧠 Concepts Used in This Program

This project helps you understand:

✔ Arrays of strings

Used to store questions and their options:

char questions[5][200];
char options[5][200];

✔ Answer key array

Stores correct answers:

char answerKey[5] = {'B','C','A','D','A'};

✔ Loops

A for loop repeats questions one by one.

✔ Conditional checking

if statement checks if the user's answer matches the correct answer.

✔ User input

scanf(" %c", &userAns);
(Notice the space before %c to handle newline issues.)


---

▶️ How to Run This Program

1. Copy the code into any C compiler:

OnlineGDB

CodeBlocks

Dev C++

Turbo C / Windows C compiler

GCC terminal



2. Compile the program


3. Run it


4. Enter your answer (A/B/C/D) for each question


5. Your final score will appear at the end




---

📄 Output Example (Text)

=== C Programming Quiz ===

Q1. Which symbol is used to end a statement in C?
A. .
B. ;
C. :
D. ,
Enter your answer : B
✅ Correct!

...

=== Quiz Over ===
Your Score = 4 out of 5


---

Files Included-l pp
quiz.c — Main C program file



---

Future Enhancements-
You can upgrade this project in the future:
Add more questions
Add a timer
Store scores in a file
Randomize questions
Add levels (easy/medium/hard)


Author-
Rohan Chetry
Beginner C Programmer | Learning GitHub | Exploring new projects

