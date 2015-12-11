#include <stdio.h>

main(){
	int i,j;
	j=0;
	for (i=1; i<100; i=i<<1){
		if (i % 5 > 1)
			j=j | i;
		printf("%d %d\n",i,j);

	/*
		The values are a series of left-shift operations, with OR bitwise operations also. The output is as follows:
		1 0
		2 2
		4 6
		8 14
		16 14
		32 46
		64 110

	*/
	}
}
