#include <msp430.h> 

/**
 * @file
 * @group demo
 * @mainpage
 * @author Breanna Higgins
 *      Created 7/2/2017
 * @brief This main function is to test the Simple Data Structures Library. It demostrates the usage of
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    printf("Hello World");
	
	return 0;
}
