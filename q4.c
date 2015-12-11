/*Write a program that checks C code if there are open comments that were not closed. The program should terminate immediately when if finds this situation and report the error.*/

#include <stdio.h>
#include <string.h>

main(){
	char code[100] = {""};
	int check = 0;	

	printf("Please enter your code (only press the enter button when you've finished typing\n\n");
	scanf("%s", code);
	
	while(1){
		if((code[check] == '/') && (code[check+1] == '*')){
			if((strlen(code) == check) && (code[check] != '/' && code[check-1] != '*')){
				printf("Error: improper commenting\n");
				break;
			}
		}

		else if(strlen(code) == check){
			break;
		}
		check++;
	}
}
