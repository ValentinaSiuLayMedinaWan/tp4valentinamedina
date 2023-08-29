#include <stdio.h>

int algo(int a, int c){
	a=c;
	return a;
}
	int i(int b, int d){
		b=d;
		return b;
	}
int main() {
	int a=0,b=0,c=0,d=0;
	printf("ingrese un numero\n");
	scanf("%d",&c);
	printf("ingrese un numero\n");
	scanf("%d",&d);
	a=algo(a,c);
	b=i(b,d);
	printf("primer numero:%d\nsegundo numero:%d",a,b);
	return 0;
}

