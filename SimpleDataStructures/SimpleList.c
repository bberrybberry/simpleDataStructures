/*
 * SimpleList.c
 *
 *  Created on: Jul 2, 2017
 *      Author: bbhig
 */

#include "SimpleList.h"

#define INIT_MAX 3

void init_List(List_t* list, void (*compareFn)(void* item1, void* item2)){
    list->compareFn = compareFn;
    list->size = 0;
    list->max = INIT_MAX;
    list->data = calloc(INIT_MAX, sizeof(int));//arr;
    list->resizeRate = 2;
}

void add_List(List_t* list, void* item){
    list->data[list->size] = (int*)item;//[list->size] = *item;
    list->size++;
}

void* get_List(List_t* list, unsigned int index){
    return (void*)list->data[index];
}
