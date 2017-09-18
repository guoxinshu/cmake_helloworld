#include <stdio.h>
#include "TutorialConfig.h"
#include <pthread.h>
#include "common.h"


int main()
{
    ERROR("hello world!");



    printf("version: %d,%d\n",Tutorial_VERSION_MAJOR,Tutorial_VERSION_MINOR);
    getchar();
    return 0;
}
