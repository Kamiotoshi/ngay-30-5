#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int show(int s);
int main(int argc, char *argv[]) {
	int point;
	printf("Enter point\n");
	scanf("%d",&point);
	show(point);
	return 0;
}
int show(int s){
	if(s>=90)
	{
		printf("A");
	}
	else if(s>=80&&s<=89)
	{
		printf("B");
	}
	else if(s>=70&&s<=79)
	{
		printf("C");
	}
	else if(s>=60&&s<=69)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
}
