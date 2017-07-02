#include <msp430.h> 

/**
 * @file main.c
 * @group demo
 * @mainpage
 * @author Breanna Higgins
 *      Created 7/2/2017
 * @brief This main function is to test the Simple Data Structures Library.
 *
 * </br>
 * It demonstrates the usage of the library for applications in embedded systems. It is tested on the MSP430f5529.
 * Current includes these structures:
 *  - NONE
 * The following structures are in development:
 *  - List
 * The following structures are yet to be completed:
 *  - Linked List
 *  - Stack
 *  - Queue
 *  - Double Ended Queue
 *  - Circular Queue
 *  - Circular DE Queue
 *  - Heap
 *  - Binary Search Tree
 *
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    printf("Hello World");
	
	return 0;
}
