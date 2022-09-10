#include <stdio.h>

int main()
{
    int num,i;
    printf("enter the no you want multiplication table of\n");
    scanf("%d",&num);
    
    printf("multiplication table of%d is as follow\n",num);
    for(i=1;i<=10;i++)
    {
    printf("%d x %d = %d\n",num,i,num*i);
    }

    return 0;
}
