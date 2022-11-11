#include<stdio.h>

int main(){
	int n = 20, m = 10; 
	if(n!=m){
		if(n > m)
			printf("%d is greater than %d\n", n, m);
		else
			printf("%d is greater than %d\n", m, n);
	}
	else
		printf("equal numbers");
	return 0;


}
