#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
int rolldice(int a){
	a = rand() %6 + 1;
	return a;
}
int main(){
	
	int puan=0;
	int again=1;
	while (again==1){
	int x=rolldice(x);
	int y=rolldice(y);
	int toplam =  x + y;
	
	printf("toplam = %d\n",toplam);
	printf("you get %d and %d \n",x,y);
	if(toplam ==7 || toplam == 10){
		printf("You win");
	}
	else if(toplam == 2 || toplam == 3 || toplam == 12){
		printf("Game over");
	}
	else{
		puan+=toplam;
		printf("you have to get %d \n",puan);
		int toplam = 0;
		toplam = rolldice(x) + rolldice (y);
		printf("you get %d and %d \n",rolldice(x),rolldice(y));
		if(toplam == 7){
			printf("You get 7. Game over");
		}
		else if (toplam == puan){
			printf("You win!");
		}
		else{
			printf("You couldn't get your point. Game over!");
		}
	}
	printf("\nDo you wanna play again (1,0)");
	scanf("%d",&again);
	}
}
