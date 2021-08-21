/**
 * @file test_DutyCycle.c
 * @author Sambit Nayak
 * @brief For the testing of the every functon paramters taken into account.
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "DutyCycle.h"
#include "unity.h"


/// Required by the unity test framework 
void setUp(){}
/// Required by the unity test framework 
void tearDown(){}

/// Prototypes for all the test functions 
void test_DutyCycle(void);
void test_VoltageOutputofDutyCycle(void);




/* Write all the test functions */ 
/**
 * @brief Since the project uses concept of pointer and the functions doesn't take any input parameters and return 0 value, the teting is done to check 0 return value of all fuctions.
 * 
 */


void test_DutyCycle(void)
{
  TEST_ASSERT_EQUAL(9,Dutycycle(7,8));
  //To check the Duty Cycle by Giving Ton and TOff as 7 and 8 Respectively
}
void test_VoltageOutputofDutyCycle(void)
{

  TEST_ASSERT_EQUAL(40,VoltageOutputofDutyCycle(4,5));
  //To check the output Voltage of the waveform by giving value of duty cycle and input voltage(v0) as 4 and 5 respectively
}
  
/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_DutyCycle);
  RUN_TEST(test_VoltageOutputofDutyCycle);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}