/*
===============================================================================
 Name        : Total_Init.h
 Author      : Guillermo Ariel Muena
 E-Mail		 : guillermuena@est.utn.frba.utn.edu.ar
 Version     : v0.01
 Copyright   : Free, as long as you give me some credit. Make sure to tell me
 	 	 	   of any change or improvement you make.
 Description : This .h file contains all the pins available and all their functions
 	 	 	   described properly, to make it easier to set them. This is used in
 	 	 	   Total_Init.c

   	   	   	   Happy programming :D
===============================================================================
*/

#ifndef TOTAL_INIT_H_
#define TOTAL_INIT_H_


void Init_GPIO_PINS(void);

/********************************************************************/
/*									GPIO							*/
/********************************************************************/

#define PORT_0_PIN_0		0,0
#define PORT_0_PIN_1		0,1
#define PORT_0_PIN_2		0,2
#define PORT_0_PIN_3		0,3
#define PORT_0_PIN_4		0,4
#define PORT_0_PIN_5		0,5
#define PORT_0_PIN_6		0,6
#define PORT_0_PIN_7		0,7
#define PORT_0_PIN_8		0,8
#define PORT_0_PIN_9		0,9
#define PORT_0_PIN_10	0,10
#define PORT_0_PIN_11	0,11
#define PORT_0_PIN_15	0,15
#define PORT_0_PIN_16	0,16
#define PORT_0_PIN_17	0,17
#define PORT_0_PIN_18	0,18
#define PORT_0_PIN_19	0,19
#define PORT_0_PIN_20	0,20
#define PORT_0_PIN_21	0,21
#define PORT_0_PIN_22	0,22
#define PORT_0_PIN_23	0,23
#define PORT_0_PIN_24	0,24
#define PORT_0_PIN_25	0,25
#define PORT_0_PIN_26	0,26
#define PORT_0_PIN_27	0,27
#define PORT_0_PIN_28	0,28
#define PORT_0_PIN_29	0,29
#define PORT_0_PIN_30	0,30

#define PORT_1_PIN_0		1,0
#define PORT_1_PIN_1		1,1
#define PORT_1_PIN_4		1,4
#define PORT_1_PIN_8		1,8
#define PORT_1_PIN_9		1,9
#define PORT_1_PIN_10	1,10
#define PORT_1_PIN_14	1,14
#define PORT_1_PIN_15	1,15
#define PORT_1_PIN_16	1,16
#define PORT_1_PIN_17	1,17
#define PORT_1_PIN_18	1,18
#define PORT_1_PIN_19	1,19
#define PORT_1_PIN_20	1,20
#define PORT_1_PIN_21	1,21
#define PORT_1_PIN_22	1,22
#define PORT_1_PIN_23	1,23
#define PORT_1_PIN_24	1,24
#define PORT_1_PIN_25	1,25
#define PORT_1_PIN_26	1,26
#define PORT_1_PIN_27	1,27
#define PORT_1_PIN_28	1,28
#define PORT_1_PIN_29	1,29
#define PORT_1_PIN_30	1,30
#define PORT_1_PIN_31	1,31

#define PORT_2_PIN_0		2,0
#define PORT_2_PIN_1		2,1
#define PORT_2_PIN_2		2,2
#define PORT_2_PIN_3		2,3
#define PORT_2_PIN_4		2,4
#define PORT_2_PIN_5		2,5
#define PORT_2_PIN_6		2,6
#define PORT_2_PIN_7		2,7
#define PORT_2_PIN_8		2,8
#define PORT_2_PIN_9		2,9
#define PORT_2_PIN_10	2,10
#define PORT_2_PIN_11	2,11
#define PORT_2_PIN_12	2,12
#define PORT_2_PIN_13	2,13

#define PORT_3_PIN_25	3,25
#define PORT_3_PIN_26	3,26

#define PORT_4_PIN_28	4,28
#define PORT_4_PIN_29	4,29

/********************************************************************/
/*							CAN										*/
/********************************************************************/
//CAN 1
#define CAN1_RD1_PIN		PORT_0_PIN_0	//FUNCTION 01
#define CAN1_TD1_PIN		PORT_0_PIN_1	//FUNCTION 01
#define CAN1_RD2_PIN		PORT_0_PIN_21	//FUNCTION 11
#define CAN1_TD2_PIN		PORT_0_PIN_22	//FUNCTION 11

//CAN2
#define CAN2_RD1_PIN		PORT_0_PIN_4	//FUNCTION 10
#define CAN2_TD1_PIN 	PORT_0_PIN_5	//FUNCTION 10
#define CAN2_RD2_PIN    	PORT_2_PIN_7	//FUNCTION 01
#define CAN2_TD2_PIN    	PORT_2_PIN_8	//FUNCTION 01

/********************************************************************/
/*							UART									*/
/********************************************************************/
//UART 0
#define UART0_TX_PIN	  	PORT_0_PIN_2	//FUNCTION 01
#define UART0_RX_PIN	  	PORT_0_PIN_3	//FUNCTION 01

//UART 1
#define UART1_TXD_PIN0 	PORT_0_PIN_15	//FUNCTION 01
#define UART1_RXD_PIN0	PORT_0_PIN_16	//FUNCTION 01

#define UART1_CTS_PIN0	PORT_0_PIN_17	//FUNCTION 01
#define UART1_DCD_PIN0	PORT_0_PIN_18	//FUNCTION 01
#define UART1_DSR_PIN0	PORT_0_PIN_19 	//FUNCTION 01
#define UART1_DTR_PIN0	PORT_0_PIN_20	//FUNCTION 01
#define UART1_RI_PIN0	PORT_0_PIN_21	//FUNCTION 01
#define UART1_RTS_PIN0	PORT_0_PIN_22	//FUNCTION 01

#define UART1_TXD_PIN1	PORT_2_PIN_0	//FUNCTION 10
#define UART1_RXD_PIN1	PORT_2_PIN_1	//FUNCTION 10

#define UART1_CTS_PIN1	PORT_2_PIN_2	//FUNCTION 10
#define UART1_DCD_PIN1	PORT_2_PIN_3	//FUNCTION 10
#define UART1_DSR_PIN1	PORT_2_PIN_4	//FUNCTION 10
#define UART1_DTR_PIN1	PORT_2_PIN_5	//FUNCTION 10
#define UART1_RI_PIN1	PORT_2_PIN_6	//FUNCTION 10
#define UART1_RTS_PIN1	PORT_2_PIN_7	//FUNCTION 10

//UART 2
#define UART2_TXD_PIN0	PORT_0_PIN_10	//FUNCTION 01
#define UART2_RXD_PIN0	PORT_0_PIN_11	//FUNCTION 01

#define UART2_TXD_PIN1	PORT_2_PIN_8	//FUNCTION 10
#define UART2_RXD_PIN1	PORT_2_PIN_9	//FUNCTION 10

//UART 3
#define UART3_TXD_PIN0	PORT_0_PIN_0	//FUNCTION 10
#define UART3_RXD_PIN0  	PORT_0_PIN_1	//FUNCTION 10

#define UART3_TXD_PIN1 	PORT_0_PIN_25	//FUNCTION 11
#define UART3_RXD_PIN1 	PORT_0_PIN_26	//FUNCTION 11

#define UART3_TXD_PIN2	PORT_4_PIN_28	//FUNCTION 11
#define UART3_RXD_PIN2	PORT_4_PIN_29	//FUNCTION 11



/********************************************************************/
/*									I2C								*/
/********************************************************************/

// I2C0
#define I2C0_SDA_PIN	 	PORT_0_PIN_27	//FUNCTION 01
#define I2C0_SCL_PIN	 	PORT_0_PIN_28	//FUNCTION 01


// I2C1
#define I2C1_SDA_PIN0	PORT_0_PIN_0	//FUNCTION 11
#define I2C1_SCL_PIN0	PORT_0_PIN_1	//FUNCTION 11

#define I2C1_SDA_PIN1	PORT_0_PIN_19	//FUNCTION 11
#define I2C1_SCL_PIN1	PORT_0_PIN_20	//FUNCTION 11

//I2C2
#define I2C2_SDA_PIN		PORT_0_PIN_10	//FUNCTION 10
#define I2C2_SCL_PIN		PORT_0_PIN_11	//FUNCTION 10

// I2C USB
#define I2C_USB_SDA_PIN 	PORT_0_PIN_27	//FUNCTION 10
#define I2C_USB_SCL_PIN 	PORT_0_PIN_28	//FUNCTION 10

/********************************************************************/
/*									ADC								*/
/********************************************************************/

#define ADC0_CHN0_PIN	PORT_0_PIN_23	//FUNCTION 01
#define ADC0_CHN1_PIN	PORT_0_PIN_24	//FUNCTION 01
#define ADC0_CHN2_PIN	PORT_0_PIN_25	//FUNCTION 01
#define ADC0_CHN3_PIN	PORT_0_PIN_26	//FUNCTION 01
#define ADC0_CHN4_PIN	PORT_1_PIN_30	//FUNCTION 11
#define ADC0_CHN5_PIN	PORT_1_PIN_31	//FUNCTION 11
#define ADC0_CHN6_PIN	PORT_0_PIN_3	//FUNCTION 10
#define ADC0_CHN7_PIN	PORT_0_PIN_2	//FUNCTION 10

/********************************************************************/
/*									I2S								*/
/********************************************************************/

// RECIEVE
#define I2S_RX_CLK_PIN0	PORT_0_PIN_4	//FUNCTION 01
#define I2S_RX_WS_PIN0	PORT_0_PIN_5	//FUNCTION 01
#define I2S_RX_SDA_PIN0	PORT_0_PIN_6	//FUNCTION 01

#define I2S_RX_CLK_PIN1	PORT_0_PIN_23	//FUNCTION 10
#define I2S_RX_WS_PIN1	PORT_0_PIN_24	//FUNCTION 10
#define I2S_RX_SDA_PIN1	PORT_0_PIN_25	//FUNCTION 10

//TRANSMIT
#define I2S_TX_CLK_PIN0	PORT_0_PIN_7	//FUNCTION 01
#define I2S_TX_WS_PIN0	PORT_0_PIN_8	//FUNCTION 01
#define I2S_TX_SDA_PIN0	PORT_0_PIN_9	//FUNCTION 01

#define I2S_TX_CLK_PIN1	PORT_2_PIN_11	//FUNCTION 11
#define I2S_TX_WS_PIN1	PORT_2_PIN_12	//FUNCTION 11
#define I2S_TX_SDA_PIN1	PORT_2_PIN_13	//FUNCTION 11

//CLOCK
#define I2S_RX_MCLK_PIN	PORT_4_PIN_28	//FUNCTION 01
#define I2S_TX_MCLK_PIN	PORT_4_PIN_29	//FUNCTION 01



/********************************************************************/
/*								TIMERS								*/
/********************************************************************/
//TIMER 0
//CAPTURE
#define CAP0_CHN0_PIN   	PORT_1_PIN_26	//FUNCTION 11
#define CAP0_CHN1_PIN   	PORT_1_PIN_27	//FUNCTION 11

//MATCH
#define MAT0_CHN0_PIN0   PORT_1_PIN_28	//FUNCTION 11
#define MAT0_CHN1_PIN0   PORT_1_PIN_29	//FUNCTION 11
#define MAT0_CHN0_PIN1	PORT_3_PIN_25	//FUNCTION 10
#define MAT0_CHN1_PIN1	PORT_3_PIN_26	//FUNCTION 10

//TIMER 1
//CAPTURE
#define CAP1_CHN0_PIN	PORT_1_PIN_18	//FUNCTION 11
#define CAP1_CHN1_PIN   	PORT_1_PIN_19	//FUNCTION 11

//MATCH
#define MAT1_CHN0_PIN   	PORT_1_PIN_22	//FUNCTION 11
#define MAT1_CHN1_PIN	PORT_1_PIN_25	//FUNCTION 11

//TIMER 2
//CAPTURE
#define CAP2_CHN0_PIN 	PORT_0_PIN_4	//FUNCTION 11
#define CAP2_CHN1_PIN 	PORT_0_PIN_5	//FUNCTION 11

//MATCH
#define MAT2_CHN0_PIN0 	PORT_0_PIN_6	//FUNCTION 11
#define MAT2_CHN1_PIN0 	PORT_0_PIN_7	//FUNCTION 11
#define MAT2_CHN0_PIN1	PORT_4_PIN_28	//FUNCTION 10
#define MAT2_CHN1_PIN1	PORT_4_PIN_29	//FUNCTION 10
#define MAT2_CHN2_PIN 	PORT_0_PIN_8	//FUNCTION 11
#define MAT2_CHN3_PIN 	PORT_0_PIN_9	//FUNCTION 11

//TIMER 3
//CAPTURE
#define CAP3_CHN0_PIN 	PORT_0_PIN_23	//FUNCTION 11
#define CAP3_CHN1_PIN 	PORT_0_PIN_24	//FUNCTION 11

//MATCH
#define MAT3_CHN0_PIN 	PORT_0_PIN_10	//FUNCTION 11
#define MAT3_CHN1_PIN 	PORT_0_PIN_11	//FUNCTION 11

/********************************************************************/
/*									SSP								*/
/********************************************************************/


// SSP0
#define SSP0_SCK0_PIN0	PORT_0_PIN_15	//FUNCTION 10
#define SSP0_SSEL0_PIN0	PORT_0_PIN_16	//FUNCTION 10
#define SSP0_MISO0_PIN0	PORT_0_PIN_17	//FUNCTION 10
#define SSP0_MOSI0_PIN0	PORT_0_PIN_18	//FUNCTION 10

#define SSP0_SCK0_PIN1   PORT_1_PIN_20	//FUNCTION 11
#define SSP0_SSEL0_PIN1  PORT_1_PIN_21	//FUNCTION 11
#define SSP0_MOSI0_PIN1  PORT_1_PIN_24	//FUNCTION 11
#define SSP0_MISO0_PIN1  PORT_1_PIN_23	//FUNCTION 11

// SSP1
#define SSP1_SSEL_PIN	PORT_0_PIN_6	//FUNCTION 10
#define SSP1_SCK0_PIN0	PORT_0_PIN_7	//FUNCTION 10
#define SSP1_MISO_PIN	PORT_0_PIN_8	//FUNCTION 10
#define SSP1_MOSI_PIN	PORT_0_PIN_9	//FUNCTION 10
#define SSP1_SCK0_PIN1   PORT_1_PIN_31	//FUNCTION 10


/********************************************************************/
/*									SPI								*/
/********************************************************************/

#define SPI_SCK_PIN 	  	PORT_0_PIN_15	//FUNCTION 11
#define SPI_SSEL_PIN 	PORT_0_PIN_16	//FUNCTION 11
#define SPI_MISO_PIN 	PORT_0_PIN_17	//FUNCTION 11
#define SPI_MOSI_PIN 	PORT_0_PIN_18	//FUNCTION 11

/********************************************************************/
/*									DAC								*/
/********************************************************************/

#define DAC_OUT_PIN		PORT_0_PIN_26	//FUNCTION 10

/********************************************************************/
/*									USB								*/
/********************************************************************/

#define USB_DP_PIN	    PORT_0_PIN_29	//FUNCTION 01
#define USB_DN_PIN	    PORT_0_PIN_30	//FUNCTION 01
#define USB_UP_LED_PIN	ORT_1_PIN_18	//FUNCTION 01
#define USB_PPWR_PIN	  	PORT_1_PIN_19	//FUNCTION 10
#define USB_PWRD_PIN	  	PORT_1_PIN_22	//FUNCTION 10
#define USB_OVRCR_PIN	PORT_1_PIN_27	//FUNCTION 10
#define VBUS_PIN        	PORT_1_PIN_30	//FUNCTION 10
#define USB_CONNECT_PIN  PORT_2_PIN_9	//FUNCTION 01

/********************************************************************/
/*							ETHERNET								*/
/********************************************************************/

#define ENET_TXD_PIN0	PORT_1_PIN_0	//FUNCTION 01
#define ENET_TXD_PIN1	PORT_1_PIN_1	//FUNCTION 01
#define ENET_TX_EN_PIN	PORT_1_PIN_4	//FUNCTION 01
#define ENET_CRS_PIN		PORT_1_PIN_8	//FUNCTION 01
#define ENET_RXD_PIN0	PORT_1_PIN_9	//FUNCTION 01
#define ENET_RXD_PIN1	PORT_1_PIN_10	//FUNCTION 01
#define ENET_RX_ER_PIN	PORT_1_PIN_14	//FUNCTION 01
#define ENET_REF_CLK_PIN	PORT_1_PIN_15	//FUNCTION 01
#define ENET_MDC_PIN		PORT_1_PIN_16	//FUNCTION 01
#define ENET_MDIO_PIN	PORT_1_PIN_17	//FUNCTION 01

/********************************************************************/
/*									PWM								*/
/********************************************************************/

//PWM
#define PWM1_CHN1_PIN0	PORT_1_PIN_18	//FUNCTION 10
#define PWM1_CHN2_PIN0	PORT_1_PIN_20	//FUNCTION 10
#define PWM1_CHN3_PIN0	PORT_1_PIN_21	//FUNCTION 10
#define PWM1_CHN4_PIN0	PORT_1_PIN_23	//FUNCTION 10
#define PWM1_CHN5_PIN0	PORT_1_PIN_24	//FUNCTION 10
#define PWM1_CHN6_PIN0	PORT_1_PIN_26	//FUNCTION 10

#define PWM1_CHN1_PIN1   PORT_2_PIN_0	//FUNCTION 01
#define PWM1_CHN2_PIN1   PORT_2_PIN_1	//FUNCTION 01
#define PWM1_CHN3_PIN1   PORT_2_PIN_2	//FUNCTION 01
#define PWM1_CHN4_PIN1   PORT_2_PIN_3	//FUNCTION 01
#define PWM1_CHN5_PIN1   PORT_2_PIN_4	//FUNCTION 01
#define PWM1_CHN6_PIN1   PORT_2_PIN_5	//FUNCTION 01

#define PWM1_CHN2_PIN2	PORT_3_PIN_25	//FUNCTION 11
#define PWM1_CHN3_PIN2	PORT_3_PIN_26	//FUNCTION 11

#define PCAP1_CHN0_PIN0	PORT_1_PIN_28	//FUNCTION 10
#define PCAP1_CHN0_PIN1  PORT_2_PIN_6	//FUNCTION 01
#define PCAP1_CHN1_PIN	PORT_1_PIN_29	//FUNCTION 10


// MOTOR CONTROL PWM
//MOTOR CONTROL 0
#define MCO0_CHNA_PIN	PORT_1_PIN_19	//FUNCTION 01
#define MCO0_CHNB_PIN	PORT_1_PIN_22	//FUNCTION 01
#define MCO0_ABORT_PIN	PORT_1_PIN_21	//FUNCTION 01

#define MCI0_CHN0_PIN	PORT_1_PIN_20	//FUNCTION 01
#define MCI0_CHN1_PIN	PORT_1_PIN_23	//FUNCTION 01
#define MCI0_CHN2_PIN	PORT_1_PIN_24	//FUNCTION 01

//MOTOR CONTROL 1
#define MCO1_CHNA_PIN	PORT_1_PIN_25	//FUNCTION 01
#define MCO1_CHNB_PIN	PORT_1_PIN_26	//FUNCTION 01

//MOTOR CONTROL 2
#define MCO2_CHNA_PIN   	PORT_1_PIN_28	//FUNCTION 01
#define MCO2_CHNB_PIN   	PORT_1_PIN_29	//FUNCTION 01

/********************************************************************/
/*								CLOCK								*/
/********************************************************************/

#define CLKOUT_PIN	    PORT_1_PIN_27	//FUNCTION 01
#define TRACECLK_PIN	  	PORT_2_PIN_6	//FUNCTION 01
#define STCLK_PIN		PORT_3_PIN_26	//FUNCTION 01

/********************************************************************/
/*								TRACEDATA							*/
/********************************************************************/

#define TRACEDATA_BIT0	PORT_2_PIN_5	//FUNCTION 11
#define TRACEDATA_BIT1	PORT_2_PIN_4	//FUNCTION 11
#define TRACEDATA_BIT2	PORT_2_PIN_3	//FUNCTION 11
#define TRACEDATA_BIT3	PORT_2_PIN_2	//FUNCTION 11

/********************************************************************/
/*								INTERRUPT							*/
/********************************************************************/

//EXTERNAL INTERRUPT
#define EINT0_PIN       	PORT_2_PIN_10	//FUNCTION 01
#define EINT1_PIN       	PORT_2_PIN_11	//FUNCTION 01
#define EINT2_PIN		PORT_2_PIN_12	//FUNCTION 01
#define EINT3_PIN		PORT_2_PIN_13	//FUNCTION 01

//NO MASCARABLE INTERRUPT
#define NMI_PIN	        PORT_2_PIN_10	//FUNCTION 10


#endif /* TOTAL_INIT_H_ */



/************************************************************************************/
/*										S A T O R									*/
/*										A R E P O									*/
/*										T E N E T									*/
/*										O P E R A									*/
/*										R O T A S									*/
/************************************************************************************/

