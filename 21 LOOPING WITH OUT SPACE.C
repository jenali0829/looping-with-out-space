#include<stdio.h>
main(){
	char r='A';
	char c='B';
	
	
	for(r='A'; r<='E'; r++){
	for(c='A'; c<=r; c++){
		printf("%c",c);
	}
	printf("\n");
}
}
