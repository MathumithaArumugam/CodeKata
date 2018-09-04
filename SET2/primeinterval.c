#include<stdio.h>

#include<math.h>

int main()

{

int a,b,i,j,f;

scanf("%d%d",&a,&b);

if(a<2)

{

a=2;

printf("2 ");

}

if(a%2==0)

a++;

for(i=a;i<b;i=i+2)

{

f=0;

for(j=3;j<=(int)sqrt(i);j=j+2)

{

if(i%j==0)

f=1;

}

if(f==0)

printf("%d ",i);

}

return 1;

}
