#include<stdio.h>
int main()
{
    int n;
    for(int row='E'; row>='A'; row--)
    {
        for(int col='A'; col<='E'; col++)
        {if(col<row)
            {
            printf("%c ",row);
            }
        else{
            printf("%c ",col);
        }
        }
        printf("\n");
    }
    //mirror image of the above pattern
    for(int row='A'; row<='E'; row++)
    {
        for(int col='A'; col<='E'; col++)
        {if(col<row)
            {
            printf("%c ",row);
            }
        else{
            printf("%c ",col);
        }
        }
        printf("\n");
    }
    
    return 0;
}