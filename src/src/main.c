#include <stdio.h>
#include <pthread.h>
#include "common.h"
#include "queue.h"


typedef struct
{
    int type;
    int len;
    char data[64];
}xs_data_t;


int main()
{
    ERROR("hello world!");

    void * q = CreateQueue(5, 8);
    char buf[8] = "hello";
    char buf1[8] = "world";
    AddQ(q, buf);
    AddQ(q, buf1);
    
    char * buf_p =  DeleteQ(q);
    printf("%s\r\n",buf_p);

    getchar();
    return 0;
}
