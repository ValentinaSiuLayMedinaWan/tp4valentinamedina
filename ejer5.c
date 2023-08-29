#include <stdio.h>
#include <stdlib.h>
int suma (int a,int t){
	t=t+a;
	return t;
}
	
	int main (){
		int a=0,i,t=0;
		for(i=1;i<6;i++){
			printf("ingrese resistencia %d\n",i);
			scanf("%d",&a);
			t=suma(a,t);
		}
		printf("la resistencia total es:%d\n",t);
		return 0;
	}

