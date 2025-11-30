/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student getTopper(struct Student arr[], int n) {
    int i, topIndex = 0;
    for (i = 1; i < n; i++) {
        if (arr[i].marks > arr[topIndex].marks) {
            topIndex = i;
        }
    }
    return arr[topIndex];
}

int main() {
    int n, i;
    struct Student students[100], topper;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of students\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    topper = getTopper(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}
