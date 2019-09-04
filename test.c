#include<stdio.h>

int main(void){
	int a;
	int b;
	int c;
	scanf("%d",&a);
	switch(a){
		case 1:
			b = 2;
			break;
		case 2:
			b = 3;
			break;
		default:
			printf("1,2,を代入せよ\n");
			break;
		}
	c = (b==3) ? 'A' : 'B';
	printf("%c\n",c);
return 0;
}
	
		

