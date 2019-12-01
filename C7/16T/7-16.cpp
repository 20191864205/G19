#include <stdio.h>
void zhuan(int x);             
int main()
{
    int i;
    scanf("%x", &i);           
    zhuan(i);                   
    return 0;
}

void zhuan(int x)
{
    printf("%d\n", x);
}

