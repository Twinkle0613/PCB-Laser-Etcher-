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
#include "mock_getTick.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_motorInit_the_configuration_was_set_by_motorInit_every_setting_should_pass_the_test_(void);
extern void test_setCallBack_the_callBack_of_timerElement_of_whichMotor_was_set_the_address_of_testMotor_functon_(void);
extern void test_initialStepCommand_the_value_stepLowCommand_and_stepHighCommand_is_changed_to_0xAA_and_0x55(void);
extern void test_getCommond_first_called_getCommand_should_return_0xAA_and_second_called_getCommand_should_retun_0x55(void);
extern void test_resetMotorDriveBuffer_the_data_of_motoDriveBuffer_should_become_0(void);
extern void test_motorStep_when_DmaPointer_point_to_slot0_the_data_of_slot0_still_can_be_update(void);
extern void test_motorStep_when_DmaPointer_point_to_slot0_the_data_of_slot1_still_can_be_update(void);
extern void test_motorStep_when_DmaPointer_point_to_slot0_the_data_of_slot2_still_can_be_update(void);
extern void test_motorStep_when_DmaPointer_point_to_slot1_the_data_of_slot0_still_can_not_be_update(void);
extern void test_motorStep_when_DmaPointer_point_to_slot1_the_data_of_slot1_still_can_be_update(void);
extern void test_motorStep_when_DmaPointer_point_to_slot1_the_data_of_slot2_still_can_be_update(void);
extern void test_motorStep_when_DmaPointer_point_to_slot2_the_data_of_slot0_still_can_not_be_update(void);
extern void test_motorStep_when_DmaPointer_point_to_slot2_the_data_of_slot1_still_can_not_be_update(void);
extern void test_motorStep_when_DmaPointer_point_to_slot2_the_data_of_slot2_still_can_be_update(void);
extern void test_motorStep_the_firMotorElem_is_added_into_linked_list_the_next_of_triMotorElem_should_point_to_firMotorElem(void);
extern void test_motorStep_the_secMotorElem_is_added_into_linked_list_the_next_of_triMotorElem_should_point_to_secMotorElem(void);
extern void test_motorStep_Motor0Element_Motor1Element_and_Motor2Element_was_added_into_linked_list_at_the_same_time(void);
extern void test_motorStep_did_not_update_slot1_but_add_the_Motor2Element_into_linked_list(void);
extern void test_motorStep_when_DataNumber_is_0_the_slot2_cant_be_update_but_the_Motor2Element_was_added_into_linked_list(void);
extern void test_motorStep_when_DataNumber_is_0_the_all_of_slot_cant_be_update_but_the_all_MotorElement_were_added_into_linked_list(void);
extern void test_motorSet_the_motor_setting_was_set_by_using_motorSet_the_stepHighCommand_and_stepLowCommand_should_return_the_motor_setting(void);
extern void test_DMA_channel_marco_the_DMAy_chanelx_that_was_executed_in_system_was_defined_into_DMA_channel_marco(void);
extern void test_motorConfigInit_the_txDetail_was_set_by_motorConfigInit_the_setting_of_txDetail_should_pass_the_test(void);
extern void test_extractMotorConfigInfo_(void);
extern void test_dmaQueue_add_one_motorElement_into_Queue(void);
extern void test_dmaQueue_add_two_motorElement_into_Queue(void);
extern void test_dmaDequeue_add_two_motorElement_into_Queue_and_deQueue(void);
extern void test_updateMotorDriveBuffer_the_linkedlist_only_contain_motor0Element_and_Update_the_triMotor_slot_buffer(void);
extern void test_updateMotorDriveBuffer_the_linkedlist_contain_motor0Element_and_motor1Element_and_Update_the_triMotor_and_secMotor_slot_buffer(void);
extern void test_updateMotorDriveBuffer_the_linkedlist_contain_motor0Element_motor1Element_and_motor2Elementent_and_Update_the_triMotor_secMotor_and_firMotor_slot_buffer(void);
extern void test_updateMotorDriveBuffer_Queue_contain_motor0Element_after_function_it_should_dequeue(void);
extern void test_updateMotorDriveBuffer_Queue_contain_motor0Element_motor1Element_and_motor2Element_after_function_they_should_dequeue(void);
extern void test_updateMotorDriveBuffer_Queue_contain_motor0Element_and_motor2Element_after_function_they_should_dequeue(void);
extern void test_updateMotorDriveBuffer_Queue_contain_motor0Element_and_motor2Element_after_function_linkedList_contain_motor2Element(void);
extern void test_updateMotorDriveBuffer_Queue_contain_motor0Element_and_motor1Element_after_function_linkedList_is_emply(void);
extern void test_updateMotorDriveBuffer_Queue_contain_motor0Element_and_motor1Element_after_function_linkedList_only_contain_motor1Element(void);
extern void test_motorMovementHandler_the_DMA_IRQ_function_will_update_motor0Element_Command(void);
extern void test_motorMovementHandler_the_DMA_IRQ_function_was_called_in_2_times_and_the_head_of_queue_is_point_to_null(void);
extern void test_motorMovementHandler_the_DMA_IRQ_function_will_update_triMotorSlot_and_secMotorSlot_Command(void);
extern void test_motorMovementHandler_motor0Element_and_motor1Element_that_updated_completely_should_be_dequeue(void);
extern void test_motorMovementHandler_motor0Element__motor1Element_and_motor2Element_that_updated_completely_should_be_dequeue(void);
extern void test_motorMovementHandler_motor0ment_and_motor1Element_(void);
extern void test_motorMovementHandler_motor0Element_and_motor2Element_that_updated_completely_should_be_dequeue(void);
extern void test_motorMovementHandler_motor1Element_and_motor2Element_that_updated_completely_should_be_dequeue(void);
extern void test_getFakeTick(void);
extern void test_getTick(void);
extern void test_motorMovementHandler_the_DMA_interrupt_has_occured_two_time_the_timer_link_list_have_contained_two_element(void);
extern void test_motorMovementHandler_the1(void);
extern void test_motorMovementHandler_the_timer_link_list_has_contain_two_element_such_as_3000_and_6000(void);
extern void test_motorMovementHandler_with_3000_and_6000_elem_in_link_list(void);
extern void test_motorMovementHandler_with_1000_2000_and_4000_elem_in_timer_link_list(void);
extern void test_motorMovementHandler_with_900_800_and_4000_elem_in_timer_link_list(void);
extern void test_motorMovementHandler_with_1_9_and_90_elem_in_timer_link_list(void);
extern void test_getNewPeriod_tickInterval_is_10_and_initial_period_is_20_the_function_should_return_10(void);
extern void test_getNewPeriod_tickInterval_is_10_and_initial_period_is_5_the_function_should_return_1(void);
extern void test_getNewPeriod_tickInterval_is_10_and_initial_period_is_10_the_function_should_return_1(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_MockFunction_Init();
  mock_getTick_Init();
}
static void CMock_Verify(void)
{
  mock_MockFunction_Verify();
  mock_getTick_Verify();
}
static void CMock_Destroy(void)
{
  mock_MockFunction_Destroy();
  mock_getTick_Destroy();
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
  UnityBegin("test_Motor.c");
  RUN_TEST(test_motorInit_the_configuration_was_set_by_motorInit_every_setting_should_pass_the_test_, 90);
  RUN_TEST(test_setCallBack_the_callBack_of_timerElement_of_whichMotor_was_set_the_address_of_testMotor_functon_, 117);
  RUN_TEST(test_initialStepCommand_the_value_stepLowCommand_and_stepHighCommand_is_changed_to_0xAA_and_0x55, 140);
  RUN_TEST(test_getCommond_first_called_getCommand_should_return_0xAA_and_second_called_getCommand_should_retun_0x55, 149);
  RUN_TEST(test_resetMotorDriveBuffer_the_data_of_motoDriveBuffer_should_become_0, 162);
  RUN_TEST(test_motorStep_when_DmaPointer_point_to_slot0_the_data_of_slot0_still_can_be_update, 186);
  RUN_TEST(test_motorStep_when_DmaPointer_point_to_slot0_the_data_of_slot1_still_can_be_update, 217);
  RUN_TEST(test_motorStep_when_DmaPointer_point_to_slot0_the_data_of_slot2_still_can_be_update, 250);
  RUN_TEST(test_motorStep_when_DmaPointer_point_to_slot1_the_data_of_slot0_still_can_not_be_update, 282);
  RUN_TEST(test_motorStep_when_DmaPointer_point_to_slot1_the_data_of_slot1_still_can_be_update, 318);
  RUN_TEST(test_motorStep_when_DmaPointer_point_to_slot1_the_data_of_slot2_still_can_be_update, 350);
  RUN_TEST(test_motorStep_when_DmaPointer_point_to_slot2_the_data_of_slot0_still_can_not_be_update, 381);
  RUN_TEST(test_motorStep_when_DmaPointer_point_to_slot2_the_data_of_slot1_still_can_not_be_update, 411);
  RUN_TEST(test_motorStep_when_DmaPointer_point_to_slot2_the_data_of_slot2_still_can_be_update, 441);
  RUN_TEST(test_motorStep_the_firMotorElem_is_added_into_linked_list_the_next_of_triMotorElem_should_point_to_firMotorElem, 469);
  RUN_TEST(test_motorStep_the_secMotorElem_is_added_into_linked_list_the_next_of_triMotorElem_should_point_to_secMotorElem, 512);
  RUN_TEST(test_motorStep_Motor0Element_Motor1Element_and_Motor2Element_was_added_into_linked_list_at_the_same_time, 560);
  RUN_TEST(test_motorStep_did_not_update_slot1_but_add_the_Motor2Element_into_linked_list, 605);
  RUN_TEST(test_motorStep_when_DataNumber_is_0_the_slot2_cant_be_update_but_the_Motor2Element_was_added_into_linked_list, 653);
  RUN_TEST(test_motorStep_when_DataNumber_is_0_the_all_of_slot_cant_be_update_but_the_all_MotorElement_were_added_into_linked_list, 700);
  RUN_TEST(test_motorSet_the_motor_setting_was_set_by_using_motorSet_the_stepHighCommand_and_stepLowCommand_should_return_the_motor_setting, 732);
  RUN_TEST(test_DMA_channel_marco_the_DMAy_chanelx_that_was_executed_in_system_was_defined_into_DMA_channel_marco, 750);
  RUN_TEST(test_motorConfigInit_the_txDetail_was_set_by_motorConfigInit_the_setting_of_txDetail_should_pass_the_test, 766);
  RUN_TEST(test_extractMotorConfigInfo_, 781);
  RUN_TEST(test_dmaQueue_add_one_motorElement_into_Queue, 790);
  RUN_TEST(test_dmaQueue_add_two_motorElement_into_Queue, 800);
  RUN_TEST(test_dmaDequeue_add_two_motorElement_into_Queue_and_deQueue, 813);
  RUN_TEST(test_updateMotorDriveBuffer_the_linkedlist_only_contain_motor0Element_and_Update_the_triMotor_slot_buffer, 847);
  RUN_TEST(test_updateMotorDriveBuffer_the_linkedlist_contain_motor0Element_and_motor1Element_and_Update_the_triMotor_and_secMotor_slot_buffer, 875);
  RUN_TEST(test_updateMotorDriveBuffer_the_linkedlist_contain_motor0Element_motor1Element_and_motor2Elementent_and_Update_the_triMotor_secMotor_and_firMotor_slot_buffer, 915);
  RUN_TEST(test_updateMotorDriveBuffer_Queue_contain_motor0Element_after_function_it_should_dequeue, 957);
  RUN_TEST(test_updateMotorDriveBuffer_Queue_contain_motor0Element_motor1Element_and_motor2Element_after_function_they_should_dequeue, 990);
  RUN_TEST(test_updateMotorDriveBuffer_Queue_contain_motor0Element_and_motor2Element_after_function_they_should_dequeue, 1037);
  RUN_TEST(test_updateMotorDriveBuffer_Queue_contain_motor0Element_and_motor2Element_after_function_linkedList_contain_motor2Element, 1081);
  RUN_TEST(test_updateMotorDriveBuffer_Queue_contain_motor0Element_and_motor1Element_after_function_linkedList_is_emply, 1123);
  RUN_TEST(test_updateMotorDriveBuffer_Queue_contain_motor0Element_and_motor1Element_after_function_linkedList_only_contain_motor1Element, 1165);
  RUN_TEST(test_motorMovementHandler_the_DMA_IRQ_function_will_update_motor0Element_Command, 1210);
  RUN_TEST(test_motorMovementHandler_the_DMA_IRQ_function_was_called_in_2_times_and_the_head_of_queue_is_point_to_null, 1245);
  RUN_TEST(test_motorMovementHandler_the_DMA_IRQ_function_will_update_triMotorSlot_and_secMotorSlot_Command, 1285);
  RUN_TEST(test_motorMovementHandler_motor0Element_and_motor1Element_that_updated_completely_should_be_dequeue, 1326);
  RUN_TEST(test_motorMovementHandler_motor0Element__motor1Element_and_motor2Element_that_updated_completely_should_be_dequeue, 1376);
  RUN_TEST(test_motorMovementHandler_motor0ment_and_motor1Element_, 1432);
  RUN_TEST(test_motorMovementHandler_motor0Element_and_motor2Element_that_updated_completely_should_be_dequeue, 1505);
  RUN_TEST(test_motorMovementHandler_motor1Element_and_motor2Element_that_updated_completely_should_be_dequeue, 1557);
  RUN_TEST(test_getFakeTick, 1597);
  RUN_TEST(test_getTick, 1607);
  RUN_TEST(test_motorMovementHandler_the_DMA_interrupt_has_occured_two_time_the_timer_link_list_have_contained_two_element, 1630);
  RUN_TEST(test_motorMovementHandler_the1, 1725);
  RUN_TEST(test_motorMovementHandler_the_timer_link_list_has_contain_two_element_such_as_3000_and_6000, 1822);
  RUN_TEST(test_motorMovementHandler_with_3000_and_6000_elem_in_link_list, 1920);
  RUN_TEST(test_motorMovementHandler_with_1000_2000_and_4000_elem_in_timer_link_list, 2018);
  RUN_TEST(test_motorMovementHandler_with_900_800_and_4000_elem_in_timer_link_list, 2127);
  RUN_TEST(test_motorMovementHandler_with_1_9_and_90_elem_in_timer_link_list, 2237);
  RUN_TEST(test_getNewPeriod_tickInterval_is_10_and_initial_period_is_20_the_function_should_return_10, 2391);
  RUN_TEST(test_getNewPeriod_tickInterval_is_10_and_initial_period_is_5_the_function_should_return_1, 2401);
  RUN_TEST(test_getNewPeriod_tickInterval_is_10_and_initial_period_is_10_the_function_should_return_1, 2411);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}
