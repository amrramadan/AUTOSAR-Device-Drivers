/*
 * Port_PBcfg.h
 *
 *  Created on: Nov 8, 2019
 *      Author: Amr Ramadan
 */
#include "Port.h"

#ifndef PORT_PBCFG_H_
#define PORT_PBCFG_H_
/*Module Version*/
#define PORT_PBCFG_SW_MAJOR_VERSION		(1U)
#define PORT_PBCFG_SW_MINOR_VERSION		(0U)
#define PORT_PBCFG_SW_PATCH_VERSION		(0U)

/*AUTOSAR Version*/
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION		(4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION		(0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION		(3U)

/* AUTOSAR Version checking between PORT_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port_PBcfg.c does not match the expected version"
#endif

/* Software Version checking between PORT_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Port_PBcfg.c does not match the expected version"
#endif

const Port_ConfigType Port_Configuration = {
		PORTCFG_PORTA,PORTCFG_PIN0,PORTA_PIN0_DIRECTION,PORTA_PIN0_LEVEL,
		PORTCFG_PORTA,PORTCFG_PIN1,PORTA_PIN1_DIRECTION,PORTA_PIN1_LEVEL,
		PORTCFG_PORTA,PORTCFG_PIN2,PORTA_PIN2_DIRECTION,PORTA_PIN2_LEVEL,
		PORTCFG_PORTA,PORTCFG_PIN3,PORTA_PIN3_DIRECTION,PORTA_PIN3_LEVEL,
		PORTCFG_PORTA,PORTCFG_PIN4,PORTA_PIN4_DIRECTION,PORTA_PIN4_LEVEL,
		PORTCFG_PORTA,PORTCFG_PIN5,PORTA_PIN5_DIRECTION,PORTA_PIN5_LEVEL,
		PORTCFG_PORTA,PORTCFG_PIN6,PORTA_PIN6_DIRECTION,PORTA_PIN6_LEVEL,
		PORTCFG_PORTA,PORTCFG_PIN7,PORTA_PIN7_DIRECTION,PORTA_PIN7_LEVEL,

		PORTCFG_PORTB,PORTCFG_PIN0,PORTB_PIN0_DIRECTION,PORTB_PIN0_LEVEL,
		PORTCFG_PORTB,PORTCFG_PIN1,PORTB_PIN1_DIRECTION,PORTB_PIN1_LEVEL,
		PORTCFG_PORTB,PORTCFG_PIN2,PORTB_PIN2_DIRECTION,PORTB_PIN2_LEVEL,
		PORTCFG_PORTB,PORTCFG_PIN3,PORTB_PIN3_DIRECTION,PORTB_PIN3_LEVEL,
		PORTCFG_PORTB,PORTCFG_PIN4,PORTB_PIN4_DIRECTION,PORTB_PIN4_LEVEL,
		PORTCFG_PORTB,PORTCFG_PIN5,PORTB_PIN5_DIRECTION,PORTB_PIN5_LEVEL,
		PORTCFG_PORTB,PORTCFG_PIN6,PORTB_PIN6_DIRECTION,PORTB_PIN6_LEVEL,
		PORTCFG_PORTB,PORTCFG_PIN7,PORTB_PIN7_DIRECTION,PORTB_PIN7_LEVEL,

		PORTCFG_PORTC,PORTCFG_PIN0,PORTC_PIN0_DIRECTION,PORTC_PIN0_LEVEL,
		PORTCFG_PORTC,PORTCFG_PIN1,PORTC_PIN1_DIRECTION,PORTC_PIN1_LEVEL,
		PORTCFG_PORTC,PORTCFG_PIN2,PORTC_PIN2_DIRECTION,PORTC_PIN2_LEVEL,
		PORTCFG_PORTC,PORTCFG_PIN3,PORTC_PIN3_DIRECTION,PORTC_PIN3_LEVEL,
		PORTCFG_PORTC,PORTCFG_PIN4,PORTC_PIN4_DIRECTION,PORTC_PIN4_LEVEL,
		PORTCFG_PORTC,PORTCFG_PIN5,PORTC_PIN5_DIRECTION,PORTC_PIN5_LEVEL,
		PORTCFG_PORTC,PORTCFG_PIN6,PORTC_PIN6_DIRECTION,PORTC_PIN6_LEVEL,
		PORTCFG_PORTC,PORTCFG_PIN7,PORTC_PIN7_DIRECTION,PORTC_PIN7_LEVEL,

		PORTCFG_PORTD,PORTCFG_PIN0,PORTD_PIN0_DIRECTION,PORTD_PIN0_LEVEL,
		PORTCFG_PORTD,PORTCFG_PIN1,PORTD_PIN1_DIRECTION,PORTD_PIN1_LEVEL,
		PORTCFG_PORTD,PORTCFG_PIN2,PORTD_PIN2_DIRECTION,PORTD_PIN2_LEVEL,
		PORTCFG_PORTD,PORTCFG_PIN3,PORTD_PIN3_DIRECTION,PORTD_PIN3_LEVEL,
		PORTCFG_PORTD,PORTCFG_PIN4,PORTD_PIN4_DIRECTION,PORTD_PIN4_LEVEL,
		PORTCFG_PORTD,PORTCFG_PIN5,PORTD_PIN5_DIRECTION,PORTD_PIN5_LEVEL,
		PORTCFG_PORTD,PORTCFG_PIN6,PORTD_PIN6_DIRECTION,PORTD_PIN6_LEVEL,
		PORTCFG_PORTD,PORTCFG_PIN7,PORTD_PIN7_DIRECTION,PORTD_PIN7_LEVEL,
};

#endif /* PORT_PBCFG_H_ */
