#include<stdio.h>
int action;
float totalmoney=1500.0, dailylimit=500.0;
float amountofmoney;

int main(void){

    printf("Enter the action to be taken:\nOptions: 1 for withdrawal , 2 for deposit, 3 for moneyinquiry \n");
    scanf("%d",&action);
 
    if(action==1)
    {
        printf("Please enter amount of money you want the withdrawal:\n ");
        scanf("%f",&amountofmoney);

        if (amountofmoney<=totalmoney ){
            if( amountofmoney<=dailylimit) {
                printf("Take money you want the withdrawal.\n");  
                totalmoney-=amountofmoney;
                printf("Total many is :%f", totalmoney);     
            }
            else 
                printf("Amount of money you want to take is above the daily limit.\n");
        }
        else {
            printf("Insufficient funds.Please try again.\n");
        }

    }
    else if (action==2){
        printf("Enter the amount of money you want to deposit.\n");
        scanf("%f",&amountofmoney);
        totalmoney+=amountofmoney;
        printf("Total many is:%f", totalmoney);
        
    }
   
    else if (action==3){
        printf("Totaly many is:%f",totalmoney);
    }   
    else {
        printf("Number your enter is not avaliable.");
    }
   return 0;
}