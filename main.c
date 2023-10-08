#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;
	int hour, min, sec;

	printf("input second:");
	scanf("%d",&input);

	hour= input/3600;
	min= (input%3600)/60;
	sec= input%60;


	printf("The time is %d: %d: %d\n",hour, min, sec);


	system("PAUSE");
	return 0;
	
}
	
