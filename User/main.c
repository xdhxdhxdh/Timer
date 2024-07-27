#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Timer.h"

uint16_t Num;
int main(void)
{
	Timer_Init();
	OLED_Init();
	OLED_ShowString(1,1,"num:");
	while(1)    
	{
		OLED_ShowNum(1,5,Num,5);
		OLED_ShowNum(2,1,TIM_GetCounter(TIM2),5);
	}
}
