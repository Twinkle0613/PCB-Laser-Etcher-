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
extern void test_timerDelay_generate_delay_10_by_adding_elemMotor1_into_queue(void);
extern void test_timerDelay_generate_delay_by_adding_elemMotor1_and_elemMotor2_into_queue(void);
extern void test_timerDelay_generate_delay_2_and_10_by_adding_elemMotor1_and_elemMotor2_into_queue(void);
extern void test_getTick_BaseTime_is_100000_and_TIM2_CNT_is_200_the_getTick_should_return_100200(void);
extern void test_recordCurrentTick_BaseTime_is_1000000_and_TIM2_CNT_is_2000_tickRecord_contains_1000200(void);
extern void test_getTickInterval_tickRecord1_is_3000_and_tickRecord2_is_4000_the_getTickInterval_should_return_1000(void);
extern void test_getTickInterval_tickRecord1_is_10000_and_tickRecord2_is_10000_the_getTickInterval_should_return_0(void);
extern void test_getFakeTick(void);
extern void test_TIM2_IRQHandler_when_timer_expire_for_motor1_the_TIM2_IRQHandler_was_called(void);
extern void test_TIM2_IRQHandler_link_list_contain_two_timerElement_when_timer_interrupt(void);


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
  UnityBegin("test_Timer.c");
  RUN_TEST(test_Test_TIMxIRQHandler_a_timerElement_exist_in_root_after_TIMxIRQHandler_the_head_of_roof_should_become_null, 92);
  RUN_TEST(test_Test_TIMxIRQHandler_two_timerElement_exist_in_root_after_TIMxIRQHandler_the_head_of_roof_will_point_to_last_timerElement, 119);
  RUN_TEST(test_Test_TIMxIRQHandler_5_timerElement_exist_in_root_after_TIMxIRQHandler_the_head_of_roof_will_point_to_last_timerElement, 155);
  RUN_TEST(test_timerDelay_generate_delay_10_by_adding_elemMotor1_into_queue, 190);
  RUN_TEST(test_timerDelay_generate_delay_by_adding_elemMotor1_and_elemMotor2_into_queue, 219);
  RUN_TEST(test_timerDelay_generate_delay_2_and_10_by_adding_elemMotor1_and_elemMotor2_into_queue, 250);
  RUN_TEST(test_getTick_BaseTime_is_100000_and_TIM2_CNT_is_200_the_getTick_should_return_100200, 272);
  RUN_TEST(test_recordCurrentTick_BaseTime_is_1000000_and_TIM2_CNT_is_2000_tickRecord_contains_1000200, 281);
  RUN_TEST(test_getTickInterval_tickRecord1_is_3000_and_tickRecord2_is_4000_the_getTickInterval_should_return_1000, 290);
  RUN_TEST(test_getTickInterval_tickRecord1_is_10000_and_tickRecord2_is_10000_the_getTickInterval_should_return_0, 303);
  RUN_TEST(test_getFakeTick, 315);
  RUN_TEST(test_TIM2_IRQHandler_when_timer_expire_for_motor1_the_TIM2_IRQHandler_was_called, 326);
  RUN_TEST(test_TIM2_IRQHandler_link_list_contain_two_timerElement_when_timer_interrupt, 379);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}
