/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "mock_MockFunction.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_Test_TIMxIRQHandler_a_timerElement_exist_in_root_after_TIMxIRQHandler_the_head_of_roof_should_become_null(void);
extern void test_Test_TIMxIRQHandler_two_timerElement_exist_in_root_after_TIMxIRQHandler_the_head_of_roof_will_point_to_last_timerElement(void);
extern void test_Test_TIMxIRQHandler_5_timerElement_exist_in_root_after_TIMxIRQHandler_the_head_of_roof_will_point_to_last_timerElement(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_MockFunction_Init();
}
static void CMock_Verify(void)
{
  mock_MockFunction_Verify();
}
static void CMock_Destroy(void)
{
  mock_MockFunction_Destroy();
}

//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_Coroutine.c");
  RUN_TEST(test_Test_TIMxIRQHandler_a_timerElement_exist_in_root_after_TIMxIRQHandler_the_head_of_roof_should_become_null, 45);
  RUN_TEST(test_Test_TIMxIRQHandler_two_timerElement_exist_in_root_after_TIMxIRQHandler_the_head_of_roof_will_point_to_last_timerElement, 72);
  RUN_TEST(test_Test_TIMxIRQHandler_5_timerElement_exist_in_root_after_TIMxIRQHandler_the_head_of_roof_will_point_to_last_timerElement, 108);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}
