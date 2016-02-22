#include "HMI.h"
#include "USART.h"

USART usart1(1,115200);//
USART usart2(2,9600);//
//USART usart2(2,115200,true);//
HMI a;

int main()
{

		char *x="t2";
		char *y="zhong";
    char *z="j0";
		char *g="50";
		u8 FF[3]={0xff,0xff,0xff};
		
//	a.SetTextBox(usart2,x,y);
		a.SetProgressBar(usart2,z,g);
		while(1);
  	return 0;
}
