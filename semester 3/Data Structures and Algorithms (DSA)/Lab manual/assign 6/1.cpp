#include <stdio.h>
void fun(int *p)
{
    int **p1;
    p1 = &p;
    **p1 = **p1 + 1;
}
int main()
{
    int a = 10;
    fun(&a);
    printf("%d", a);
}