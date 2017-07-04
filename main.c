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
 * </br>
 * Currently includes these structures:
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
#include <msp430.h>
#include <stdio.h> //for printf
#include "SimpleDataStructures/SimpleList.h"

inline static char compareInts(int* i1, int* i2);
inline static char compareInts(int* i1, int* i2){ return *i1 == *i2; }

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    printf("Hello World\n");
	
    List_t myList;
    init_List(&myList, compareInts);
    add_List(&myList, 15);
    add_List(&myList, 25);

    int a = (int) get_List(&myList, 0);
    printf("a: %d", a);
    int b = (int) get_List(&myList, 1);
    printf("b: %d", b);

    add_List(&myList, 255);

	return 0;
}
