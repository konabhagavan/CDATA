#include<stdio.h>
#include<conio.h>
void main()
{
 int n,s,rev=0;
 clrscr();
 printf("enter value for n:");
 scanf("%d",&n);
 while(n!=0)
  {
  s=n%10;
  n=n/10;
  if(s%2==0)
  {
    even++;
  }
  else
  {
  odd++;
  }
  printf("even count:%d",even);
  printf("odd count:%d",odd);
  getch();
  }
  printf("%d",rev);
  getch();
  }
