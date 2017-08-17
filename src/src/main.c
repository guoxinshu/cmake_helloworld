#include <stdio.h>
#include "TutorialConfig.h"
#include <pthread.h>
#include "common.h"

void * service_thread(void * p)
{
    printf("service_thread\n");
    return NULL;
}

int main()
{
    ERROR("hello world!");
    printf("version: %d,%d\n",Tutorial_VERSION_MAJOR,Tutorial_VERSION_MINOR);
    pthread_t service_thread_t;
    if(pthread_create(&service_thread_t,NULL,service_thread,(void *)NULL) != 0)
    {
	ERROR("service thread creates error");
    }
    else
    {
	LOG("service thread creates successfully");
    }
    getchar();
    return 0;
}
