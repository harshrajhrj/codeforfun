#include <stdio.h>

int main()
{
    int i,j,k,l,row;
    printf("Enter the no. of rows: ");
    scanf("%d",&row);

    for(i=0;i<row;i++) //to rotate the loop no. of times as the no. of rows
    {
        for(j=0;j<row;j++) //to print the values
        {
            if(j<row-i) //left face triangle
            {
                printf("%c ",65+j);
            }
            else
            {
                printf("  ");
            }
        }
        l=0;
        if(i>=2) //right face triangle
        {
            for(;l<i-1;l++)
            {
                printf("  ");
            }
        }
        
        for(k=row-2-l;k>=0;k--)
        {
            printf("%c ",65+k);
        }

        
        printf("\n");
    }

    return 0;
}