#include <stdio.h>
#include <string.h>

main(){
	int num;
	char binary[10] = {""};
	char vals[20] = {""};

	int count = 0;
	int i;	

	printf("Please enter a number: ");
	scanf("%d", &num);

	while(1){
		if((num%2 == 0) && (num > 1)){
			vals[count] = num/2;
			binary[count] = '0';
			num = vals[count];
			
			count++;
		}

		else if((num%2 != 0) && (num > 1)){
			vals[count] = num/2;
			binary[count] = '1';
			num = vals[count];

			count++;
		}

		else{
			binary[count] = '1';
			printf("\nBinary is: ");
			

			for(i=strlen(binary); i>=0; i--){
				printf("%c", binary[i]);
			}

			printf("\n");

			break;
		}
	}
}
