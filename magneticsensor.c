#include "init.h"
int wyn=0;
void magneticsensor()
{
	while(ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC) == RESET);
	wyn = ADC_GetConversionValue(ADC1);
	if(wyn<500){
		GPIO_SetBits(GPIOD, GPIO_Pin_13);
	}
	else {
		GPIO_ResetBits(GPIOD, GPIO_Pin_13);
	}
}
