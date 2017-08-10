/*

作者:韩智鸿

han.zhihong@qq.com

*/

#ifndef __CC_BASE64_DECODE_H
#define __CC_BASE64_DECODE_H

#ifdef __cplusplus
extern "C" {
#endif	
	

#include "stdio.h"
#include "stdlib.h"

long int zhBase64Encode( char *src,long int src_len, char *dst);

int _zhBase64Decode( unsigned char *input, unsigned int input_len, unsigned char *output, unsigned int *output_len );

int zhBase64Decode(unsigned char *in, unsigned int inLength, unsigned char **out);

//php的函数名
#define base64_encode zhBase64Encode
#define base64_decode zhBase64Decode

#ifdef __cplusplus
}
#endif	

#endif // __CC_BASE64_DECODE_H
