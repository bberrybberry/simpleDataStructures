/*
 * SimpleList.h
 *
 *  Created on: Jul 2, 2017
 *      Author: bbhig
 */

#ifndef SIMPLEDATASTRUCTURES_SIMPLELIST_H_
#define SIMPLEDATASTRUCTURES_SIMPLELIST_H_

//***********************************************************************************
//
// INCLUDES
//
//***********************************************************************************
//for int defintions
#include "stdint.h"

/**
 * @brief
 *
 * TODO
 */
typedef struct{
    int* data; /** < Void pointer for array of data */
    uint16_t dataSize; /** < Size of the data structures held */
    //data is int* to avoid arithmetic error on void pointer
    uint16_t size; /** < Count of current items in the list */
    uint8_t resizeRate; /** < Amount by how much to multiply the size of the array on a resize */
    void (*compareFn)(void* item1, void* item2); /** < Function pointer to compare function for type of data used */
    void (*largerFn)(void* item1, void* item2); /** < Function pointer to return the larger of the two data items compared */
    uint8_t max; /** < Max size of underlying data structure until the structure needs to be resized */
} List_t;


/**
 * @fn
 * @brief TODO
 */
void init_List(List_t* list, void (*compareFn)(void* item1, void* item2), void (*largerFn)(void* item1, void* item2), unsigned int dataSize);


/**
 * @fn
 * @brief TODO
 */
void add_List(List_t* list, void* item);

/**
 * TODO
 */
void* get_List(List_t* list, unsigned int index);

/**
 * TODO
 */
void set_List(List_t* list, unsigned int index, void* item);

/**
 * TODO
 */
void clear_List(List_t* list);

#endif /* SIMPLEDATASTRUCTURES_SIMPLELIST_H_ */
