#include<stdio.h>
#include<math.h>

struct run
{
    int ar[5];
};

int main()
{
    //int pl1[5]={48,50,39,46,37};
    //int pl2[5]={50,52,60,55,53};
    
    float m1,m2,a=0,b=0;
    int i;
    struct run pl1,pl2;
    
    for(i=0; i<5;i++)
    {
        printf("enter player 1's run: ");
        scanf("%d",&pl1.ar[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("enter player 2's run: ");
        scanf("%d",&pl2.ar[i]);
    }
    for(i=0;i<5;i++)
    {
        a+= pl1.ar[i];
        b+= pl2.ar[i];
    }
    m1= a/5;
    m2= b/5;
    a=0,b=0;
    
    for(i=0;i<5;i++)
    {
        a+=(pl1.ar[i]-m1)*(pl1.ar[i]-m1);
        
        b+= (pl2.ar[i]-m2)*(pl2.ar[i]-m2);
    }
    
    float sd1,sd2;
    
    sd1= sqrt(a/5), sd2= sqrt(b/5);
    
    //printf("%f %f\n",sd1,sd2);
    
    if(sd1<sd2) printf("player 1 is more consistent");
    else printf("player 2 is more consistent");
return 0;
}