// 3. Grade Calculator using switch-case

#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9:
        case 8:
            printf("Grade: A+\n");
            break;

        case 7:
            printf("Grade: A\n");
            break;

        case 6:
            printf("Grade: A-\n");
            break;

        case 5:
            printf("Grade: B\n");
            break;

        case 4:
            printf("Grade: C\n");
            break;

        case 3:
            printf("Grade: D\n");
            break;

        default:
            if (marks >= 0 && marks < 30)
                printf("Grade: F\n");
            else
                printf("Invalid Marks\n");
    }

    return 0;
}