/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.c
 *
 * Description: Source file for Port Module.
 *
 * Author: Amr Ramadan
 ******************************************************************************/

#include "Port.h"
#include "Dio_Regs.h"
#include "Det.h"

STATIC Port_ConfigPins * PortConf = NULL_PTR;
STATIC uint8 Port_Status = PORT_NOT_INITIALIZED;

void Port_Init(const Port_ConfigType* ConfigPtr) {
#if (PORT_DEV_ERROR_DETECT == STD_ON)
	if (ConfigPtr == NULL_PTR) {
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		PORT_E_PARAM_CONFIG);
	} else
#endif
	{
		PortConf = ConfigPtr->Pins;
		Port_Status = PORT_INITIALIZED;

		uint8 * DDR_PTR;
		uint8 * PORT_PTR;
		uint8 Pin_Index;
		for (Pin_Index = 0; Pin_Index < PORT_CONFIGURED_PINS; Pin_Index++) {
			switch (PortConf[Pin_Index].port) {
			case 0:
				PORT_PTR = &PORTA_REG;
				break;
			case 1:
				PORT_PTR = &PORTB_REG;
				break;
			case 2:
				PORT_PTR = &PORTC_REG;
				break;
			case 3:
				PORT_PTR = &PORTD_REG;
				break;
			}
			switch (PortConf[Pin_Index].port) {
			case 0:
				DDR_PTR = &DDRA_REG;
				break;
			case 1:
				DDR_PTR = &DDRB_REG;
				break;
			case 2:
				DDR_PTR = &DDRC_REG;
				break;
			case 3:
				DDR_PTR = &DDRD_REG;
				break;
			}

			if (PortConf[Pin_Index].level == PORT_PIN_LEVEL_HIGH) {
				SET_BIT(*PORT_PTR, PortConf[Pin_Index].pin_num);
			} else {
				CLEAR_BIT(*PORT_PTR, PortConf[Pin_Index].pin_num);
			}

			if (PortConf[Pin_Index].direction == PORT_PIN_LEVEL_HIGH) {
				SET_BIT(*DDR_PTR, PortConf[Pin_Index].pin_num);
			} else {
				CLEAR_BIT(*DDR_PTR, PortConf[Pin_Index].pin_num);
			}

		}
	}
}

void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction)
{
#if (PORT_DEV_ERROR_DETECT == STD_ON)
	if (Port_Status == PORT_NOT_INITIALIZED)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		PORT_E_UNINIT);
	}
	else
	{

	}
	if (Pin >= PORT_CONFIGURED_PINS)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		PORT_E_PARAM_PIN);
	} else
	{

	}
#endif

	Port_Status = PORT_INITIALIZED;
	uint8 * DDR_PTR;
	switch (PortConf[Pin].port) {
	case 0:
		DDR_PTR = &DDRA_REG;
		break;
	case 1:
		DDR_PTR = &DDRB_REG;
		break;
	case 2:
		DDR_PTR = &DDRC_REG;
		break;
	case 3:
		DDR_PTR = &DDRD_REG;
		break;
	}

	if (Direction == PORT_PIN_OUT)
	{
		SET_BIT(*DDR_PTR, PortConf[Pin].pin_num);
	}
	else if(Direction == PORT_PIN_IN)
	{
		CLEAR_BIT(*DDR_PTR, PortConf[Pin].pin_num);
	}

}

void Port_GetVersionInfo( Std_VersionInfoType* versioninfo )
{
#if(PORT_DEV_ERROR_DETECT == STD_ON)
	if(versioninfo == NULL_PTR)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				Port_GET_VERSION_INFO_SID, PORT_E_PARAM_POINTER);
	}
	else
	{
#endif
	versioninfo ->vendorID = (uint16)PORT_VENDOR_ID;
	versioninfo ->moduleID = (uint16)PORT_MODULE_ID;
	versioninfo ->sw_major_version = (uint8)PORT_SW_MAJOR_VERSION;
	versioninfo ->sw_minor_version = (uint8)PORT_SW_MINOR_VERSION;
	versioninfo ->sw_patch_version = (uint8)PORT_SW_PATCH_VERSION;
}
}

