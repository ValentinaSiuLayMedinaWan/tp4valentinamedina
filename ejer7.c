#include <stdio.h>
int resta(int a, int b){
	int c;
	c=a-b;
	return c;
}

	void compa(int c, int a, int b){
		if(c==0)
			printf("%d y %d son iguales\n",a,b);
		else
			if(c<0)
				printf("%d es mayor que %d\n",b,a);
			else
				printf("%d es mayor que %d\n",a,b);
	}
int main() {
	int a,b,c=0;
	printf("ingrese un numero\n");
	scanf("%d",&a);
	printf("ingrese un numero\n");
	scanf("%d",&b);
	c=resta(a,b);
	compa(c,a,b);
	return 0;
}

