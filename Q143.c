/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n, i, topIndex = 0;
    struct Student students[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of students\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topIndex].name, students[topIndex].marks);

    return 0;
}
