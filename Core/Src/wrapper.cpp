#include <main.h>
void main_cpp(void)
{
	while(1)
	{
		GPIOB->BSRR = 0b00000000000000000000000000000001;	// PB0をHighに
		HAL_Delay(1000);									// 1000ms待つ
		GPIOB->BSRR = 0b00000000000000010000000000000000;	// PB0をLowに
		HAL_Delay(1000);									// 1000ms待つ
	}
}
