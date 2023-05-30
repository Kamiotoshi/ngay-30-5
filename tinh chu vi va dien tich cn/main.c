#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int chuvi(int a, int b)
{ int c;
c=2*(a+b);
printf("chu vi cn:%d\n",c);
	return c;
}
int dien_tich(int a,int b){
	int s;
s= a*b;
printf("Dien tich cn: %d\n",s);
	return s;
}
int main(int argc, char *argv[]) {
	int d,r;
	printf("Enter size\n");
	scanf("%d %d",&d,&r);
	chuvi(d,r);
	dien_tich(d,r);
	
}
