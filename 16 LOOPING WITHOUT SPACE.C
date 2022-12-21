#include<stdio.h>
main(){
	int r,c;
	
	for(r=5; r>=1; r--){
	for(c=r; c>=1; c--){
			if(c%2 !=0){
			printf("1",c);
		}
		else{
			printf("0",c);
		}
	
	}
		printf("\n");
	}
}
