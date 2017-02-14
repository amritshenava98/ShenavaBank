#include<stdio.h>
#include<conio.h>
 struct bankinfo
 {
  char accountname[10];
  int accountholderage;
  char branch[10];
  int accountnumber;
  int accountbalance;
  int optionnumber;
 }bankinfo;

void createaccount(struct bankinfo record);
void balancecheck(struct bankinfo record);

int main()
{
 struct bankinfo essential;
 clrscr();
 printf("\n ***WELCOME TO SHENAVA BANK*** ");
 printf("\n PLEASE SELECT THE SERVICE YOU WANT TO AVAIL : ");
 printf("\n 1. ACCOUNT CREATION");
 printf("\n 2. CHECK BALANCE");
 printf("\n 3. MONEY TRANSFER");
 printf("\n ENTER OPTION NUMBER : ");
 scanf("%d",&essential.optionnumber);
 switch(essential.optionnumber)
 {
  case 1:
    createaccount(bankinfo);
    break;
  case 2:
    balancecheck(bankinfo);
  default:
    printf("***ERROR 404:DATA NOT FOUND***");

 }
return 0;

}

void createaccount(struct bankinfo record)
{
 printf("\n PLEASE ENTER YOUR NAME : ");
 scanf("%s",&record.accountname);
 printf("\n PLEASE ENTER YOUR AGE : ");
 scanf("%d",&record.accountholderage);
 printf("\n ENTER AMOUNT : ");
 scanf("%d",&record.accountbalance);
 printf("\n YOUR ACCOUNT HAS BEEN SUCCESSFULLY CREATED ");
 getch();
}

void balancecheck(struct bankinfo record)
{
 printf("YOUR ACCOUNT BALANCE IS %d",record.accountbalance);
 getch();
}
