#include <stdio.h>
#include <stdlib.h>

void input(int []);
void reverse(int[]);
float average(int[]);
void output(int [], float);

int main ()
{
	int numbers[5];
	float avg;
	char choice = 'Z';
	
	while (choice == 'Z')
	{
		input(numbers);
		reverse(numbers);
		avg = average(numbers);
		output (numbers, avg);
		
		// prompts the user for additional sets of numbers 
		printf("Do you want to enter an additional set of numbers? (Yes/No): ");
		scanf("%c", &choice);
		
	}
	
	return 0;
		
}



void input(int nums [])
{
	printf("Enter 5 integers: ");
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &nums[i]);
		
	}
}



// function to reverse order of the array
void reverse (int nums [])
{
	int temp;
	for (int i = 0, k = 4; i < k; i++, k--)
	{
		temp = nums[i];
		nums [i] = nums [k];
		nums[k] = temp;
	}
}


// function to average the numbers in the array
float average (int nums [])
{
	float sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += nums[i];
	}
	return sum / 5;
}


// displays each number and the distance the number is from the average
void output (int numbers [], float avg)
{
	printf("The numbers in the array in reverse order are: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", numbers[i]);
	}
	printf("\nAverage: %.2f\n", avg);
	printf("Difference from average:");
	for (int i = 0; i <= 5; i++)
	{
		printf("\n%d: %.2f", numbers[i], numbers[i] - avg);
	}
	printf("\n");
}
