// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main()
{

    float selling_price, cost_price, profit, profit_percentage;

    printf("Enter the cost price of the item: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price of the item: ");
    scanf("%f", &selling_price);

    profit = selling_price - cost_price;

    if (profit == 0)
    {
        printf("No profit, No loss");
    }

    else
    {
        profit_percentage = (profit/cost_price)*100 ;

        if (profit > 0)
        {
            printf("You are in profit and the profit percentage of %f", profit_percentage);
        }

        else
        {
           printf("You are in loss and your loss percentage of %f", -profit_percentage);
        }
    }
    return 0;
}