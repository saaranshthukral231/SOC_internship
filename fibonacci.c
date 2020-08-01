#include <stdio.h>
int main()
{
int n;	
scanf("%d",&n);
int a=0,b=1,c=0,i=2;

if(n==1)
    printf("%d",a);
else if(n>1)
    printf("%d \n%d",a,b);

while(i<n){
  i=i+1;
  c = a+b;
  a=b;
  b=c;
  printf("\n%d",c);
}
  return 0;
}