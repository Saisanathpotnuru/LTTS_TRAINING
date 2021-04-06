#include<stdio.h>
#include "header.h"


float diff(complex a, complex b){
    complex sub;
    sub.real=a.real-b.real;
    sub.imag=a.imag-b.imag;
    printf("(%f) + (%f)i\n",sub.real,sub.imag);
    return sub.real+sub.imag;

}


float mull(complex a, complex b){
    complex prod;
    prod.real=a.real*b.real - a.imag*b.imag;
    prod.imag=a.real*b.imag+a.imag*b.real;
    printf("(%f) + (%f)i\n",prod.real,prod.imag);
    return prod.real+prod.imag;
}

float sum(complex a, complex b){
    complex sum;
    sum.real=a.real+b.real;
    sum.imag=a.imag+b.imag;
    printf("(%f) + (%f)i\n",sum.real,sum.imag);
    return (sum.real+sum.imag);
}

float divi(complex x,complex y){
    complex div;
    if((y.real==0 && y.imag==0)){return -1;}
    else
    {div.real = (x.real*y.real + x.imag*y.imag)/(y.real*y.real+y.imag*y.imag);
    div.imag = (x.imag*y.real - x.real*y.imag)/(y.real*y.real + y.imag*y.imag);}
     printf("(%f) + (%f)i\n",div.real,div.imag);
    return div.real+div.imag;
}
