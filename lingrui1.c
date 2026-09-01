#include <stdio.h>
#include <string.h>
void add1(int *p);
int main(){
/*
1  printf("hello kane\n2026.8.29\n");

2    int a,b,t;
    scanf("%d %d",&a,&b);
    if(a>b)
    t=a;
    else
    t=b;
    printf("%d\n",t);

3    int c;
    scanf("%d",&c);
    if(c>0){printf("c>0");}
    else if (c<0){printf("c<0");}
    else {printf("c=0");}

4    int n,m;
    m=1;
    scanf("%d",&n);
    for(;n>0;n--)
    {
      m*=n;
    }
    printf("%d",m);
5    int d,max,i;
    scanf("%d",&d);
    i=d;
    int x[d];
    while(d>0)
    {
      d--;
      printf("现在请输入数字进入x[%d]\n",d);
      scanf("%d",&x[d]);
    }
    max=x[0];
    for(;i>0;i--){
      if(x[i]>max)
      max=x[i];
    }
    printf("%d",max);
   
6   char a[15];
    scanf("%s",a);
    printf("%llu",strlen(a));

*/    
    int a=5;
    add1(&a);
    printf("%d",a);
    return 0;
    }
void add1(int *p)
{
  *p++;
}