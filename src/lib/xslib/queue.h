/**
 * @File queue.h
 * @Synopsis  
 * @author xinshu Guo, guo398389288@gmail.com
 * @version 1.0
 * @date 2018-12-28
 */

#ifndef _QUEUE_H_
#define _QUEUE_H_


/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  CreateQueue 
 *
 * @Param size of buf number
 * @Param len of buf size
 *
 * @Returns  queue point handle
 */
/* ---------------------------------------------------------------------------*/
void * CreateQueue(int size, int len);

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  IsFullQ 
 *
 * @Param queue
 *
 * @Returns   
 */
/* ---------------------------------------------------------------------------*/
int IsFullQ(void * queue);

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  AddQ 
 *
 * @Param queue
 * @Param item
 *
 * @Returns   
 */
/* ---------------------------------------------------------------------------*/
int AddQ(void * queue, void * item); 

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  IsEmptyQ 
 *
 * @Param queue
 *
 * @Returns   
 */
/* ---------------------------------------------------------------------------*/
int IsEmptyQ(void * queue); 

/* --------------------------------------------------------------------------*/
/**
 * @Synopsis  DeleteQ 
 *
 * @Param queue
 *
 * @Returns   
 */
/* ---------------------------------------------------------------------------*/
void * DeleteQ(void * queue);


#endif

