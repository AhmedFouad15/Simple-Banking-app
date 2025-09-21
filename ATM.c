#include <stdio.h>
#include <math.h>

void checkbalance(float mybalance){
    printf("Your balance is %0.2f\n", mybalance);
}
void Loan(){

    float loanAmon;
    int loanchoice;
    printf("How much woud you like to take as a loan?: ");
    scanf("%f", &loanAmon);

    printf("Please choose the option of the loan Note that per year the intrest is 18%% \n");
    printf("1. 1 year\n2. 3 years\n3. 5 years\nPlease choose from 1 to 3: ");
    scanf("%d", &loanchoice);
    float paied;

    switch(loanchoice){
    case 1:
        paied = loanAmon * ((0.18 * 1) + 1);
        printf("Total you will pay after the 1 year is %0.2f", paied);
        break;
    case 2:
        paied = loanAmon * ((0.18 * 3) + 1);
        printf("Total you will pay after the 3 year is %0.2f", paied);
        break;
    case 3:
        paied = loanAmon * ((0.18 * 5) + 1);
        printf("Total you will pay after the 5 year is %0.2f", paied);
        break;
    default:
    printf("Invalid choice");
        break;
    }
}
void Staking(){
    //P (1+i) t – P
    float princple;
    float rate;
    float period;

    printf("Plese enter your enitials(Principle): ");
    scanf("%f", &princple);

    printf("How much is the intrest rate?: ");
    scanf("%f", &rate);

    printf("For how long are you going to leave them(in years)?: ");
    scanf("%f", &period);

    float total = princple * pow((1 + (rate / 100)) , period);
    printf("You will take home $%0.2f", total);

}
float deposit(float mybalance){
    float deposit = 0;
    printf("How much would you like to deposit?: ");
    scanf("%f", &deposit);

    if(deposit < 0){
        printf("You can't deposit a negative number");
        return(0);
    }
    else{
        printf("You deposited $%0.2f", deposit);
        return(deposit);
    }
}
float withdraw(float  mybalance){
    float withdrawn = 0;
    printf("How much would you like to withdraw?: ");
    scanf("%f", &withdrawn);


    if(withdrawn > mybalance){
        printf("\nYou can't withdraw more than your balance\nYour Balance is $%0.2f\n", mybalance);
        return(0);
    }

    else if(withdrawn < 0){
        printf("You can't withdraw a negative number");
        return(0);
    }
    else{
        printf("You withdrew $%0.2f", withdrawn);
        return(withdrawn);
    }
}

int main() {
    
    float mybalance = 0;
    int choice;
    char temp;
    printf("*** Welcome to the ATM Machine ***\n");
    do{
        printf("\nPlease choose an option\n1. check balance\n2. Deposit\n3. Withdraw\n4. Loan\n5. Staking\n6. Exit\n");
        printf("\nWhat is your option?: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkbalance(mybalance);
                printf("\nPlease enter any key to go to the menu again: ");
                scanf(" %c", &temp);
                break;
            case 2:
                mybalance += deposit(mybalance);
                printf("\nPlease enter any key to go to the menu again: ");
                scanf(" %c", &temp);
                break;
            case 3:
                mybalance -= withdraw(mybalance);
                printf("\nPlease enter any key to go to the menu again: ");
                scanf(" %c", &temp);     
                break;
            case 4:
                Loan();
                printf("\nPlease enter any key to go to the menu again: ");
                scanf(" %c", &temp);     
                break;
            case 5:
                Staking();
                printf("\nPlease enter any key to go to the menu again: ");
                scanf(" %c", &temp);     
                break;
            case 6:
                printf("Thanks for using our ATM!");
                break;
            default:
                printf("Invalid option");
            }
    }while(choice != 6);


    return(0);
}