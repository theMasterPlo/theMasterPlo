#include<stdio.h>

int main()



{
	//create a console menu


	{//Introduce the variables for the functions
		int number1;
		int number2;
		char functiontype;
		int get_menu_choice; //Introduce get_menu_type for user menu refrences
		//Create the user prompts with printf and use scanf_s to allow the machine to read it properly relating to the variables created before
		//Use scanf_s instead of scanf because it makes the code buggy and broken
	}

	void main(void)
	{
		int choice;
		choice = get_menu_choice();
		printf("You have chosen menu option #%d\n", choice); //Show user the choice they made
		printf("\n");
	}

	int get_menu_choice(void)
	{
		int selection = 0;

		do //do loop to make the menu
		{
			printf("Welcome to Calculator!"); //welcome the user in the meny
			printf("\n1 - Continue to calculator");
			printf("\n2 - Quit Calculator");
			printf("Enter your choice: ");
			//I gave the user 2 choices because I didn't want something too complex for a calculator menu
			scanf_s("%d", &selection);
			scanf_s("%d", &selection, 1);
		}

		while ((selection < 1) || (selection > 2)); //make sure the code knows only 2 choices are available
		return selection; //return selection
	}

	

		printf("Enter your first number! : ");
		scanf_s("%d", &number1);
		printf("Enter your second number! : ");
		scanf_s("%d", &number2);
		//Create the prompt for which calculations you want
		//As of now I only learned how to do add, sub, mult, and div properly but will be learning to expand it to 6 calculations
		printf("Enter what type of calculation is needed! (+, -, *, /) : ");
		//I used %c because it is relating back to the char variable 
		//There is a warning on this scanf_s line (22), but it doesn't seem to hurt the functionality of my code
		//Fixed an error where the program wouldn't calculate because there wasn't a space before the %c
		scanf_s(" %c", &functiontype);
	}
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
