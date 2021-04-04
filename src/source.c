#include<stdio.h>
#include "header.h"
#include "stdlib.h"

error sum(complex* a,complex* b,complex* csum)
{
    if(NULL==a || NULL == b)
        return ERROR_NULL_PTR;
    else
    {
    csum->real=a->real+b->real;
    csum->img=a->img+b->img;
    printf("%f+%fi\n",csum->real,csum->img);
    return SUCCESS;
    }
}
error diff(complex* a,complex* b,complex* cdiff)
{
    if(NULL==a || NULL == b)
        return ERROR_NULL_PTR;
    else
    {
    cdiff->real=a->real-b->real;
    cdiff->img=a->img-b->img;
    printf("%f+%fi\n",cdiff->real,cdiff->img);
    return SUCCESS;
    }
}
error mul(complex* a,complex* b,complex* cmul)
{
    if(NULL==a || NULL == b)
        return ERROR_NULL_PTR;
    else
    {
    cmul->real=a->real*b->real-a->img*b->img;
    cmul->img=a->img*b->real+a->real*b->img;
    printf("%f+%fi\n",cmul->real,cmul->img);
    return SUCCESS;
    }
}
error divtest(complex* a,complex* b,complex* cdiv)
{
    if(b->real==0 || b->img==0)
        return ERROR_DIV_BY_ZERO;
    else if(NULL==a || NULL==b)
        return ERROR_NULL_PTR;
    else
    {
    cdiv->real=((a->real*b->real)+(a->img*b->img))/((b->real*b->real)+(b->img*b->img));
    cdiv->img=(a->img*b->real-(a->real*b->img))/((b->real*b->real)+(b->img,b->img));
    printf("%f+%fi\n",cdiv->real,cdiv->img);
    return SUCCESS;
    }
}