#include <stdio.h>
#include <string.h>
#include <malloc.h>


typedef struct {
    char ** data;
    int maxSize;
    int maxLen;
    int front; //queue head point
    int rear; //queue tail point
    int size; //queue size
}Queue;


void * CreateQueue(int size, int len) 
{
    int i;
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->data =(char **) malloc(size * sizeof(char *));
    for(i=0;i<size;i++){  
	q->data[i]= (char *)malloc(len * sizeof(char));  
    }
    q->maxSize = size;
    q->maxLen = len;
    q->front = 0;
    q->rear = 0;
    q->size = 0;
    return q;
}

int IsFullQ(void * queue) 
{
    Queue * q = (Queue *)queue;
    return (q->size == q->maxSize);
}

int AddQ(void * queue, void * item) 
{
    Queue * q = (Queue *)queue;
    if (IsFullQ(q)) {
	printf("queue is full\n");
	return 0;
    }
    q->rear++;
    q->rear %= q->maxSize;
    q->size++;
    memcpy( q->data[q->rear] , item, q->maxLen);
    return 1;
}


int IsEmptyQ(void * queue) 
{
    Queue * q = (Queue *)queue;
    return (q->size == 0);
}

void * DeleteQ(void * queue) 
{
    Queue * q = (Queue *)queue;
    if (IsEmptyQ(q)) {
	printf("queue is qmpty\n");
	return NULL;
    }
    q->front++;
    q->front %= q->maxSize;
    q->size--;
    return q->data[q->front];

}

void example(void)
{
    void * q = CreateQueue(5, 8);
    char buf[8] = "hello";
    AddQ(q, buf);
    char * buf_p = DeleteQ(q);
    printf("%s\r\n",buf_p);
}


