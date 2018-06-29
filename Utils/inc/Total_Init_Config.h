/*
===============================================================================
 Name        : Total_Init_Config.h
 Author      : Guillermo Ariel Muena
 E-Mail		 : guillermuena@est.utn.frba.utn.edu.ar
 Version     : v0.01
 Copyright   : Free, as long as you give me some credit. Make sure to tell me
 	 	 	   of any change or improvement you make.
 Description : This .h file allows you to enable any pin with the function you
 	 	 	   want (as long as that function is available in that pin, I cannot
 	 	 	   do that kind of sorcery, you know? (despite I would love to be
 	 	 	   able to do it .-.)). This header file enable all the conditional
 	 	 	   compiling in the Total_Init.c file.

   	   	   	   Happy programming :D
===============================================================================
*/

#ifndef TOTAL_INIT_CONFIG_H_
#define TOTAL_INIT_CONFIG_H_



/********************************************************************/
/*									GPIO							*/
/********************************************************************/



#define OUTPUT_GPIO 		1
#define INPUT_GPIO		0


#define HIGH_Z			IOCON_MODE_INACT
#define PULL_UP			IOCON_MODE_PULLDOWN
#define PULL_DOWN		IOCON_MODE_PULLUP
#define REPEATER			IOCON_MODE_REPEATER
#define OPEN_DRAIN		4
#define PUSH_PULL		5

#define ENABLE_GPIO		0

	#define ENABLE_GPIO_PORT0	0

		#define ENABLE_GPIO_PORT_0_PIN_0		0
		#define ENABLE_GPIO_PORT_0_PIN_1		0
		#define ENABLE_GPIO_PORT_0_PIN_2		0
		#define ENABLE_GPIO_PORT_0_PIN_3		0
		#define ENABLE_GPIO_PORT_0_PIN_4		0
		#define ENABLE_GPIO_PORT_0_PIN_5		0
		#define ENABLE_GPIO_PORT_0_PIN_6		0
		#define ENABLE_GPIO_PORT_0_PIN_7		0
		#define ENABLE_GPIO_PORT_0_PIN_8		0
		#define ENABLE_GPIO_PORT_0_PIN_9		0
		#define ENABLE_GPIO_PORT_0_PIN_10	0
		#define ENABLE_GPIO_PORT_0_PIN_11	0
		#define ENABLE_GPIO_PORT_0_PIN_15	0
		#define ENABLE_GPIO_PORT_0_PIN_16	0
		#define ENABLE_GPIO_PORT_0_PIN_17	0
		#define ENABLE_GPIO_PORT_0_PIN_18	0
		#define ENABLE_GPIO_PORT_0_PIN_19	0
		#define ENABLE_GPIO_PORT_0_PIN_20	0
		#define ENABLE_GPIO_PORT_0_PIN_21	0
		#define ENABLE_GPIO_PORT_0_PIN_22	0
		#define ENABLE_GPIO_PORT_0_PIN_23	0
		#define ENABLE_GPIO_PORT_0_PIN_24	0
		#define ENABLE_GPIO_PORT_0_PIN_25	0
		#define ENABLE_GPIO_PORT_0_PIN_26	0
		#define ENABLE_GPIO_PORT_0_PIN_27	0
		#define ENABLE_GPIO_PORT_0_PIN_28	0
		#define ENABLE_GPIO_PORT_0_PIN_29	0
		#define ENABLE_GPIO_PORT_0_PIN_30	0

		#define DIRECTION_GPIO_PORT_0_PIN_0		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_1		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_2		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_3		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_4		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_5		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_6		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_7		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_8		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_9		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_10		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_11		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_15		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_16		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_17		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_18		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_19		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_20		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_21		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_22		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_23		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_24		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_25		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_26		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_27		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_28		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_29		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_0_PIN_30		OUTPUT_GPIO

		#define GPIO_TYPE_GPIO_PORT_0_PIN_0		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_1		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_2		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_3		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_4		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_5		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_6		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_7		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_8		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_9		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_10		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_11		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_15		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_16		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_17		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_18		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_19		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_20		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_21		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_22		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_23		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_24		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_25		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_26		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_27		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_28		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_29		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_0_PIN_30		HIGH_Z


	#define ENABLE_GPIO_PORT1	0

		#define ENABLE_GPIO_PORT_1_PIN_0		0
		#define ENABLE_GPIO_PORT_1_PIN_1		0
		#define ENABLE_GPIO_PORT_1_PIN_4		0
		#define ENABLE_GPIO_PORT_1_PIN_8		0
		#define ENABLE_GPIO_PORT_1_PIN_9		0
		#define ENABLE_GPIO_PORT_1_PIN_10	0
		#define ENABLE_GPIO_PORT_1_PIN_14	0
		#define ENABLE_GPIO_PORT_1_PIN_15	0
		#define ENABLE_GPIO_PORT_1_PIN_16	0
		#define ENABLE_GPIO_PORT_1_PIN_17	0
		#define ENABLE_GPIO_PORT_1_PIN_18	0
		#define ENABLE_GPIO_PORT_1_PIN_19	0
		#define ENABLE_GPIO_PORT_1_PIN_20	0
		#define ENABLE_GPIO_PORT_1_PIN_21	0
		#define ENABLE_GPIO_PORT_1_PIN_22	0
		#define ENABLE_GPIO_PORT_1_PIN_23	0
		#define ENABLE_GPIO_PORT_1_PIN_24	0
		#define ENABLE_GPIO_PORT_1_PIN_25	0
		#define ENABLE_GPIO_PORT_1_PIN_26	0
		#define ENABLE_GPIO_PORT_1_PIN_27	0
		#define ENABLE_GPIO_PORT_1_PIN_28	0
		#define ENABLE_GPIO_PORT_1_PIN_29	0
		#define ENABLE_GPIO_PORT_1_PIN_30	0
		#define ENABLE_GPIO_PORT_1_PIN_31	0

		#define DIRECTION_GPIO_PORT_1_PIN_0	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_1	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_4	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_8	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_9	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_10	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_14	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_15	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_16	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_17	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_18	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_19	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_20	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_21	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_22	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_23	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_24	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_25	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_26	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_27	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_28	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_29	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_30	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_1_PIN_31	OUTPUT_GPIO

		#define GPIO_TYPE_GPIO_PORT_1_PIN_0	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_1	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_4	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_8	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_9	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_10	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_14	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_15	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_16	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_17	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_18	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_19	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_20	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_21	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_22	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_23	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_24	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_25	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_26	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_27	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_28	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_29	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_30	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_1_PIN_31	HIGH_Z


	#define ENABLE_GPIO_PORT2	0

		#define ENABLE_GPIO_PORT_2_PIN_0		0
		#define ENABLE_GPIO_PORT_2_PIN_1		0
		#define ENABLE_GPIO_PORT_2_PIN_2		0
		#define ENABLE_GPIO_PORT_2_PIN_3		0
		#define ENABLE_GPIO_PORT_2_PIN_4		0
		#define ENABLE_GPIO_PORT_2_PIN_5		0
		#define ENABLE_GPIO_PORT_2_PIN_6		0
		#define ENABLE_GPIO_PORT_2_PIN_7		0
		#define ENABLE_GPIO_PORT_2_PIN_8		0
		#define ENABLE_GPIO_PORT_2_PIN_9		0
		#define ENABLE_GPIO_PORT_2_PIN_10	0
		#define ENABLE_GPIO_PORT_2_PIN_11	0
		#define ENABLE_GPIO_PORT_2_PIN_12	0
		#define ENABLE_GPIO_PORT_2_PIN_13	0

		#define DIRECTION_GPIO_PORT_2_PIN_0		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_1		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_2		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_3		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_4		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_5		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_6		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_7		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_8		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_9		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_10		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_11		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_12		OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_2_PIN_13		OUTPUT_GPIO

		#define GPIO_TYPE_GPIO_PORT_2_PIN_0		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_1		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_2		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_3		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_4		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_5		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_6		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_7		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_8		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_9		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_10		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_11		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_12		HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_2_PIN_13		HIGH_Z


	#define ENABLE_GPIO_PORT3	0

		#define ENABLE_GPIO_PORT_3_PIN_25	0
		#define ENABLE_GPIO_PORT_3_PIN_26	0

		#define DIRECTION_GPIO_PORT_3_PIN_25	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_3_PIN_26	OUTPUT_GPIO

		#define GPIO_TYPE_GPIO_PORT_3_PIN_25	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_3_PIN_26	HIGH_Z

	#define ENABLE_GPIO_PORT4	0

		#define ENABLE_GPIO_PORT_4_PIN_28	0
		#define ENABLE_GPIO_PORT_4_PIN_29	0

		#define DIRECTION_GPIO_PORT_4_PIN_28	OUTPUT_GPIO
		#define DIRECTION_GPIO_PORT_4_PIN_29	OUTPUT_GPIO

		#define GPIO_TYPE_GPIO_PORT_3_PIN_25	HIGH_Z
		#define GPIO_TYPE_GPIO_PORT_3_PIN_26	HIGH_Z

/********************************************************************/
/*							CAN										*/
/********************************************************************/

#define ENABLE_CAN	0

	#define ENABLE_CAN1	0

		#define ENABLE_CAN1_RD1_PIN		0
		#define ENABLE_CAN1_TD1_PIN		0
		#define ENABLE_CAN1_RD2_PIN		0
		#define ENABLE_CAN1_TD2_PIN		0

	#define ENABLE_CAN2	0

		#define ENABLE_CAN2_RD1_PIN		0
		#define ENABLE_CAN2_TD1_PIN		0
		#define ENABLE_CAN2_RD2_PIN		0
		#define ENABLE_CAN2_TD2_PIN		0


/********************************************************************/
/*							UART									*/
/********************************************************************/

#define ENABLE_UART	0

	#define ENABLE_UART0		0

		#define ENABLE_UART0_TX_PIN	  			0
		#define ENABLE_UART0_RX_PIN	  			0

	#define ENABLE_UART1		0

		#define ENABLE_UART1_0	0

			#define ENABLE_UART1_0_TXD_PIN		0
			#define ENABLE_UART1_0_RXD_PIN		0

			#define ENABLE_UART1_0_CTS_PIN		0
			#define ENABLE_UART1_0_DCD_PIN		0
			#define ENABLE_UART1_0_DSR_PIN		0
			#define ENABLE_UART1_0_DTR_PIN		0
			#define ENABLE_UART1_0_RI_PIN		0
			#define ENABLE_UART1_0_RTS_PIN		0

		#define ENABLE_UART1_1	0

			#define ENABLE_UART1_1_TXD_PIN		0
			#define ENABLE_UART1_1_RXD_PIN		0

			#define ENABLE_UART1_1_CTS_PIN		0
			#define ENABLE_UART1_1_DCD_PIN		0
			#define ENABLE_UART1_1_DSR_PIN		0
			#define ENABLE_UART1_1_DTR_PIN		0
			#define ENABLE_UART1_1_RI_PIN		0
			#define ENABLE_UART1_1_RTS_PIN		0


	#define ENABLE_UART2		0

		#define ENABLE_UART2_0	0

			#define ENABLE_UART2_0_TXD_PIN		0
			#define ENABLE_UART2_0_RXD_PIN		0

		#define ENABLE_UART2_1	0

			#define ENABLE_UART2_1_TXD_PIN		0
			#define ENABLE_UART2_1_RXD_PIN		0


	#define ENABLE_UART3		0

		#define ENABLE_UART3_0	0

			#define ENABLE_UART3_0_TXD_PIN		0
			#define ENABLE_UART3_0_RXD_PIN		0

		#define ENABLE_UART3_1	0

			#define ENABLE_UART3_1_TXD_PIN		0
			#define ENABLE_UART3_1_RXD_PIN		0

		#define ENABLE_UART3_2	0

			#define ENABLE_UART3_2_TXD_PIN		0
			#define ENABLE_UART3_2_RXD_PIN		0


/********************************************************************/
/*									I2C								*/
/********************************************************************/

#define ENABLE_I2C	0

	#define ENABLE_I2C0	0

		#define ENABLE_I2C0_SDA_PIN				0
		#define ENABLE_I2C0_SCL_PIN				0

	#define ENABLE_I2C1	0

		#define ENABLE_I2C1_0	0

			#define ENABLE_I2C1_0_SDA_PIN		0
			#define ENABLE_I2C1_0_SCL_PIN		0

		#define ENABLE_I2C1_1	0

			#define ENABLE_I2C1_1_SDA_PIN		0
			#define ENABLE_I2C1_1_SCL_PIN		0

	#define ENABLE_I2C2	0

		#define ENABLE_I2C2_SDA_PIN				0
		#define ENABLE_I2C2_SCL_PIN				0

	#define ENABLE_I2C_USB	0

		#define ENABLE_I2C_USB_SDA_PIN			0
		#define ENABLE_I2C_USB_SCL_PIN			0

/********************************************************************/
/*									ADC								*/
/********************************************************************/

#define ENABLE_ADC0		0

	#define ENABLE_CHN0_PIN		0
	#define ENABLE_CHN1_PIN		0
	#define ENABLE_CHN2_PIN		0
	#define ENABLE_CHN3_PIN		0
	#define ENABLE_CHN4_PIN		0
	#define ENABLE_CHN5_PIN		0
	#define ENABLE_CHN6_PIN		0
	#define ENABLE_CHN7_PIN		0


/********************************************************************/
/*									I2S								*/
/********************************************************************/

#define ENABLE_I2S_RX	0

	#define ENABLE_I2S_RX_0		0

		#define ENABLE_I2S_RX_0_CLK_PIN		0
		#define ENABLE_I2S_RX_0_WS_PIN		0
		#define ENABLE_I2S_RX_0_SDA_PIN		0

	#define ENABLE_I2S_RX_1		0

		#define ENABLE_I2S_RX_1_CLK_PIN		0
		#define ENABLE_I2S_RX_1_WS_PIN		0
		#define ENABLE_I2S_RX_1_SDA_PIN		0

#define ENABLE_I2S_TX	0

	#define ENABLE_I2S_TX_0		0

		#define ENABLE_I2S_TX_0_CLK_PIN		0
		#define ENABLE_I2S_TX_0_WS_PIN		0
		#define ENABLE_I2S_TX_0_SDA_PIN		0

	#define ENABLE_I2S_TX_1		0

		#define ENABLE_I2S_TX_1_CLK_PIN		0
		#define ENABLE_I2S_TX_1_WS_PIN		0
		#define ENABLE_I2S_TX_1_SDA_PIN		0

#define ENABLE_I2S_CLOCK	0

	#define ENABLE_I2S_RX_MCLK_PIN			0
	#define ENABLE_I2S_TX_MCLK_PIN			0

/********************************************************************/
/*								TIMERS								*/
/********************************************************************/

#define ENABLE_TIMER_0		0

	#define ENABLE_CAPTURE_TIMER_0		0

		#define ENABLE_CAP0_CHN0_PIN			0
		#define ENABLE_CAP0_CHN1_PIN			0

	#define ENABLE_MATCH_TIMER_0			0

		#define ENABLE_MATCH_0_TIMER_0		0

			#define ENABLE_MAT0_CHN0_PIN		0
			#define ENABLE_MAT0_CHN1_PIN		0

		#define ENABLE_MATCH_1_TIMER_0		0

			#define ENABLE_MAT0_CHN0_PIN		0
			#define ENABLE_MAT0_CHN1_PIN		0

#define ENABLE_TIMER_1		0

	#define ENABLE_CAPTURE_TIMER_1	0

		#define ENABLE_CAP1_CHN0_PIN			0
		#define ENABLE_CAP1_CHN1_PIN			0

	#define ENABLE_MATCH_TIMER_1		0

		#define ENABLE_MAT1_CHN0_PIN			0
		#define ENABLE_MAT1_CHN1_PIN			0

#define ENABLE_TIMER_2		0

	#define ENABLE_CAPTURE_TIMER_2	0

		#define ENABLE_CAP2_CHN0_PIN			0
		#define ENABLE_CAP2_CHN1_PIN			0

	#define ENABLE_MATCH_0_TIMER_2	0

		#define ENABLE_MAT2_CHN0_PIN			0
		#define ENABLE_MAT2_CHN1_PIN			0

	#define ENABLE_MATCH_1_TIMER_2	0

		#define ENABLE_MAT2_CHN0_PIN			0
		#define ENABLE_MAT2_CHN1_PIN			0
		#define ENABLE_MAT2_CHN2_PIN			0
		#define ENABLE_MAT2_CHN3_PIN			0

#define ENABLE_TIMER_3		0

	#define ENABLE_CAPTURE_TIMER_3	0

		#define ENABLE_CAP3_CHN0_PIN			0
		#define ENABLE_CAP3_CHN1_PIN			0

	#define ENABLE_MATCH_TIMER_3		0

		#define ENABLE_MAT3_CHN0_PIN			0
		#define ENABLE_MAT3_CHN1_PIN			0

/********************************************************************/
/*									SSP								*/
/********************************************************************/

#define ENABLE_SSP0		0

	#define ENABLE_SSP0_0	0

		#define ENABLE_SSP0_SCK0_PIN			0
		#define ENABLE_SSP0_SSEL0_PIN		0
		#define ENABLE_SSP0_MISO0_PIN		0
		#define ENABLE_SSP0_MOSI0_PIN		0

	#define ENABLE_SSP0_1	0

		#define ENABLE_SSP0_SCK0_PIN			0
		#define ENABLE_SSP0_SSEL0_PIN		0
		#define ENABLE_SSP0_MISO0_PIN		0
		#define ENABLE_SSP0_MOSI0_PIN		0

#define ENABLE_SSP1		0

	#define ENABLE_SSP1_SCK0_PIN0			0
	#define ENABLE_SSP1_SCK0_PIN1			0

	#define ENABLE_SSP1_SSEL0_PIN			0
	#define ENABLE_SSP1_MISO0_PIN			0
	#define ENABLE_SSP1_MOSI0_PIN			0

/********************************************************************/
/*									SPI								*/
/********************************************************************/

#define ENABLE_SPI		0

	#define ENABLE_SPI_SCK_PIN			0
	#define ENABLE_SPI_SSEL_PIN			0
	#define ENABLE_SPI_MISO_PIN			0
	#define ENABLE_SPI_MOSI_PIN			0

/********************************************************************/
/*									DAC								*/
/********************************************************************/

#define ENABLE_DAC		0

	#define ENABLE_DAC_OUT_PIN			0


/********************************************************************/
/*									USB								*/
/********************************************************************/
#define ENABLE_USB		0

	#define ENABLE_USB_DP_PIN			0
	#define ENABLE_USB_DN_PIN			0
	#define ENABLE_USB_UP_LED_PIN		0
	#define ENABLE_USB_PPWR_PIN			0
	#define ENABLE_USB_PWRD_PIN			0
	#define ENABLE_USB_OVRCR_PIN			0
	#define ENABLE_VBUS_PIN				0
	#define ENABLE_USB_CONNECT_PIN		0

/********************************************************************/
/*							ETHERNET								*/
/********************************************************************/
#define ENABLE_ETHERNET	0

	#define ENABLE_ENET_TXD_PIN0			0
	#define ENABLE_ENET_TXD_PIN1			0
	#define ENABLE_ENET_TX_EN_PIN		0
	#define ENABLE_ENET_CRS_PIN			0
	#define ENABLE_ENET_RXD_PIN0			0
	#define ENABLE_ENET_RXD_PIN1			0
	#define ENABLE_ENET_RX_ER_PIN		0
	#define ENABLE_ENET_REF_CLK_PIN		0
	#define ENABLE_ENET_MDC_PIN			0
	#define ENABLE_ENET_MDIO_PIN			0

/********************************************************************/
/*								CLOCK								*/
/********************************************************************/
#define ENABLE_CLOCK_FUNCTIONS	0

	#define ENABLE_CLKOUT_PIN			0
	#define ENABLE_TRACECLK_PIN			0
	#define ENABLE_STCLK_PIN				0

/********************************************************************/
/*								TRACEDATA							*/
/********************************************************************/
#define ENABLE_TRACEDATA			0

	#define ENABLE_TRACEDATA_BIT0		0
	#define ENABLE_TRACEDATA_BIT1		0
	#define ENABLE_TRACEDATA_BIT2		0
	#define ENABLE_TRACEDATA_BIT3		0

/********************************************************************/
/*								INTERRUPT							*/
/********************************************************************/

#define ENABLE_EXTERNAL_INTERRUPT	0

	#define ENABLE_EINT0_PIN				0
	#define ENABLE_EINT1_PIN				0
	#define ENABLE_EINT2_PIN				0
	#define ENABLE_EINT3_PIN				0

#define ENABLE_EM_INTERRUPT

	#define ENABLE_NMI_PIN	        	0

#endif /* TOTAL_INIT_CONFIG_H_ */

/************************************************************************************/
/*										S A T O R									*/
/*										A R E P O									*/
/*										T E N E T									*/
/*										O P E R A									*/
/*										R O T A S									*/
/************************************************************************************/
