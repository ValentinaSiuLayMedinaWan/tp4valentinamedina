#include <stdio.h>
	int pm(int m, int h, int t){
	int pm;
	pm=(m*100)/t;
	return pm;
	}
	
	int ph(int m, int h, int t){
		int ph;
		ph=(h*100)/t;
		return ph;
	}
int main() {
	int m,h,t=0;
	printf("ingrese cantidad de mujeres\n");
	scanf("%d",&m);
	printf("ingrese cantidad de hombres\n");
	scanf("%d",&h);
	t=m+h;
	printf("porcentaje de mujeres:%d\n",pm(m,h,t));
	printf("porcentaje de hombres:%d\n",ph(m,h,t));
	return 0;
}

