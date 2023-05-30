#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("Welcome\n");
	printf("a.Experso-$2.50\n");
	printf("b.Cappuchino-$3.00\n");
	printf("c.Lattle-$3.50\n");
	printf("d.Quit\n");
}
void order(char choice)
{
	switch(choice)
	{
		case 'a':
			printf("Order: Expesro\n");
			break;
		case 'b':
			printf("Order: Cappuchino\n");
			break;
		case 'c':
			printf("Order: Lattle\n");
			break;
		default:
			printf("Invaild option.Try again\n");
	}
}
float calculateTotalcost(char choice,int soluong){
	float price;
	switch(choice){
		case 'a':
			price=2.50;
			break;
		case 'b':
			price=3.00;
			break;
		case 'c':
			price=3.50;
			break;
		default:
			price=0.00;
	
	}
	return price*soluong;
}

int main(int argc, char *argv[]) {
	char choice;
	int soluong;
	do{
		menu();
		printf("Enter choice\n");
		scanf("%c",&choice);
		if(choice!='d'){
			printf("Nhap soluong\n");
			scanf("%d",&soluong);
			order(choice);
			float totalcost=calculateTotalcost(choice,soluong);
			printf("Total cost:$%.2f\n\n",totalcost);
		}
	}while(choice!='d');
	return 0;
}
