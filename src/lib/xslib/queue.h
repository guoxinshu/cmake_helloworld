#ifndef _QUEUE_H_
#define _QUEUE_H_


void * CreateQueue(int size, int len);
int IsFullQ(void * queue);
int AddQ(void * queue, void * item); 
int IsEmptyQ(void * queue); 
void * DeleteQ(void * queue);


#endif

