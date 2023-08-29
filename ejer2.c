#include <iostream>
int per(int a, int b){
	int peri;
	peri=2*a+b*2;
	return peri;
}
int ar(int a, int b){
	int ar;
	ar=a*b;
	return ar;
}
int main() {
	int a,b;
	printf("ingrese base\n");
	scanf("%d",&a);
	printf("ingrese altura\n");
	scanf("%d",&b);
	printf("el perimetro es:%d\nel area es:%d",per(a,b),ar(a,b));
	return 0;
}

