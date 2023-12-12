#include <stdio.h>

int main() {
    float hours, rate, grossPay, netPay;
    int id;


	// Prompt user for employee ID
    printf("Enter employee ID: ");
    scanf("%d", &id);


	// Loop for entering hours worked
    while (1) {
    	
    	// Prompt user for hours worked
        printf("\nEnter the number of hours worked (-1 to end): ");
        scanf("%f", &hours);

        if (hours == -1) {
            break;
        }

		// Prompt user for hourly rate
        printf("Enter the hourly rate ($00.00): ");
        scanf("%f", &rate);

		// Calculate gross pay based on regular and overtime hours
        if (hours > 40) {
            grossPay = 40 * rate + (hours - 40) * rate * 1.5;
        } else {
            grossPay = hours * rate;
        }

		// Calculate net pay after taxes(12.5%)
        netPay = grossPay - (grossPay * 0.125);
        
		printf("\nThe gross pay is %.2f\n", grossPay);
		printf("The net pay is %.2f\n", netPay);
  
    }

    return 0;
}


