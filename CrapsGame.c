#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
int rolldice(int a){
	a = rand() %6 + 1;
	return a;
}
int main(){
	
	int point=0;
	int again=1;
	while (again==1){
	int x=rolldice(x);
	int y=rolldice(y);
	int total =  x + y;
	
	printf("total = %d\n",total);
	printf("you get %d and %d \n",x,y);
	if(total ==7 || total == 10){
		printf("You win");
	}
	else if(total == 2 || total == 3 || total == 12){
		printf("Game over");
	}
	else{
		point+=total;
		printf("you have to get %d \n",point);
		int total = 0;
		total = rolldice(x) + rolldice (y);
		printf("you get %d and %d \n",rolldice(x),rolldice(y));
		if(total == 7){
			printf("You get 7. Game over");
		}
		else if (total == point){
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
