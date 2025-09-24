#include <stdio.h>
#include <math.h>

int main(void) {
	
	//Declares variables
	double A;
	int n;
	double r;
	double P;
	double interest;
	double principal;
	double totalInterest = 0;
	double balance;
	int i;

	//Prompts user for the monthly payment the user can afford
	printf("Enter the monthly payment you can afford: ");
	scanf_s("%lf", &A);

	//Prompts the user for the number of years
	printf("Enter the number of years: ");
	scanf_s("%d", &n);

	//Equation to convert years into months
	n = n * 12;

	//Prompts user for the rate 
	printf("Enter the annual interest rate (decimal form): ");
	scanf_s("%lf", &r);

	//Equation for rate
	r = r / 12;

	P = A * (1 - pow(1 + r, -(n))) / r;

	//Prints the maximum amount the user should borrow
	printf("The maximum amount you should borrow is: $%.2lf\n", P);

	//Resets values to 0
	P = 0;
	A = 0;

	//Prompts the user for the amount they borrowed 
	printf("Enter the amount borrowed: ");
	scanf_s("%lf", &P);

	//Formula for the monthly payment
	A = P * (r * pow(1 + r, n)) / (pow(1 + r, n) - 1);

	//Prints the monthly payment 
	printf("Your monthly payment is: $%.2lf\n", A);

	//Sets balance equal to P
	balance = P;

	//Creates table format
	printf("%-8s%15s%14s%20s%13s\n", "Period", "Principal", "Interest", "Total Interest", "Balance");

	//For loop to create amortization table
	for (i = 1; i <= n; i++) {

		//Formulas for variables in the table
		interest = r * balance;
		principal = A - interest;
		totalInterest = totalInterest + interest;
		balance = balance - principal;

		//Prevents balance from going negative
		if (balance < 0.01) {
			balance = 0.0;
		}

		//Prints variables in the correct spots in the table
		printf("%-8d%15.2lf%14.2lf%20.2lf%13.2lf\n", i, principal, interest, totalInterest, balance);

	}
}
