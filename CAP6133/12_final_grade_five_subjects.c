#include <stdio.h>

int main() {
    int marks, total = 0, grade;

    printf("Enter marks of 5 subjects (out of 100) :\n");
    for (int i = 1; i <= 5; i++) {
        printf("Subject %d : ", i);
        scanf("%d", &marks);
        total += marks;
    }

    grade = total / 5;

    if (grade >= 90) printf("Final Grade: A+\n");
    else if (grade >= 80) printf("Final Grade: A\n");
    else if (grade >= 70) printf("Final Grade: B+\n");
    else if (grade >= 60) printf("Final Grade: B\n");
    else if (grade >= 50) printf("Final Grade: C+\n");
    else if (grade >= 40) printf("Final Grade: C\n");
    else if (grade >= 30) printf("Final Grade: D\n");
    else printf("Final Grade: F\n");

    return 0;
}