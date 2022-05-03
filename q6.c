#codechef

#carchoice

#include <stdio.h>

int main()
{
   int t,a,b,c,d,r,s;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d %d %d %d",&a,&b,&c,&d);
       r=a*d;
       s=b*c;;
       if(r>s)
       printf("-1\n");
       else if(s==r)
       printf("0\n");
       else
       printf("1\n");
   }
    return 0;
}
