#include <stdio.h>

int multtable(int a);

int main()
{
    int a;
    printf("Please enter a number: ");
    scanf("%d", &a);
    multtable(a);
}

int multtable(int a)
{
int i=1;
while (i<=10){
    printf("%d x %d = %d\n", a, i, a*i);
    i++;
}
}
