#ifndef __CPPBRICK_LOG_H__
#define __CPPBRICK_LOG_H__

namespace cppbrick {

	/*
	 *如果定义了SimpleLog，则使用SimpleLog的接口来打印日志
	 *否则默认使用printf来打印日志
	 */

	 #ifdef SIMPLE_LOG
	 	#define CB_LOG_DEBUG	SL_LOG_DEBUG
	 	#define CB_LOG_INFO		SL_LOG_INFO
	 	#define CB_LOG_WARN		SL_LOG_WARN
	 	#define	CB_LOG_ERROR	SL_LOG_ERROR	 
	 #else
	 	#include <stdio.h>

	 	#define CB_LOG_DEBUG	printf
	 	#define CB_LOG_INFO		printf
	 	#define CB_LOG_WARN		printf
	 	#define	CB_LOG_ERROR	printf
	 #endif

}


#endif

