#include <stdio.h>;

int factorielle(int n)
{
    int factorielle = 1;
    for (int i = 1; i <=n ; i++)
    {
        factorielle=factorielle*i;
    }return factorielle;
    
}

int main(){

    int n=6;
    for (int i=0;i<=n-1;i++)
    {
        for(int c=1;c<(n-i+1);c++)
            printf("  ");
        
        for (int j = 0; j<=i ;j++)
        {
            int K =factorielle(i)/((factorielle(i-j))*factorielle(j));
            printf(" %2d ",K);
        }
        printf("\n");
    }
}