#include <stdio.h>

int main()
{
    int rows;
    printf("enter the no of rows");
    scanf("%d",&rows);
    //for rows
    for (int i=0;i<=rows;i++)
    {
        // for columns
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        //Ending line after each row
        printf("\n");
    }
    

    return 0;
}
