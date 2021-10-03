#include<stdio.h>
#include<string.h>
#include<conio.h>
struct Marks
{
int a;
float b;
}

int main()
{
struct Marks s1;
s1.a=20;
s1.b=20.3;
printf("integer value:%d",s1.a);
printf("float valu %d",s1.b);
return 0;
}