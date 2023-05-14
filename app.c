#include "std_types.h"
#include "bit_math.h"
#include "MDIO_Interface.h"
#include "MTMR_Interface.h"
#include "HKPD_Interface.h"

#define F_CPU 8000000UL
#include <avr/delay.h>

int main(void){
	MDIO_u8Init();
	MTMR_voidTMR0Init();

	u8 Local_u8KeyValue;
	while(1){
		HKPD_u8GetKey(&Local_u8KeyValue);
		if(Local_u8KeyValue != HKPD_u8_NO_KEY_PRESSED){
		MTMR_u8TMR0SetCompareMatchValue(Local_u8KeyValue);
		_delay_ms(100);
		MTMR_u8TMR0SetCompareMatchValue(0);
		}

	}
	return 0;
}
