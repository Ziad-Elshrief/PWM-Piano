#ifndef HKPD_CONFIG_H
#define HKPD_CONFIG_H
/* Rows*/
#define HKPD_u8R0_PIN 		MDIO_u8_PIN_0
#define HKPD_u8R0_PORT	 	MDIO_u8_PORTD

#define HKPD_u8R1_PIN 		MDIO_u8_PIN_1
#define HKPD_u8R1_PORT	 	MDIO_u8_PORTD

#define HKPD_u8R2_PIN 		MDIO_u8_PIN_2
#define HKPD_u8R2_PORT	 	MDIO_u8_PORTD

#define HKPD_u8R3_PIN 		MDIO_u8_PIN_3
#define HKPD_u8R3_PORT	 	MDIO_u8_PORTD

/* Columns */
#define HKPD_u8C0_PIN 		MDIO_u8_PIN_4
#define HKPD_u8C0_PORT	 	MDIO_u8_PORTD

#define HKPD_u8C1_PIN 		MDIO_u8_PIN_6
#define HKPD_u8C1_PORT	 	MDIO_u8_PORTA

#define HKPD_u8C2_PIN 		MDIO_u8_PIN_6
#define HKPD_u8C2_PORT	 	MDIO_u8_PORTD

#define HKPD_u8C3_PIN 		MDIO_u8_PIN_7
#define HKPD_u8C3_PORT	 	MDIO_u8_PORTD


#define HKPD_Keys 			{{16 , 224 , 48 , 96},	 \
							{80 ,255 , 128 , 240},	 \
							{144 , 192 , 64 , 176},	 \
							{208 , 32 , 112 , 160}}

#endif
