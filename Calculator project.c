#include<stdio.h>
#include<math.h>
#define Pi 3.1416
void rec(float a[50][50], float b[50][50]);
void fahrtocelsius();
void celsiustofahr();
int gcd(int num1, int num2);
int fac(int num);
float a[50][50], b[50][50], c[50][50];
static int p, q, p1, q1;
float    g=0.00, f;
static int i=0, j=0, x2=0,  y4=0, x1=0, y3=0;
int i1=0;
char ch[100];
static int count=0;
struct calculation c1;
struct calculation m1;
struct calculation d1;
struct calculation s1;
struct calculation b1;
struct calculation l1;
struct calculation f1;
struct calculation t1;
 int ye, m3, d3, gcd1, lcm1, fact1;
float c3[50][50], dete ;
 float re, re1, res, cel, far;
 char string[50];
struct calculation
{
    int ye, m3, d3, gcd1, lcm1, fact1;
    float c3[50][50], dete;
    float re, re1, res, cel, far;
} c1, m1,d1,s1,b1 ;
float rad(float angle) // Calculating Radian
{
    float radian;
    radian=((Pi*angle)/180);
    return radian;
}
char age() //Calculating Age
{
    FILE *file1;
    file1=fopen("test1.txt","a");
    int d1, d2, m1, m2, y1, y2, d, m, y;
    printf("Enter birth day: ");
    scanf("%d",&d1);
    printf("Enter birth month: ");
    scanf("%d",&m1);
    printf("Enter birth year: ");
    scanf("%d",&y1);
    printf("Enter current day: ");
    scanf("%d",&d2);
    printf("Enter current month: ");
    scanf("%d",&m2);
    printf("Enter current year: ");
    scanf("%d",&y2);
    printf("\n");
    if(m1<=12 && m2<=12)
    {
         if((y2%400==0 || y2%100!=0)&& (y2%4==0))
    {

        if(m2==1 || m2==2 || m2==4 || m2==6 || m2==8 || m2==9 || m2==11 )
        {

           if((d1>31 || d2>31) && (m1==1 || m2==1))
           {
               printf("Try again!\n");
           }
           else if((d1>30 || d2>30) && (m1==4 || m1==6 || m1==8 || m1==9 || m1==11|| m2==4 || m2==6 || m2==8 || m2==9 || m2==11))
           {
               printf("Try again!\n");
           }
           else if((d1>29 || d2>29) && (m1==2 || m2==2))
           {
               printf("Try again!\n");
           }
            else if(d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2>m1)
            {
                d= (d2+31)-d1;
                m= (m2-1)-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2<m1)
            {
                d= (d2+31)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2==m1)
            {
                d= d2-d1;
                m= m2-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2==m1)
            {
                d= (d2+31)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d1==d2 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2<d1 && m2>m1)
            {
                d=(d2+31)-d1;
                m=(m2-1)-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d1==d2 && m1==m2)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }

        }
        else if(m2==3)
        {
             if((d1>31 || d2>31) && (m1==3 || m2==3))
           {
               printf("Try again!\n");
           }
           else if(d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2>m1)
            {
                d= (d2+29)-d1;
                m= (m2-1)-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2<m1)
            {
                d= (d2+29)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2==m1)
            {
                d= d2-d1;
                m= m2-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2==m1)
            {
                d= (d2+29)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
              else if(y2==y1 && d1==d2 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2<d1 && m2>m1)
            {
                d=(d2+29)-d1;
                m=(m2-1)-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
             else if(d1==d2 && m1==m2)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
        }
        else if(m2==5 || m2==7 || m2==10 || m2==12)
        {
            if((d1>31 || d2>31) && (m1==5 || m1==7 || m1==10 || m1==12 || m2==5|| m2==7 || m2==10 || m2==12 ))
           {
               printf("Try again!\n");
           }
           else if(d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2>m1)
            {
                d= (d2+30)-d1;
                m= (m2-1)-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2<m1)
            {
                d= (d2+30)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2==m1)
            {
                d= d2-d1;
                m= m2-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2==m1)
            {
                d= (d2+30)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
              else if(y2==y1 && d1==d2 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2<d1 && m2>m1)
            {
                d=(d2+30)-d1;
                m=(m2-1)-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
             else if(d1==d2 && m1==m2)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
        }
    }
    else
    {
        if(m2==1 || m2==2 || m2==4 || m2==6 || m2==8 || m2==9 || m2==11 )
        {
              if((d1>31 || d2>31) && (m1==1 || m2==1))
           {
               printf("Try again!\n");
           }
            else if((d1>28 || d2>28) && (m1==2 || m2==2))
           {
               printf("Try again!\n");
           }
           else if((d1>30 || d2>30) && (m1==4 || m1==6 || m1==8 || m1==9 || m1==11|| m2==4 || m2==6 || m2==8 || m2==9 || m2==11))
           {
               printf("Try again!\n");
           }
           else if(d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2>m1)
            {
                d= (d2+31)-d1;
                m= (m2-1)-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
           else if(d2==d1 && m2<m1)
           {
               d=d2-d1;
               m=(m2+12)-m1;
               y=(y2-1)-y1;
               printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
           }
            else if(d2>d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2<m1)
            {
                d= (d2+31)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2==m1)
            {
                d= d2-d1;
                m= m2-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2==m1)
            {
                d= (d2+31)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
              else if(y2==y1 && d1==d2 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2<d1 && m2>m1)
            {
                d=(d2+31)-d1;
                m=(m2-1)-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
             else if(d1==d2 && m1==m2)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
        }
        else if(m2==3)
        {
            if((d1>31 || d2>31) && (m1==2 || m2==2))
           {
               printf("Try again!\n");
           }
            else if(d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2>m1)
            {
                d= (d2+28)-d1;
                m= (m2-1)-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2<m1)
            {
                d= (d2+28)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2==m1)
            {
                d= d2-d1;
                m= m2-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2==m1)
            {
                d= (d2+28)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
              else if(y2==y1 && d1==d2 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2<d1 && m2>m1)
            {
                d=(d2+28)-d1;
                m=(m2-1)-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
              else if(y2==y1 && d1==d2 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2<d1 && m2>m1)
            {
                d=(d2+28)-d1;
                m=(m2-1)-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
             else if(d1==d2 && m1==m2)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
        }
        else if(m2==5 || m2==7 || m2==10 || m2==12)
        {
             if((d1>31 || d2>31) && (m1==5 || m1==7 || m1==10 || m1==12 || m2==5|| m2==7 || m2==10 || m2==12 ))
           {
               printf("Try again!\n");
           }
           else if(d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2>m1)
            {
                d= (d2+30)-d1;
                m= (m2-1)-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2==d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2<m1)
            {
                d=d2-d1;
                m=(m2+12)-m1;
                y=(y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2<m1)
            {
                d= (d2+30)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2>d1 && m2==m1)
            {
                d= d2-d1;
                m= m2-m1;
                y= y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(d2<d1 && m2==m1)
            {
                d= (d2+30)-d1;
                m= (m2-1+12)-m1;
                y= (y2-1)-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
              else if(y2==y1 && d1==d2 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2>d1 && m2>m1)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
            else if(y2==y1 && d2<d1 && m2>m1)
            {
                d=(d2+30)-d1;
                m=(m2-1)-m1;
                y=y2-y1;
                 printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
             else if(d1==d2 && m1==m2)
            {
                d=d2-d1;
                m=m2-m1;
                y=y2-y1;
                printf("%d Years\n",y);
                printf("%d Months\n",m);
                printf("%d Days\n",d);
            }
        }
    }
    c1.ye=y;
    c1.m3=m;
    c1.d3=d;
    fprintf(file1, "Year =%d Month =%d Day=%d\n", y, m, d);
    fclose(file1);
}
else
    printf("Try again!");
    }

char mat()  // Calculating Matrix
{
    FILE *file1;
    file1=fopen("test1.txt","a");
    int  x;
    printf("1) Matrix Addition 2) Matrix Subtraction 3) Matrix Multiple: ");
    scanf("%d", &x);
    if(x==1)
    {
        printf("Here both Matrix rows and columns will be equal\n");
        printf("Enter first matrix rows and columns: ");
        scanf("%d %d",&p, &q);
        printf("Enter second Matrix rows and columns: ");
        scanf("%d %d",&p1, &q1);
         printf("\n");
        if(p==q &&p1==q1 && p==p1 && q==q1)
        {
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    printf("A[%d][%d] = ",i,j);
                    scanf("%f",&a[i][j]);
                }
            }
            printf("\n");
            for(int i=0; i<p1; i++)
            {
                for(int j=0; j<q1; j++)
                {
                    printf("B[%d][%d] = ",i,j);
                    scanf("%f",&b[i][j]);
                }
            }
            for(int i=0, h=0, k=0; i<p; i++, h++, k++)
            {
                for(int j=0, h1=0, k1=0; j<q; j++, h1++, k1++)
                {
                    c[i][j] = a[h][h1] + b[k][k1];
                }
            }
             printf("\n");
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    printf("C[%d][%d] = %.3f  ",i, j, c[i][j]);
                }
                printf("\n");
            }
             for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    m1.c3[i][j]=c[i][j];
                }
                printf("\n");
            }
             for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    fprintf(file1, "C[%d][%d] = %f  \n",i,j,c[i][j]);
                }
                printf("\n");
            }
fclose(file1);
        }
        else
            printf("Try Again!");
    }
    else if(x==2)
    {
        printf("Here both Matrix rows and columns will be equal\n");
        printf("Enter first matrix rows and columns: ");
        scanf("%d %d",&p, &q);
        printf("Enter second Matrix rows and columns: ");
        scanf("%d %d",&p1, &q1);
         printf("\n");
        if(p==q &&p1==q1 && p==p1 && q==q1)
        {
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    printf("A[%d][%d] = ",i,j);
                    scanf("%f",&a[i][j]);
                }
            }
             printf("\n");
            for(int i=0; i<p1; i++)
            {
                for(int j=0; j<q1; j++)
                {
                    printf("B[%d][%d] = ",i,j);
                    scanf("%f",&b[i][j]);
                }
            }
             printf("\n");
            for(int i=0, h=0, k=0; i<p; i++, h++, k++)
            {
                for(int j=0, h1=0, k1=0; j<q; j++, h1++, k1++)
                {
                    c[i][j] = a[h][h1] - b[k][k1];

                }
            }
             printf("\n");
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    printf("C[%d][%d] = %.3f  ",i, j, c[i][j]);
                }
                printf("\n");
            }
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    m1.c3[i][j]=c[i][j];
                }
                printf("\n");
            }
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    fprintf(file1, "C[%d][%d] = %f  \n",i,j,c[i][j]);
                }
                printf("\n");
            }
            fclose(file1);
        }
        else
            printf("Try Again!");
    }
    else if(x==3)
    {
        printf("Here First Matrix column and Second Matrix rows will be equal\n");
        printf("Enter first matrix rows and columns: ");
        scanf("%d %d",&p, &q);
        printf("Enter second Matrix rows and columns: ");
        scanf("%d %d",&p1, &q1);
         printf("\n");
        if(q==p1)
        {
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    printf("A[%d][%d] = ",i,j);
                    scanf("%f",&a[i][j]);
                }
            }
             printf("\n");
            for(int i=0; i<p1; i++)
            {
                for(int j=0; j<q1; j++)
                {
                    printf("B[%d][%d] = ",i,j);
                    scanf("%f",&b[i][j]);
                }
            }
             printf("\n");
            rec(a, b);
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q1; j++)
                {
                    printf("C[%d][%d] = %.3f  ",i,j,c[i][j]);

                }
                printf("\n");
            }
             for(int i=0; i<p; i++)
            {
                for(int j=0; j<q1; j++)
                {
                    m1.c3[i][j]=c[i][j];
                }
                printf("\n");
            }
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q1; j++)
                {
                    fprintf(file1, "C[%d][%d] = %f  \n",i,j,c[i][j]);
                }
                printf("\n");
            }
fclose(file1);

        }
        else
            printf("Try again! \n");
    }

}
void rec(float a[50][50], float b[50][50]) // Recursive Function
{

    if(i<p)
    {
        if(j<q1)
        {
            if(x1<q)
            {
                f= a[x2][x1] * b[y3][y4];
                g= g+f;
                x1++;
                y3++;
                rec(a,b); // Calling Recursive Function
            }
            x1=0;
            y3=0;
            c[i][j]=g;
            g=0;
            j++;
            y4++;
            rec(a,b);  // Calling Recursive Function
        }
        j=0;
        y4=0;
        x2++;
        i++;
        rec(a,b);  // Calling Recursive Function

    }
}
char det() //Calculating Determinant
{
    FILE *file1;
    file1=fopen("test1.txt","a");
    float a[50][50],  result;
    int p, q;
    printf("Rows and Columns will be equal\n");
    printf("Rows and Columns must be 3 or 2\n");
    printf("Enter row: ");
    scanf("%d",&p);
    printf("Enter column: ");
    scanf("%d",&q);
     printf("\n");
    if(p==3 && q==3)
    {
        for(int i=0; i<p; i++)
        {
            for(int j=0; j<q; j++)
            {
                printf("D[%d][%d] =  ",i,j);
                scanf("%f",&a[i][j]);
            }
        }
         printf("\n");
        result= (a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[2][0] * a[1][2]) + (a[0][2] * a[1][0] * a[2][1]) - (a[2][1] * a[1][2] * a[0][0]) - (a[0][1] * a[1][0] * a[2][2]) * (a[0][2] * a[2][0] * a[1][1]);
        d1.dete=result;
        printf("Determinant value is: %.3f \n",result);
    }
    else if(p==2 && q==2)
    {
        for(int i=0; i<p; i++)
        {
            for(int j=0; j<q; j++)
            {
                printf("D[%d][%d] =  ",i,j);
                scanf("%f",&a[i][j]);
            }
        }
         printf("\n");
        result= (a[0][0] * a[1][1]) - (a[1][0] * a[0][1]);
        d1.dete=result;
        printf("Determinant value is: %.3f\n",result);
    }
    else
    {
        printf("Try again!\n");
    }
    fprintf(file1, "%f\n", result);
    fclose(file1);
}
char sci() // Scientific Calculation
{
     FILE *file1;
    file1= fopen("test1.txt","a");
    float  result=0, h=0,j=0,k=0,j1=0,p1=0,q1=0,t1=0,result1=0,angle;
    int y;
    printf("Enter any: 1(sin) 2(cos) 3(tan) 4(Power) 5(square root) 6(log) 7(Equation): ");
    scanf("%d",&y);
    printf("\n");
    switch(y)
    {
    case (1):
    {
        printf("Input angle:");
        scanf("%f",&angle);
        float h = rad(angle);   // Calling rad function
        result = sin(h);
        s1.re=result;
        printf("sin(%.2f)= %f\n",angle,result);
        break;
    }
    case (2):
    {
        printf("Input angle:");
        scanf("%f",&angle);
        float h = rad(angle);  // Calling rad function
        result = cos(h);
        s1.re=result;
        printf("cos(%.2f)= %f\n",angle,result);
        break;
    }
    case (3):
    {
        printf("Input angle:");
        scanf("%f",&angle);
        if(angle==90)
        {
            printf("Undefined! \n");
        }
        else if(angle!=90)
        {
            float  h = rad(angle); // Calling rad function
            result = tan(h);
            s1.re=result;
            printf("tan(%.2f)= %f\n",angle,result);
        }

        break;
    }

    case (4):
    {
        printf("Enter base & power:");
        scanf("%f %f",&j,&k);
        result = pow(j,k);
        s1.re=result;
        printf("%.2f^%.2f= %.2f\n",j,k,result);
        break;
    }
    case (5):
    {
        printf("Enter Base:");
        scanf("%f",&j1);
        result = sqrt(j1);
        s1.re=result;
        printf("Square root of %.2f= (+,-)%.2f\n",j1,result);
        break;
    }
    case (6):
    {
        printf("Input Number:");
        scanf("%f",&j1);
        result = log (j1);
        s1.re=result;
        printf("log(%.2f)= %.2f\n",j1,result);
        break;
    }
    case (7):
    {
        printf("Input value of p1, q1, t1:");
        scanf("%f %f %f",&p1,&q1,&t1);
        result = (-q1+sqrt((q1*q1)-(4*p1*t1)));
        result =(result/(p1*2));
        s1.re=result;
        result1 = (-q1-sqrt((q1*q1)-(4*p1*t1)));
        result1= (result1/(p1*2));
        s1.re1=result1;
        printf("Value of x1= %.2f, Value of x2= %.2f\n",result,result1);
        break;
    }
    default:
        printf("Invalid Operation! \n");
        break;
    }
    fprintf(file1,"%f, %f\n", result, result1);
    fclose(file1);
}
char bas() // Basic Calculation
{
    FILE *file1;
    file1= fopen("test1.txt","a");
    float p=0,q=0, result=0, arr[50];
    int x, i=0;

            printf("Select operation: 1.(+), 2(-), 3(*), 4(/), 5(avg):");
            scanf("%d",&x);
            switch(x)
            {
            case(1):
            {
                printf("Enter numbers: ");
                printf("\n");
               for(i=0; i<50; i++)
    {
        scanf("%f",&arr[i]);
        scanf("%c",&ch[i]);
        if(ch[i]=='=')
        {
            break;
        }
        else
        {
            result=result+arr[i];
        }
    }
        b1.res=result;
        printf("%f\n",result);
                break;
            }
            case(2):
            {
                 printf("Enter two numbers:");
            scanf("%f %f",&p, &q);
                result=p-q;
                b1.res=result;
                printf("%f\n",result);
                break;
            }
            case(3):
            {
                result=1;
                printf("Enter numbers: ");
                printf("\n");
                 for(i=0; i<50; i++)
    {
        scanf("%f",&arr[i]);
        scanf("%c",&ch[i]);
        if(ch[i]=='=')
        {
            break;
        }
        else
        {
            result=result*arr[i];
        }
    }
        b1.res=result;
        printf("%f\n",result);
                break;
            }
            case(4):
            {
                 printf("Enter two numbers:");
            scanf("%f %f",&p, &q);
                result = p / q;
                b1.res=result;
                printf("%f\n",result);
                break;
            }
            case(5):
            {
                 printf("Enter numbers: ");
                printf("\n");
               for(i=0; i<50; i++)
    {
        scanf("%f",&arr[i]);
        scanf("%c",&ch[i]);
        if(ch[i]=='=')
        {
            break;
        }
        else
        {
            result=result+arr[i];
        }
    }
            result=result/i;
            b1.res=result;
            printf("%f\n",result);
                break;
            }
            default:
                printf("Invalid Operation! \n");
                break;
            }
            fprintf(file1, "%f\n", result);
            fclose(file1);
}
char lcm() // LCM and GCD
{
     FILE *file1;
    file1= fopen("test1.txt","a");
     int num1, num2, t, l;
    printf("Enter Biggest num1: ");
    scanf("%d",&num1);
    printf("Enter Smallest num2: ");
    scanf("%d",&num2);
    t=gcd(num1, num2);
    l1.gcd1=t;
    printf("GCD=%d\n",t);
    l=(num1 * num2)/t;
    l1.lcm1=l;
    printf("LCM=%d\n",l);
    fprintf(file1, "GCD = %d  LCM = %d\n", t, l);
            fclose(file1);
}
int gcd(int num1, int num2)
{
    int rem=0;
    if(num2!=0)
    {
        rem = num1 % num2;
        num1=num2;
        num2=rem;
        gcd(num2, rem); // Calling Recursive Function
    }
    return num2;

}
char fact() // Factorial Calculation
{
    FILE *file1;
    file1= fopen("test1.txt","a");
     int num, r;
    printf("Enter number: ");
    scanf("%d",&num);
    r=fac(num);
    f1.fact1=r;
    printf("Factorial of %d = %d\n",num,r);
     fprintf(file1, "Factorial = %d\n", r);
            fclose(file1);
}
int fac(int num)
{
    static int t=1, p;
    if(num!=0)
    {
        t=t*num;
        p=num-1;
        fac(p); // Calling Recursive Function
    }
    return t;
}
char temp() // Temperature conversion
{
    int c;
    printf("Temperature Conversion Table\n");
    printf("1 - Fahrenheit to Celsius Conversion\n");
    printf("2 - Celsius to Fahrenheit Conversion\n");
    printf("- Enter your Choice\n");
    scanf("%d",&c);

    if (c == 1)
        fahrtocelsius();
    else if (c == 2)
        celsiustofahr();
    else
        printf("Invalid Choice\n");
    return 0;
}
void fahrtocelsius()
{
     FILE *file1;
    file1= fopen("test1.txt","a");
    float celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    t1.cel=celsius;
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
     fprintf(file1, "%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
            fclose(file1);
}
void celsiustofahr()
{
     FILE *file1;
    file1= fopen("test1.txt","a");
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    t1.far= fahrenheit;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    fprintf(file1, "%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
            fclose(file1);
}
void result() // Show Result
{
    for(int i=0; i<=i1; i++)
    {
        if(string[i]=='c')
        {
            printf("Years= %d\n",c1.ye);
        printf("Months= %d\n",c1.m3);
        printf("Days= %d\n",c1.d3);
        }
        else if(string[i]=='d')
        {
            for(int i=0; i<p; i++)
            {
                for(int j=0; j<q; j++)
                {
                    printf("Matrix result=%.3f  ",m1.c3[i][j]);
                }
                printf("\n");
            }
        }
        else if(string[i]=='e')
        {
            printf("Determinant result=%.3f\n",d1.dete);
        }
        else if(string[i]=='b')
        {
            printf("Scientific Calculatio result=%.3f   Scientific Calculatio result=%.3f\n",s1.re, s1.re1);
        }
        else if(string[i]=='a')
        {
            printf("Basic Calculation result=%.3f\n",b1.res);
        }
        else if(string[i]=='f')
        {
            printf("LCM=%d\n",l1.lcm1);
            printf("GCD=%d\n",l1.gcd1);
        }
        else if(string[i]=='g')
        {
            printf("Factorial result=%d\n",f1.fact1);
        }
        else if(string[i]=='h')
        {
            printf("Temperature Conversition\n");
            printf("Celcious=%.3f\n",t1.cel);
            printf("Fahrenheit=%.3f\n",t1.far);
        }
    }
}
int main()
{
    char ch;
    printf("\t\t\t\t|-----------------------------------------------|\n");
    printf("\t\t\t\t|\t\tWelcome to Our Project\t\t|\n");
    printf("\t\t\t\t|-----------------------------------------------|\n");
    printf("\t\t\t\t|-----------------------------------------------|\n");
    printf("\t\t\t\t|\t\tCreated By                      |\n\n");
    printf("\t\t\t\t|\t1.Israt Jahan(203-15-3858)              |\n\n");
    printf("\t\t\t\t|\t2.Nayeemul Hayder Nayeem(203-15-3861)   |\n\n");
    printf("\t\t\t\t|\t3.Sakir Hossain Faruque(203-15-3862)    |\n\n");
    printf("\t\t\t\t|\t4.Nusrat Faruqi(203-15-3885)            |\n\n");
    printf("\t\t\t\t|-----------------------------------------------|\n\n");
    while(1)
    {
        printf("\n");
        printf("\t\t\t\t|-----------------------------------------------|\n");
        printf("\t\t\t\t| Select any:                                   |\n");
        printf("\t\t\t\t| a) Basic Calculation                          |\n");
        printf("\t\t\t\t| b) Scientific Calculation                     |\n");
        printf("\t\t\t\t| c) Age Calculation                            |\n");
        printf("\t\t\t\t| d) Matrix Calculation                         |\n");
        printf("\t\t\t\t| e) Determinant Calculation                    |\n");
        printf("\t\t\t\t| f) LCM and GCD                                |\n");
        printf("\t\t\t\t| g) Factorial                                  |\n");
        printf("\t\t\t\t| h) Temperature Conversion                     |\n");
        printf("\t\t\t\t| i) Show Result                                |\n");
         printf("\t\t\t\t| j) Exit                                       |\n");
         printf("\t\t\t\t|-----------------------------------------------|\n");
        scanf("%c",&ch);
        printf("\n");
        if(ch=='a')  //Basic Calculation
        {
           char a;
           string[i1]='a';
           i1++;
           bas();
        }
        else if(ch=='b') // Scientific Calculation
        {
            char b;
            string[i1]='b';
            i1++;
            sci();
        }
        else if(ch=='c') // Age Calculation
        {
            char c;
            string[i1]='c';
            i1++;
            age();
        }
        else if(ch=='d') // Matrix Calculation
        {
            char d;
            string[i1]='d';
            i1++;
            mat();

        }
        else if(ch=='e') // Determinant Calculation
        {
            char e;
            string[i1]='e';
            i1++;
            det();
        }
        else if(ch=='f') // LCM & GCD
        {
            char f;
            string[i1]='f';
            i1++;
            lcm();
        }
        else if(ch=='g') // Factorial
        {
            char g;
            string[i1]='g';
            i1++;
            fact();
        }
        else if(ch=='h') // Temperature Convertion
        {
           char h;
           string[i1]='h';
           i1++;
           temp();
        }
        else if(ch=='i')
        {
            char i;
            result();
        }
        else if(ch=='j') // Exit
        {
            break;
        }
        else
        {
            printf("Invalid Charecter! \n");
        }
        getchar ();
    }
    return 0;
}



