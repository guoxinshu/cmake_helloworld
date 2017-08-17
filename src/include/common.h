#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdio.h>
#include <time.h>
#include <string.h>


#define ERROR_DEBUG
#define WARING_DEBUG
#define LOG_DEBUG

#define __FILENAME__ (strrchr(__FILE__, '/') ? (strrchr(__FILE__, '/') + 1):__FILE__)


char * get_time()
{
    time_t t;    //time_t是一种类型，定义time_t类型的t
    time(&t);    //取得当前时间
    return ctime(&t);
}

/************************debug*****************************/
#ifdef ERROR_DEBUG
#define ERROR(format...) do{printf("\033[;31m[file: %s line: %d] time : %s\033[0m",__FILENAME__,__LINE__,get_time()); printf(format); printf("\n");}while(0)
#else
#define printf(format...)
#endif

#ifdef WARING_DEBUG
#define WARING(format...) do{printf("\033[;33m[file: %s line: %d] time : %s\033[0m",__FILENAME__,__LINE__,get_time()); printf(format); printf("\n");}while(0)
#else
#define printf(format...)
#endif


#ifdef LOG_DEBUG
#define LOG(format...) do{printf("\033[;34m[file: %s line: %d] time : %s\033[0m",__FILENAME__,__LINE__,get_time()); printf(format); printf("\n");}while(0)
#else
#define printf(format...)
#endif

/************************************************************/


typedef unsigned char       u8;
typedef char                s8;

typedef unsigned short      u16;
typedef short               s16;

typedef unsigned int        u32;
typedef int                 s32;


#endif 
