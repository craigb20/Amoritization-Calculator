# Amoritization-Calculator
This C project is a command-line amortization calculator that analyzes loan affordability and repayment over time. It calculates the maximum loan amount based on a user defined monthly payment, determines the required monthly payment for a given loan, and generates a detailed amortization schedule showing how each payment is divided between principal and interest.

> **Note:** This project was created for academic and learning purposes. It is not intended for production use.

## Installation

1. Ensure a C compiler is installed on your system.
2. Download or clone the repository and navigate to the project directory.
3. No external dependencies are required — the program uses only standard C libraries (`stdio.h`, `math.h`).

## Usage

Compile and run the program using your terminal or command prompt.

You will be prompted with the following inputs:

    Enter the monthly payment you can afford:
    Enter the number of years:
    Enter the annual interest rate (decimal form):
    Enter the amount borrowed:

## Key Functionality

- **Loan Affordability Calculation**
  - Computes the maximum loan amount based on a monthly payment
  - Converts loan duration from years to months
  - Adjusts annual interest rate to a monthly rate

- **Monthly Payment Calculation**
  - Calculates the required monthly payment for a given loan amount
  - Uses standard amortization formulas

- **Amortization Schedule Generation**
  - Displays a formatted table including:
    - Principal paid per period
    - Interest paid per period
    - Total interest accumulated
    - Remaining balance

## Features

- Financial calculations using amortization formulas  
- Iterative balance and interest tracking  
- Dynamic amortization table generation  
- Formatted console output for readability    

## Project Structure

    Amortization-Calculator/
    └── amortization.c

## Skills Demonstrated

- C programming  
- Mathematical and financial modeling  
- Use of standard libraries (`math.h`)  
- Control structures (loops, conditionals)  
- Console input/output handling  

## Future Improvements

- Add input validation and error handling    
- Export amortization schedule to CSV  

## License

[MIT](https://choosealicense.com/licenses/mit/)
