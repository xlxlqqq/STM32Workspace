/*
 * ��飺A/Dת��оƬ AD7606����
 * �汾: V1.0
 * ���ߣ�Mr.WangS
 * ʱ�䣺2017-8-3
 * ˵��:ʹ��PWM���������ض�CVA,CVB����ת��������ת����ɺ�ͨ��BUSY���������жϣ���ȡ���ݡ�\
				���ݶ�ȡ����SPI�Ĵ��з�ʽ��ȡ���ں����汾�н����ö�ʱ���ķ�ʽ���������ݲɼ���
*/
#ifndef AD7076_H_
#define AD7076_H_
#include "sys.h"
#include "delay.h"
#include "usart.h"

/* ADģ��ʹ�õ����ų�ʼ������ */
void ad7606_gpio_init(void);

/* ADģ��  CVA,CVB����PWM�������ʼ�� */
void ad7606_pwm_init(u32 arr,u32 psc);

/* ADģ���������� */
void ad7606_rst(void);

/* ������SPIģ������ */
void spi1_init(void);

/* ADģ������������� */
void ad7606_os_set(u8 mul_os);

/* ADģ�������Χ���� */
void ad7606_range_set(u8 num_range);
	
/* ���벶������PA8���� */
void ad7606_busy_cap(u32 arr,u16 psc);

/* stm32 SPI��ʼ������ */
void ad7606_spi_init(void);
#endif 
