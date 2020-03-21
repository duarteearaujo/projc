#include <stdio.h>

int main(){
	int n1, n2, n3, max=0;
	scanf("%d%d%d", &n1, &n2, &n3);
	if(n1 >= n2)
		max = n1;
	else
		max = n2;
	if(n3 > max)
		max = n3;
	printf("%d\n", max);
	return 0; 
}
