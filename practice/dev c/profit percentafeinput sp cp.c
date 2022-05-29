#include<stdio.h>
void main()
{
   float buy_rate, sell_rate, profit, profit_per;
   printf("Enter buy and sell rate : ");
   scanf("%f %f", &buy_rate, &sell_rate);
   profit = sell_rate - buy_rate;
   profit_per = (profit/sell_rate)*100;
   printf("Profit = %.2f & Percentage of Profit = %.2f", profit, profit_per);
}
