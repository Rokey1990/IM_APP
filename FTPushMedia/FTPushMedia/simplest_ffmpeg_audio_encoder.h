/**
 *��򵥵Ļ���FFmpeg����Ƶ������
 *Simplest FFmpeg Audio Encoder
 *
 *������ Lei Xiaohua
 *leixiaohua1020@126.com
 *�й���ý��ѧ/���ֵ��Ӽ���
 *Communication University of China / Digital TV Technology
 *http://blog.csdn.net/leixiaohua1020
 *
 *������ʵ������ƵPCM�������ݱ���Ϊѹ��������MP3��WMA��AAC�ȣ���
 *����򵥵�FFmpeg��Ƶ���뷽��Ľ̡̳�
 *ͨ��ѧϰ�����ӿ����˽�FFmpeg�ı������̡�
 *This software encode PCM data to AAC bitstream.
 *It's the simplest audio encoding software based on FFmpeg. 
 *Suitable for beginner of FFmpeg 
 */

#include <stdio.h>

#define __STDC_CONSTANT_MACROS

#ifdef _WIN32
//Windows
extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
};
#else
//Linux...
#ifdef __cplusplus
extern "C"
{
#endif
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#ifdef __cplusplus
};
#endif
#endif


int flush_encoder(AVFormatContext *fmt_ctx,unsigned int stream_index);

int testM();


