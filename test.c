#include<stdio.h>
typedef int f1(int);
typedef int f2(double, int );
 
int fun1(int x)
{
    printf("x=%d\n", x );
    return x+1 ;
}
int fun2( double d, int x )
{
    printf("d=%lf, x=%d\n", d, x );
    return x*2;
}
int main()
{
void * queue[2];
printf("queue is %d %d\n", &queue, queue);
    f1 *pf;
    int x;
    pf=fun1;
    x=pf( 10 );
    printf("x1=%d\n", x );
    pf=(f1 *)fun2;
x=(*pf)( 10 );
    //x=((f2 *)pf)( 10,20 );
    printf("x1=%d\n", x );
    return 0;
}
