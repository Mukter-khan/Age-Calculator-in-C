#include<stdio.h>
int age(int d1,int m1, int y1,int d2,int m2,int y2);
int main()
{
    int d1,m1,y1,d2,m2,y2;

    printf("=================================================\n");
    printf("=                 Age Calculator                =\n");
    printf("=================================================\n");

    printf(" Enter Your Birthday Day: ");
    scanf("%d",&d1);
    printf(" Enter Your Birthday Month: ");
    scanf("%d",&m1);
    printf(" Enter Your Birthday Year: ");
    scanf("%d",&y1);
    printf("\n Enter Your Current Day: ");
    scanf("%d",&d2);
    printf(" Enter Your Current Month: ");
    scanf("%d",&m2);
    printf(" Enter Your Current Year: ");
    scanf("%d",&y2);

    age(d1,m1,y1,d2,m2,y2);


    return 0;
}
int age(int d1,int m1, int y1,int d2,int m2,int y2)
{
    int r1,r2,r3;
  if((d1>31||d1<1)&&(d2>31||d2<1)&&(m1<1||m1>12)&&(m1<2||m1>12)&&(y1<0&&y2<0))
    {
        printf(" Wrong input, Try Again");
    }
    else
    {
        r3=y2-y1;
        if(d2>=d1)
        {
            r1=d2-d1;
        }
        else
        {
            m2=m2-1;
            d2=d2+30;
            r1=d2-d1;
        }
        if(m2>=m1)

        {
            r2=m2-m1;
        }
        else
        {
            y2=y2-1;
            m2=m2+12;
            r2=m2-m1;
        }
    }
     printf("\nYour Age is %d Year %d month %d Day", r3, r2,r1);
}
