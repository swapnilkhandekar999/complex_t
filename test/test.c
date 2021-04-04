#include<stdio.h>
#include "unity.h"
#include "header.h"

static complex a={0,0};
static complex b={0,0};
static complex c={0,0};
static complex d={0,0};
static complex result={0,0};

void setUp()
{
}
void tearDown()
{
}

void add_test(void)
{
    a.real=0;a.img=0;
    b.real=0;b.img=0;
    TEST_ASSERT_EQUAL(sum(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.img);

    a.real=5;a.img=9;
    b.real=10;b.img=11;
    TEST_ASSERT_EQUAL(sum(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(15,result.real);
    TEST_ASSERT_EQUAL(20,result.img);

    a.real=-5;a.img=-9;
    b.real=-10;b.img=-20;
    TEST_ASSERT_EQUAL(sum(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(-15,result.real);
    TEST_ASSERT_EQUAL(-29,result.img);


}
void sub_test(void)
{
    a.real=0;a.img=0;
    b.real=0;b.img=0;
    TEST_ASSERT_EQUAL(diff(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.img);

    a.real=10;a.img=11;
    b.real=5;b.img=6;
    TEST_ASSERT_EQUAL(diff(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(5,result.real);
    TEST_ASSERT_EQUAL(5,result.img);

    a.real=-11;a.img=-6;
    b.real=-5;b.img=-1;
    TEST_ASSERT_EQUAL(diff(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(-6,result.real);
    TEST_ASSERT_EQUAL(-5,result.img);
}
void mul_test(void)
{
    a.real=0;a.img=0;
    b.real=0;b.img=0;
    TEST_ASSERT_EQUAL(mul(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.img);

    a.real=2;a.img=3;
    b.real=3;b.img=2;
    TEST_ASSERT_EQUAL(mul(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(13,result.img);

    a.real=5;a.img=3;
    b.real=2;b.img=4;
    TEST_ASSERT_EQUAL(mul(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(2,result.real);
    TEST_ASSERT_EQUAL(26,result.img);

    a.real=-6;a.img=4;
    b.real=1;b.img=-5;
    TEST_ASSERT_EQUAL(mul(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(14,result.real);
    TEST_ASSERT_EQUAL(34,result.img);

}
void div_test(void)
{
    a.real=0;a.img=0;
    b.real=0;b.img=0;
    TEST_ASSERT_EQUAL(divtest(&a,&b,&result),ERROR_DIV_BY_ZERO);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.img);

    a.real=3;a.img=2;
    b.real=2;b.img=4;
    TEST_ASSERT_EQUAL(divtest(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(0.7,result.real);
    TEST_ASSERT_EQUAL(-0.4,result.img);

    a.real=0;a.img=3;
    b.real=2;b.img=2;
    TEST_ASSERT_EQUAL(divtest(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(0.75,result.real);
    TEST_ASSERT_EQUAL(0.75,result.img);

}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(add_test);
    RUN_TEST(sub_test);
    RUN_TEST(mul_test);
    RUN_TEST(div_test);
    return UNITY_END();
}