#include <stdio.h>

int main() {
    
    char questions[5][200] = {
        "Q1. Which symbol is used to end a statement in C?",
        "Q2. Which data type is used to store decimal values?",
        "Q3. What is the index of first element in an array in C?",
        "Q4. Which of the following is a loop in C?",
        "Q5. Which header file is required for printf() function?"
    };

    
    char options[5][200] = {
        "A. .\nB. ;\nC. :\nD. ,",
        "A. int\nB. char\nC. float\nD. string",
        "A. 0\nB. 1\nC. -1\nD. Depends on compiler",
        "A. for\nB. while\nC. do-while\nD. All of the above",
        "A. stdio.h\nB. conio.h\nC. math.h\nD. string.h"
    };

    
    char answerKey[5] = {'B','C','A','D','A'};

    int i, score = 0;  
    char userAns;

    printf("\n=== C Programming Quiz ===\n");

    
    for(i = 0; i < 5; i++) {
        printf("\n%s\n", questions[i]);   
        printf("%s\n", options[i]);       

        printf("Enter your answer : ");
        scanf(" %c", &userAns);           

    
        if(userAns == answerKey[i]) {
            printf("✅ Correct!\n");
            score++;
        } else {
            printf("❌ Wrong! Correct answer is %c\n", answerKey[i]);
        }
    }

    
    printf("\n=== Quiz Over ===\n");
    printf("Your Score = %d out of 5\n", score);

    return 0;
}
