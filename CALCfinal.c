//Michael Johnson
//ITT-310
//Farris

#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void menu(); //Created a void for menu to help organise my code

int main() {
	menu(); //When the main function runs it will call the "menu" void
}
void calc() {



	//Introduce the variables for the functions
	double number1;
	double number2;
	double square;
	char functiontype;
	int get_menu_choice; //Introduce get_menu_type for user menu refrences
	char pound = '#';
	
	//Use scanf_s instead of scanf because it makes the code buggy and broken




	printf("Enter your first number! : ");
	scanf_s("%lf", &number1); //%lf is used instead of %d because the math library uses doubles not int
	//Create the prompt for which calculations you want
	printf("Enter what type of calculation is needed! (+, -, *, /, ^, #) : ");
	//I used %c because it is relating back to the char variable 
	//There is a warning on this scanf_s line (22), but it doesn't seem to hurt the functionality of my code
	//Fixed an error where the program wouldn't calculate because there wasn't a space before the %c
	scanf_s(" %c", &functiontype);

	//have to do an if statement for the square root to work 
	if (functiontype == pound) {
		square = sqrt(number1);
		printf("Square root of %lf is %lf ", number1, square);
		printf("\n");
		system("pause");
		system("cls");
		menu();

	}

	else {



		printf("Enter your second number! : ");
		scanf_s("%lf", &number2);



		//introduce a switch statement to be able to have the functiontype become any of the calculation values
		switch (functiontype)
		{
			//one for addition
		case'+':
			printf("%lf + %lf = %lf", number1, number2, number1 + number2);
			printf("\n");
			system("pause");
			system("cls");
			break;
			//one for subtraction
		case'-':
			printf("%lf - %lf = %lf", number1, number2, number1 - number2);
			printf("\n");
			system("pause");
			system("cls");
			break;
			//one for multiplication
		case'*':
			printf("%lf * %lf = %lf", number1, number2, number1 * number2);
			printf("\n");
			system("pause");
			system("cls");
			break;
			//one for division
		case'/':
			printf("%lf / %lf = %lf", number1, number2, number1 / number2);
			printf("\n");
			system("pause");
			system("cls");
			break;
			//one for squaring a number
		case'^':
			printf("%lf ^ %lf = %lf", number1, number2, pow(number1, number2));
			printf("\n");
			system("pause");
			system("cls");
			break;
		}
	}

	//Always remember return 0 to close out code
	return 0;
	//remember the closing bracket as well
}

void menu() //this is the void I created my user menu in
{
	char input[100];
	char yes[100] = "yes";
	char no[100] = "no"; //made only two options, yes and no
	int yesm;
	int nom;



	printf("Welcome to calculator\n"); //Welcome to calculator is the main portion of my menu

	while (1) {



		printf("Would you like to start?\n"); //Asks if the  user would like to start

		scanf_s("%s", input, 100);

		yesm = strcmp(input, yes); //made sure to add string compare for yes and no
		nom = strcmp(input, no);

		if (yesm == 0) {
			system("cls");
			calc();
		} //made so if yes the user moves on to the calc void to make calculations

		else if (nom == 0) {
			printf(" Goodbye");
			exit(EXIT_FAILURE);
		} //if the user says no output says goodbye and prompts you to exit by pressing any key


		else {
			printf(" Please type either yes or no\n");
		}// i added this to give better direction of the options. If you try to say anything other than yes or no it will tell you to do yes or no

	}
}