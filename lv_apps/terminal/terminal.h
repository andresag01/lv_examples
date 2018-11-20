/**
 * @file terminal.h
 *
 */

#ifndef TERMINAL_H
#define TERMINAL_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../../../lv_ex_conf.h"
#if USE_LV_DEMO

#include "../../../lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Open a terminal
 * @return pointer to the terminal window
 */
lv_obj_t * terminal_create(void);

/**
 * Stop the periodic task that updates the terminal string
 */
void terminal_kill(void);

/**
 * Wrapper to add data to the terminal from a periodic task
 * @param params pointer to string to add to the terminal
 */
void terminal_add_ext(void * params);

/**
 * Add data to the terminal
 * @param txt_in character sting to add to the terminal
 */
void terminal_add(const char * txt_in);

/**********************
 *      MACROS
 **********************/

#endif /*USE_LV_TERMINAL*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV_TERMINAL_H */
