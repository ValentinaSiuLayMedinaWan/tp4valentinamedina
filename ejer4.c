#include <stdio.h>
int presion(int f, int a){
	int p;
	p=f/a;
	return p;
}
int main() {
	int f,a;
	printf("ingrese fuerza\n");
	scanf("%d",&f);
	printf("ingrese area\n");
	scanf("%d",&a);
	printf("la presion es:%d\n",presion(f,a));
	return 0;
}

