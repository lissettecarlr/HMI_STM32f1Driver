#include "HMI.h"


bool HMI::SetTextBox(USART &com,char *name,char *txt)
{
		u8 FF[3]={0xff,0xff,0xff};
		com<<name<<".txt="<<'"'<<txt<<'"';
	  com.SendData(FF,3);
		return true;
}

bool HMI::SetProgressBar(USART &com,char *name,char *val)
{
	
	u8 FF[3]={0xff,0xff,0xff};
	com<<name<<".val="<<val;
	com.SendData(FF,3);
	return true;
}

