/**
 * @file test.c
 * @author Sambit Nayak (Sambit.Nayak@ltts.com)
 * @breif For the testing of the every functon paramters taken into account.
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "halfadder.h"
#include "halfsubtractor.h"
#include "unity.h"


/// Required by the unity test framework 
void setUp(){}
/// Required by the unity test framework 
void tearDown(){}

/// Prototypes for all the test functions 
void test_halfadd1(void);
void test_halfadd2(void);
void test_halfsub1(void);
void test_halfsub2(void);




/* Write all the test functions */ 
/**
 * @brief Since the project uses concept of pointer and the functions doesn't take any input parameters and return 0 value, the teting is done to check 0 return value of all fuctions.
 * 
 */


void test_halfadd1(void)
{
  TEST_ASSERT_EQUAL(1,halfadd(1,0));
  //To check the Sum of the Adder 1 Xor 0 gives 1

}
void test_halfadd2(void)
{

  TEST_ASSERT_EQUAL(1,halfadd(1,0));
  //To check the Carry of the Adder
}
void test_halfsub1(void)
{
  TEST_ASSERT_EQUAL(0,halfsub(1,1));
  //To check the Difference of the subtractor 1 Xor 1 gives 0

}
  void test_halfsub2(void)
{
  TEST_ASSERT_EQUAL(1,halfsub(0,1));
  //To check the Borrow  of the subtractor 

}
/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_halfadd1);
  RUN_TEST(test_halfadd2);
  RUN_TEST(test_halfsub1);
  RUN_TEST(test_halfsub2);
  /* Close the Unity Test Framework */
  return UNITY_END();
}