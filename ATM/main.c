#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int so_du=100000;
void choice_a(char g){
	printf("So du cua ban la %d\n",so_du);
	
}
void choice_b(char z)
{
	int tienrut;
	printf("Nhap so tien muon rut\n");
	scanf("%d",&tienrut);
	if(tienrut<=so_du)
	{
		printf("Ban da rut thanh cong\n");
		so_du-=tienrut;
		printf("So du hien tai la %d\n",so_du);
	}
	else
	{
		printf("Ban ko du tien de rut\n");
	}
}
void choice_c(char x)
{
	int tiengui;
	printf("Nhap so tien muon gui\n");
	scanf("%d",&tiengui);
	printf("Ban da gui tien thanh cong\n");
	so_du+=tiengui;
	printf("So du hien tai la %d\n",so_du);
}
void choice_d(char f){
	printf("Hen gui lai lan sau\n");
}
void menu(){
	printf("Chao mung den app\n");	
		printf("a.Kiem tra so du\n");
		printf("b.Rut tien\n");
		printf("c.Gui tien\n");
		printf("d.Thoat\n");
}
int main(int argc, char *argv[]) {
	char choice;
	
	do
	{
		menu();
		printf("Enter your choice\n");
		scanf("%c",&choice);
		switch (choice){
			case 'a':
				choice_a(choice);
				break;
			case 'b':
				choice_b(choice);
				break;
			case 'c':
				choice_c(choice);
				break;
			case 'd':
				choice_d(choice);
				break;
		}
	}while(choice!='d');
	
}
