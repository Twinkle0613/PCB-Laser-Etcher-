/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_getTick.h"

static const char* CMockString_TIMx = "TIMx";
static const char* CMockString_getTick = "getTick";

typedef struct _CMOCK_getTick_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint32_t ReturnVal;
  int CallOrder;
  TIM_TypeDef* Expected_TIMx;

} CMOCK_getTick_CALL_INSTANCE;

static struct mock_getTickInstance
{
  int getTick_IgnoreBool;
  uint32_t getTick_FinalReturn;
  CMOCK_getTick_CALLBACK getTick_CallbackFunctionPointer;
  int getTick_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE getTick_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_getTick_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.getTick_IgnoreBool)
    Mock.getTick_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_getTick);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.getTick_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.getTick_CallbackFunctionPointer != NULL)
    Mock.getTick_CallInstance = CMOCK_GUTS_NONE;
}

void mock_getTick_Init(void)
{
  mock_getTick_Destroy();
}

void mock_getTick_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.getTick_CallbackFunctionPointer = NULL;
  Mock.getTick_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

uint32_t getTick(TIM_TypeDef* TIMx)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_getTick);
  CMOCK_getTick_CALL_INSTANCE* cmock_call_instance = (CMOCK_getTick_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.getTick_CallInstance);
  Mock.getTick_CallInstance = CMock_Guts_MemNext(Mock.getTick_CallInstance);
  if (Mock.getTick_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.getTick_FinalReturn;
    Mock.getTick_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.getTick_CallbackFunctionPointer != NULL)
  {
    return Mock.getTick_CallbackFunctionPointer(TIMx, Mock.getTick_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_getTick,CMockString_TIMx);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_TIMx), (void*)(TIMx), sizeof(TIM_TypeDef), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_getTick(CMOCK_getTick_CALL_INSTANCE* cmock_call_instance, TIM_TypeDef* TIMx)
{
  cmock_call_instance->Expected_TIMx = TIMx;
}

void getTick_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_getTick_CALL_INSTANCE));
  CMOCK_getTick_CALL_INSTANCE* cmock_call_instance = (CMOCK_getTick_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.getTick_CallInstance = CMock_Guts_MemChain(Mock.getTick_CallInstance, cmock_guts_index);
  Mock.getTick_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.getTick_IgnoreBool = (int)1;
}

void getTick_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, TIM_TypeDef* TIMx, uint32_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_getTick_CALL_INSTANCE));
  CMOCK_getTick_CALL_INSTANCE* cmock_call_instance = (CMOCK_getTick_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.getTick_CallInstance = CMock_Guts_MemChain(Mock.getTick_CallInstance, cmock_guts_index);
  Mock.getTick_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_getTick(cmock_call_instance, TIMx);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void getTick_StubWithCallback(CMOCK_getTick_CALLBACK Callback)
{
  Mock.getTick_CallbackFunctionPointer = Callback;
}

