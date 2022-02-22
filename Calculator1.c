#include<stdio.h>

int main()

{
	//Introduce the variables for the functions
	int number1;
	int number2;
	char functiontype;
	//Create the user prompts with printf and use scanf_s to allow the machine to read it properly relating to the variables created before
	//Use scanf_s instead of scanf because it makes the code buggy and broken
	printf("Enter your first number! : ");
	scanf_s("%d", &number1);
	printf("Enter your second number! : ");
	scanf_s("%d", &number2);
	//Create the prompt for which calculations you want
	//As of now I only learned how to do add, sub, mult, and div properly but will be learning to expand it to 6 calculations
	printf("Enter what type of calculation is needed! (+, -, *, /) : ");
	//I used %c because it is relating back to the char variable 
	//There is a warning on this scanf_s line (20), but it doesn't seem to hurt the functionality of my code
	//Fixed an error where the program wouldn't calculate because there wasn't a space before the %c
	scanf_s(" %c", &functiontype);
	//introduce a switch statement to be able to have the functiontype become any of the calculation values
	switch (functiontype)
	{
		//use of %d is needed because I chose to use int for my variables
		//one for addition
		case'+':
			printf("%d + %d = %d", number1, number2, number1 + number2);
			break;
		//one for subtraction
		case'-':
			printf("%d - %d = %d", number1, number2, number1 - number2);
			break;
		//one for multiplication
		case'*':
			printf("%d * %d = %d", number1, number2, number1 * number2);
			break;
		//one for division
		case'/':
			printf("%d / %d = %d", number1, number2, number1 / number2);
			break;
	}

	//Always remember return 0 to close out code
	return 0;
	//remember the closing bracket as well
}
//This is the end of my first draft of my calculator code for my benchmark proj
