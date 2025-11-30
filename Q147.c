/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int n, i;

    fp = fopen("employees.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 0;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, id, salary for employee %d: ", i + 1);
        scanf("%49s %d %f", e.name, &e.id, &e.salary);
        fwrite(&e, sizeof(struct Employee), 1, fp);
    }

    fclose(fp);

    fp = fopen("employees.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 0;
    }

    printf("\nEmployee data from file:\n");
    while (fread(&e, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s | ID: %d | Salary: %.2f\n", e.name, e.id, e.salary);
    }

    fclose(fp);
    return 0;
}
