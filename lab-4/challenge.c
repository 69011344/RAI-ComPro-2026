 #include <stdio.h>
int main(){
  int menu, balance = 0, deposit, withdraw;
  do{
   printf("=====ATM MENU=====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Choose an Option: ");
     scanf("%d", &menu);

    if (menu == 1){
     printf("Current Balance: %d\n", balance);
    }
    else if (menu == 2){
     printf("Enter amount to deposit: ");
     scanf("%d", &deposit);
     balance = balance + deposit;
    }
    else if (menu == 3){
        printf("Enter an amount to withdraw: ");
        scanf("%d", &withdraw);
         if (balance - withdraw >= 0){
            printf("Withdrawl sucessful.\n");
            balance = balance - withdraw;
         }
         else {
            printf("You dont have enough balance for this transaction.\n");
         }
    }
    else if (menu == 4){
     printf("Thank you for using the ATM.\n");
    }
  }
  while(menu != 4);

  return 0;



}