/*! @file : K32L2B31A_Project.c
 * @author  carlos mario gonzalez pertuz
 * @version 0.0.000
 * @date    23/08/2021
 * @brief   Funcion principal main
 * @details
 *v0.0.000	Proyecto base creado usando MCUXpresso
 *
 *
 */
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "K32L2B31A.h"
#include "fsl_debug_console.h"
#include "leds.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Private Prototypes
 ******************************************************************************/

/*******************************************************************************
 * External vars
 ******************************************************************************/

/*******************************************************************************
 * Local vars
 ******************************************************************************/
unsigned int test_global_var=100;
float dato_float=3.1614;
int cont =0;
bool auxi= false;
/*******************************************************************************
 * Private Source Code
 ******************************************************************************/
/*!
 * @brief genera bloqueo de microcontrolador por tiempo fijo
 *
 */
bool contador_led_verde(void){
	cont=cont+1;
	if(cont==10){
		auxi=true;
	}
	if(cont==20){
		auxi=false;
		cont=0;
	}
	return(auxi);
}
void delay_block(){
	uint32_t i;
	for (i = 0; i < 0xFFFFF; ++i) {

	}
}
int main(void) {
	 int i = 0 ; /* Force the counter to be placed into memory. */

    /* Init board hardware. */
	bool bandera;
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif

    /*PRINTF("Hello World\r\n");
    PRINTF("test_global_var:%d\r\n",test_global_var);
    PRINTF("dato float:%g",dato_float);*/


    /* Enter an infinite loop, just incrementing a counter. */
    while(1) {
        i++ ;
        printf("i:%u\r\n",i);
        led_on_gree();
        delay_block();
        led_off_gree();
        delay_block();
        bandera = contador_led_verde();
        if(bandera){
        	led_on_red();
        }else{
        	led_off_red();
        }

    }
    return 0 ;
}
