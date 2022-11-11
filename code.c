#include<stdio.h>

int main(){
	int n, m; 
	scanf("%d%d", &n, &m);
	if(n!=m){
		if(n > m)
			printf("%d is greater than %d\n", n, m);
		else
			printf("%d is greater than %d\n", m, n);
	}
	return 0;


}
