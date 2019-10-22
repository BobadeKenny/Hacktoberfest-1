#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) (1/(1+x))

int main()
{
    int i,n=0,j,t,k;
    float ydx,h,x0,xn,xm, oddy=0,yt,y0,eveny=0;
    printf("Enter lower bound of x: ");
    scanf("%f",&x0);

    printf("Enter upper bound of x: ");
    scanf("%f",&xn);
    printf("Enter value of h: ");
    scanf("%f",&h);
    xm=x0;
    for(xm;xm<=xn;xm+=h)
    {
        n+=1;
    }
    float y[n],x[n];
    t = n-1;
    for(i=0;i<=t;i++)
    {
        x[i]=x0;
        x0=x0+h;
    }

      for(k=0;k<=t;k++)
      {


          y[k]=f(x[k]);
          printf("%f\t\t%f\n",x[k],y[k]);

}

    for(j=1;j<=(t-1);j++)
    {
        if(j%2 == 0)
        {
           eveny += y[j];
           }
           else
           {
            oddy += y[j];
           }


    }
    ydx = (h/3)*(y[0]+4*oddy+2*eveny+y[t]);

    printf("\n\n%f",ydx);
    return 0;
}
