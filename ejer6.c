#include <stdio.h>
float octa(float a){
	float oc;
	oc=a/8;
	return oc;
}
int main() {
	float oc=0,a;
	printf("ingrese un numero\n");
	scanf("%f",&a);
	oc=octa(a);
	printf("la 8va parte de %.2f es:%.2f\n",a,oc);
	return 0;
}

