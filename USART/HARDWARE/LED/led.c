# include "led.h"
//��ʼ������LED��IO��Ϊ����ڣ���ʹ���������ڵ�ʱ��
//LED I/O��ʼ��
void LED_Init(void)
{
	RCC->APB2ENR|=1<<3;			//��һ����ʹ��ʱ�ӣ�ʹ��PORTBʱ��	�����òο�RCC�Ľṹ���壬STM32�ο��ֲ���APB2ENRʹ�ܼĴ���
	GPIOB->CRL &= 0xff0ffffff;		//32λ���ʼĴ������ο�STM32�ο��ֲ���CRL�ṹ������һλIO�ڣ���CRL�п������IO�ڵ�λ���㡣
	GPIOB->CRL |= 0x003000000; 		//pB.5 ����������ο�STM32�ο��ֲ���CRL����IO�ڵ����ݣ�
    GPIOB->ODR |=1 << 5	;		    //PB.5����ߡ��ο�STM32�ο��ֲ���ODR���ݽṹ��
}
