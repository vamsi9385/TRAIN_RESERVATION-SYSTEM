#include <math.h>
#include <stdio.h>
int main()
{
int ta,tc,choice;
int r;
int c,C;
printf("########################################################################################################################\n");
printf(" \t\t\t\tWELCOME\n");
printf(" \t\t\tTrain Reservation System\n");
printf(" \t\t\t\t(NOTE: These rates are approved by IRCTC)\n");
printf(" \t\t\tSTATION TO STATION CHILDREN ADULT\n");
printf(" \t\t\t(Per Person) (Per Person)\n");
printf(" \t\t\tChennai-Banglore(route 1) Rs.100 Rs.200\n");
printf(" \t\t\tChennai-Vizag (route 2) Rs.90 Rs.150\n");
printf(" \t\t\tChennai-Hyderabad(route 3) Rs.120 Rs.300\n");
printf(" \t\t\tBanglore-Chennai(route 4) Rs.100 Rs.200\n");
printf(" \t\t\tVizag-Chennai (route 5) Rs.90 Rs.150\n");
printf(" \t\t\tHyderabad-Chennai(route 6) Rs.120 Rs.300\n");
printf("########################################################################################################################\n\n");
for(int i=1;i<=i+1;i++)
{
printf("\nSelect Your Choice\n");
printf("1.Adult+Children");
printf("\n2.Adult");
printf("\nyour choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter Route Number ");
scanf("%d",&r);
printf("\nHow many seats you want for adult : ");
scanf("%d",&ta);
printf("\nHow many seats for children :");
scanf("%d",&tc);
if(r==1)
{
c=tc*100;
C=ta*200;
printf("The Bill To Be paid is");
printf("\nCost for %d Children=RS.%d",tc,c);
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =%d",c+C);
break;
}
else if(r==2)
{
c=tc*90;
C=ta*150;
printf("The Bill To Be paid is");
printf("\nCost for %d Children=RS.%d",tc,c);
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =%d",c+C);
break;
}
else if(r==3)
{
c=tc*120;
C=ta*300;
printf("The Bill To Be paid is");
printf("\nCost for %d Children=RS.%d",tc,c);
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =%d",c+C);
break;
}
else if(r==4)
{
c=tc*100;
C=ta*200;
printf("The Bill To Be paid is");
printf("\nCost for %d Children=RS.%d",tc,c);
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =%d",c+C);
break;
}
else if(r==5)
{
c=tc*90;
C=ta*150;
printf("The Bill To Be paid is");
printf("\nCost for %d Children=RS.%d",tc,c);
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =%d",c+C);
break;
}
else if(r==6)
{
c=tc*120;
C=ta*300;
printf("The Bill To Be paid is");
printf("\nCost for %d Children=RS.%d",tc,c);
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =%d",c+C);
break;
}
case 2:
printf("Enter Route Number ");
scanf("%d",&r);
printf("\nHow many seats you want for adult : ");
scanf("%d",&ta);
if(r==1)
{
C=ta*200;
printf("The Bill To Be paid is");
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =Rs.%d",C);
break;
}
else if(r==2)
{
C=ta*150;
printf("The Bill To Be paid is");
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =%d",C);
break;
}
else if(r==3)
{
c=tc*120;
C=ta*500;
printf("The Bill To Be paid is");
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =%d",C);
break;
}
if(r==4)
{
C=ta*200;
printf("The Bill To Be paid is");
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =Rs.%d",C);
break;
}
if(r==5)
{
C=ta*150;
printf("The Bill To Be paid is");
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =Rs.%d",C);
break;
}
if(r==6)
{
C=ta*300;
printf("The Bill To Be paid is");
printf("\nCost for %d Adult =Rs.%d",ta,C);
printf("\nTotal Cost =Rs.%d",C);
break;
}
return 0;}
}
}
