/*
	* ��飺stm32̽���߿�����LED����ͷ�ļ�
	* �汾��V1.1
	* ���ߣ�Mr.WangS
	* ʱ��: 2017-8-3
	* ��ϸ��������һЩ���Ʊ����������˺�����
*/
#ifndef __LED_H
#define __LED_H
#include "sys.h"

/* LED ������������궨�壬��ֱ�ӶԱ�����ֵ����LED����1Ϩ��0���� */
#define LED0 PFout(9)	// DS0
#define LED1 PFout(10)	// DS1	 

/* LED�������ų�ʼ�� */
void LED_Init(void);//��ʼ��		 				    
#endif
