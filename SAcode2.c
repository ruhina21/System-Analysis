#include<stdio.h>
struct complex
{
int real;
int imag;

};

struct complex add(struct complex a,struct complex b)
{
    struct complex d;
    d.real=a.real+b.real;
    d.imag=a.imag+b.imag;
    return d;
}
struct complex sub(struct complex a,struct complex b)
{
    struct complex e;
    e.real=a.real-b.real;
    e.imag=a.imag-b.imag;
    return e;
}
struct complex multiply(struct complex a,struct complex b)
{
struct complex f;
f.real=(a.real*b.real)-(a.imag*b.imag);
f.imag=(a.real*b.imag)+(a.imag*b.real);
return f;
}
int main()
{
    struct complex d1={12,2};
      struct complex d2={11,21};
       struct complex d=add(d1,d2);
        struct complex e=sub(d1,d2);
         struct complex f=multiply(d1,d2);
         printf("add: %d+%di\n",d.real,d.imag);
         printf("sub: %d+%di\n",e.real,e.imag);
         printf("mul: %d+%di\n",f.real,f.imag);
}

