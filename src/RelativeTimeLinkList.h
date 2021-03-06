#ifndef RelativeTimeLinkList_H
#define RelativeTimeLinkList_H

//General Library
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
//STM32F1XX standard Library
#include "stm32f10x_tim.h"
//Own Library
#include "Linklist.h"
#include "projectStruct.h"


#define diffBtwCurTimeAndBaseTime(x) (x->curTime - x->baseTime)
#define addTimeList(x,y) { addList(x,createLinkedElement(y)); }
#define periodFromBase (period + receiveInstrTime)

extern Linkedlist *root;

void timerQueue(ListElement *timerElement, uint32_t period);
ListElement* dequeue(Linkedlist *root);

//Searching 
void searchLastZeroTimerElement(ListElement** timerElement);
void searchTheNodeActionTimeNearbyPeriodFromBase(ListElement **recordElement, uint32_t* collectActTime , uint32_t period);

//Setting 
void setCurrentTime(Linkedlist *newList,uint32_t curTime);
void setBaseTime(Linkedlist *newList,uint32_t baseTime);
void updateActionTime(ListElement *timerElement, uint32_t newActTime);
void updateHead(Linkedlist *root);

//Adding 
void insertTimeElementIntoBack(ListElement *recordElement, ListElement *timerElement);
void insertTimeElementIntoFront(ListElement *recordElement, ListElement *timerElement);

//Others
uint32_t getTotalActionTime(Linkedlist *newList);
void timerListAdd(Linkedlist *newList, uint32_t period);



#define insertNode(x,y) {                                     \
         ListElement * temp = createLinkedElement(y);  \
         temp->next = x->next;                                \
         x->next = temp;                                      \
}  


#endif // RelativeTimeLinkList_H
