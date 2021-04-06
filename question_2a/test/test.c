#include "unity.h"
#include "unity_internals.h"
#include "head.h"
#include <string.h>

void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
void test_empty(void)
{
    TEST_ASSERT_EQUAL(1,read("data.csv"));
    TEST_ASSERT_EQUAL(0,read("abx.csv"));

}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_empty);
   
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}
