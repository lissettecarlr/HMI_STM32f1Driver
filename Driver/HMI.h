/**@file HMI.h
  *@brief HMI串口屏驱动，使其更加方便的使用串口屏来显示数据
  *    使用：
  *   
  *       
  *       
  * 
  *@author lissettecarlr
  *
  */

#ifndef  __HMI_H
#define  __HMI_H

#include "stm32f10x.h"
#include "USART.h"


class HMI 
{
	private:
//		USART &COM;

	
	public:
		
//		HMI(USART com);
//		bool SetTextBox(char *name,char *txt);//设置文本框
//	  bool SetProgressBar(char *name,char val);//设置进度条
	
		bool SetTextBox(USART &com,char *name,char *txt);//设置文本框
		bool SetProgressBar(USART &com,char *name,char *val);//设置进度条
};

#endif
