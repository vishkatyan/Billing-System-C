#include<stdio.h>
#include<conio.h>
#include<dos.h>
//#include<graphics.h>
void main()
{
char shop, product;
int id,quantity, price=150,bill;
clrscr();
textbackground(GREEN);
textcolor(RED);
gotoxy(25,10);
cprintf("Welcome to Internship Alerts Platform\n");
gotoxy(25,14);
cprintf("Enter your Shop Name:\n");
scanf("%c", &shop);
if(shop=='I')
{
     gotoxy(25,17);
     cprintf("Enter your ID number:\n");
     scanf("%d",&id);
     if(id==1312){
      clrscr();
      textbackground(GREEN);
      textcolor(RED);
      gotoxy(25,10);
      cprintf("Welcome to Internship Alerts Platform\n");
      gotoxy(25,15);
      cprintf("Enter your Product Name and Quantity:\n");
      scanf("%c%d", &product, &quantity);
      clrscr();
      textbackground(GREEN);
      textcolor(RED);
      gotoxy(25,10);
      cprintf("Welcome to Internship Alerts Platform\n");
      gotoxy(25,15);
      bill = quantity*price;
      cprintf("Your Product is %c", product);
      gotoxy(25,17);
      cprintf("Your Total Bill is: %d", bill);


     }
}
else{
   gotoxy(25,20);
   cprintf("Wrong Name and ID Number");
   }



getch();
}