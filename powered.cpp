
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int summa(int x, int y)//Stepen chisla
{
    int resultat = 1;
        for (int i = 0; i < y; i++)
        {
            resultat *= x;
        }
        
            return resultat;
        
}
int main()
{
    int a,b;
    printf("chislo: ");
    scanf("%d",&a);
    printf("\nstepen': ");
    scanf("%d", &b);
    printf("%d",summa(a,b));
    return 0;

}
