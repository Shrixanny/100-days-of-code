// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

/*#include<stdio.h>

int main() {

    int number, a, b, c, d, e, new_number;
    
    printf("Enter number: ");
    scanf("%d", &number); 
    
    number = a*10000 + b*1000 + c*100 + d*10 + e;
    
    a = number /10000;
    b = (number/1000)%10;
    c = (number%100)/100;
    d = (number%100)%10;
    e = number%10;

    new_number = e*10000 + d*1000 + c*100 + b*10 + a;

    printf("New number is %d", new_number);

    return 0;
    
}
*/


#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    int r = 0; // remainder
    while (n>0){
        r = r*10;
        r = r + (n%10);
        n=n/10;
    }
    printf("The reverse of a number : %d",r);
    return 0;
}
