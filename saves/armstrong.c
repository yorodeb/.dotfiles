#include <stdio.h>

int isArmstrong(int prgin);

int main(void){
	int prgout = isArmstrong(153);

	if(prgout == 1){printf("Yes!\n");}
	else{printf("No!\n");}

	return (0);
}

int isArmstrong(int prgin){
	int prg_state = prgin;
	int summition;

	while(prgin > 0){
		int diff = prgin % 10;
		diff = diff * diff * diff;

		summition += diff;
		prgin = prgin / 10;
	}

	if(summition == prg_state){
		return (1);
	} else{
			return (0);
	}
}
