#include<stdio.h>
#include "unity.h"
#include "header.h"
#include "testcmp.h"


	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_code(void)
	{   complex a,b;
        a.real=5;
        b.real=5;
        a.imag=1;
        b.imag=1;
  		TEST_ASSERT_EQUAL(12, sum(a,b));
		TEST_ASSERT_EQUAL(0, diff(a,b));
		TEST_ASSERT_EQUAL(34, mull(a,b));
		TEST_ASSERT_EQUAL(1, divi(a,b));
	}


	float main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_code);

  		return UNITY_END();
	}