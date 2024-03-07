/*The bonuses issued by the company are based on profits.

When the profit (I) is less than or equal to 100,000 yuan, the bonus can be 10%;
When the profit is more than 100,000 yuan and less than 200,000 yuan,
the commission is 10% for the part below 100,000 yuan, and 7.5% for the part above 100,000 yuan;
When the amount is between 200,000 and 400,000 yuan, the portion above 200,000 yuan can be commissioned 5%;
When the amount is between 400,000 and 600,000 yuan, the portion above 400,000 yuan can be commissioned at 3%;
When the amount is between 600,000 and 1 million, the portion above 600,000 yuan can be commissioned 1.5%;
When the amount exceeds 1 million yuan, the portion exceeding 1 million yuan will be charged a commission of 1%.
Enter the current month's profit I from the keyboard. Find the total number of bonuses that should be distributed?*/

#include <stdio.h>

int main(

    int argc,
    char argv[])
{
    double profit, bonus;

    scanf("%lf", &profit);

    if (profit <= 100000)
    {
        bonus = profit * 0.1;
    }
    else if (100000 < profit <= 200000)
    {
        bonus = 100000 * 0.1 + (profit - 100000) * 0.075;
    }
    else if (200000 < profit <= 400000)
    {
        bonus = 100000 * 0.1 + 100000 * 0.075 + (profit - 20000) * 0.05;
    }
    else if (40000 < profit <= 600000)
    {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
    }
    else if (600000 < profit <= 1000000)
    {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600) * 0.015;
    }
    else
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 200000 * 0.015 + (profit - 1000000) * 0.01;


printf("The bonus is %lf\n", bonus);

return 0;
}
