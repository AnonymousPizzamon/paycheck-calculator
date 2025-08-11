#include <stdio.h>

int main (){
//take input of hours for each day of week for total of 14 days
//multiply total number of hours by rate worked: (total_hours * pay_rate = gross_pay)
//gross pay * individual tax rates:  (gross_pay * .% (variable for each tax )) 
//constant :  S_S_TAX = 6.2% (gross_pay * .062);
//constant :  MEDICARE = 1.45% (gross_pay * .0145) 
// total_tax = Social Security_deduct + Medicare_deduct
//net_pay = gross_pay - total_tax

const double S_S_TAX_RATE = 0.062;  
const double MEDICARE_TAX_RATE = 0.0145;

double payRate;
double gross_pay;
double net_pay;
double total_tax;
double total_hours_wk1 = 0;
double total_hours_wk2 = 0;

double week1_hours[7];
double week2_hours[7];

printf("Enter Payrate: $");
scanf("%lf", &payRate);

printf("\nEnter hours worked each day for week 1-\n ");
for (int i = 0; i < 7; i++ ){
    printf("Day %d: ", i + 1);
    scanf("%lf", &week1_hours[i]);   //takes in and stores input for each day into an array[i]//
    total_hours_wk1 += week1_hours[i];   //Stores wk1 hours in seperate variable from wk2//
}
printf("\tWeek1 Hours: %.3f\n", total_hours_wk1);

printf("Enter hours worked each day for week 2-\n ");
for (int i = 0; i < 7; i++ ){
    printf("Day %d: ", i + 1);
    scanf("%lf", &week2_hours[i]);
    total_hours_wk2 += week2_hours[i];
}
printf("\tWeek2 Hours: %.3f\n\n", total_hours_wk2 );

double total_hours = total_hours_wk1 + total_hours_wk2;
printf("Total Hours: %.3f\n", total_hours);

gross_pay = payRate * total_hours;
printf("Gross Pay = %.2f\n", gross_pay);

total_tax = ((gross_pay * S_S_TAX_RATE) + (gross_pay * MEDICARE_TAX_RATE));
net_pay = gross_pay - total_tax ;
printf("Net Pay = %.2f\n", net_pay);


}

