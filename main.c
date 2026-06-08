#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Total_marks, m1, m2, m3, Highest_mark;
    float Average_marks;
    char Grade;
    char Pass[10], Fail[10];

    printf("Enter mathematics marks: ");
    scanf("%d", &m1);
    printf("Enter science marks: ");
    scanf("%d", &m2);
    printf("Enter english marks: ");
    scanf("%d", &m3);

    printf("\n");

    Total_marks = m1 + m2 + m3;
    Average_marks = Total_marks / 3;

    printf("Total: %d\n", Total_marks);
    printf("Average: %.2f\n", Average_marks);

    if (80 <= Average_marks) {
        printf("Grade: A\n");
    }
    else if (70 <= Average_marks) {
        printf("Grade: B\n");
    }
    else if (60 <= Average_marks) {
        printf("Grade: C\n");
    }
    else if (50 <= Average_marks) {
        printf("Grade: D\n");
    }
    else {
        printf("Grdae: F\n");
    }

    if (m1 >= 40 && m2 >= 40 && m3 >= 40) {
        printf("Result: Pass");
    }
    else {
        printf("Result: Fail");
    }


    return 0;
}
