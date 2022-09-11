#include<stdio.h>
int main()
{
int n;
printf("enter 1 for adi\n");
printf("enter 2 for ayu\n");
printf("enter 3 for abhi\n");
printf("enter the no. of the client");
scanf("%d",&n);


switch(n)
{
case 1:printf("exercise: 4 push-ups,5crunches,10 sit ups\n");
printf("diet plan : 2 egg ,3 candy,vegetables,fruits");
break;

case 2:
printf("exercise: 4 breach press ,cable fly,pushups\n");
printf("diet: oats,potien shake ,banana, eggs");
break;
case 3:
printf("exercise: sit ups ,12 km running,10 squarts\n");
printf("diet: egg,no sugar,green vege,fruits");
break;
}
return 0;
}
