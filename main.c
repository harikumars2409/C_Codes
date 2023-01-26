/*
	file: main.c
*/

#include "main.h"

int main() {

	int SelectProgram;
	int Status;
	char ChooseYN;

	printf("\n<-------------------- Welcome to C_Codes -------------------->\n");

	do {
		printf("---> Programs List\n");
		printf(" 1. Hello World\n");
		
		scanf_s("%d", &SelectProgram);
		switch (SelectProgram) {
		case 1: 
			Status = HelloWorldProg();
			break;
		default:
			printf("--> Invalid Program Selection\n");
		}

		printf("Do you want to continue (Yy|Nn) ? : ");
		scanf_s("\n%c", &ChooseYN);

	}while (ChooseYN == 'y' || ChooseYN == 'Y');

	return 0;
}