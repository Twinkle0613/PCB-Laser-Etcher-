/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_test_assert_link_list_with_arr_the_first_parameter_is_NUll(void);
extern void test_test_assert_link_list_with_arr_the_second_parameter_is_NUll(void);
extern void test_test_assert_link_list_with_arr_a_few_elements_were_added_into_link_list(void);
extern void test_test_assert_link_list_with_arr_one_of_the_array_value_is_not_the_same_wtih_the_value_of_linkedElement(void);
extern void test_test_assert_link_list_with_arr_the_number_of_array_is_less_than_number_of_linkedlElememt(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_CustomAssertion.c");
  RUN_TEST(test_test_assert_link_list_with_arr_the_first_parameter_is_NUll, 13);
  RUN_TEST(test_test_assert_link_list_with_arr_the_second_parameter_is_NUll, 18);
  RUN_TEST(test_test_assert_link_list_with_arr_a_few_elements_were_added_into_link_list, 23);
  RUN_TEST(test_test_assert_link_list_with_arr_one_of_the_array_value_is_not_the_same_wtih_the_value_of_linkedElement, 34);
  RUN_TEST(test_test_assert_link_list_with_arr_the_number_of_array_is_less_than_number_of_linkedlElememt, 45);

  return (UnityEnd());
}
