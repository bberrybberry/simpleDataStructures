/*
 * SimpleList.c
 *
 *  Created on: Jul 2, 2017
 *      Author: bbhig
 */

#include "SimpleList.h"
#include <stdlib.h> //for memory allocation

#define INIT_MAX 3

//*********************************************************************************
//
// Private functions
//
//*********************************************************************************
static void resize_List(List_t* list);
static void resize_List(List_t* list){
    if(list->size >= list->max){
        list->max *= list-> resizeRate;
        list->data = realloc(list->data, list->dataSize * list->max);
    }
}

void init_List(List_t* list,
               void (*compareFn)(void* item1, void* item2),
               void (*largerFn)(void* item1, void* item2),
               unsigned int dataSize){
    list->compareFn = compareFn;
    list->largerFn = largerFn;
    list->size = 0;
    list->max = INIT_MAX;
    list->data = calloc(INIT_MAX, dataSize);
    list->dataSize = dataSize;
    list->resizeRate = 2;
}

void add_List(List_t* list, void* item){
    list->data[list->size] = (void*)item;//[list->size] = *item;
    list->size++;
}

void* get_List(List_t* list, unsigned int index){
    return list->data[index];
}

void set_List(List_t* list, unsigned int index, void* item){
    list->data[index] = item;
}

void clear_List(List_t* list){
    free(list->data);
    list->data = calloc(INIT_MAX, list->dataSize);
}
