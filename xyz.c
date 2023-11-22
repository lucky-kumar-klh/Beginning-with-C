#include <stdio.h>
int main(){
	int balance = 0, withdraw, deposit, choice, withdrawAmt, depositAmt;
	printf("Enter initial balance : ");
	scanf("%d", &balance);
	printf("Select any two options :\n1. Withdraw\n2. Deposit\nEnter your choice : ");
	scanf("%d", &choice);
	switch (choice){
	case 1:
		printf("Enter Withdraw amt : ");
		scanf("%d", &withdrawAmt);
		if ( withdrawAmt > balance ) {
			printf("Insuffiecient Balance");
			break;
		}
		else {
			balance -= withdrawAmt;
			printf("New Balance = %d", balance);
		}
		break;
	
	case 2:
		printf("Enter Deposit amt : ");
		scanf("%d", &depositAmt);
		balance += depositAmt;
		printf("New Balance = %d", balance);
		break;
	default:
		printf("BSDK");
	}
	
}