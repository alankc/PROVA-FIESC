/********** Code informaation **********/
/**** Developer: Alan Kunz Cechinel ****/
/**** e-mail: cechinel.a.k@gmail.com ***/
/***************************************/

/* Unix includes. */
/* General porpouse includes. */
#include <stdlib.h>
#include <stdio.h>

/* FreeRTOS kernel includes. */
#include "FreeRTOS.h"
#include "task.h"

/* Local includes. */
#include "console.h"
#include "list_of_tasks.h"

#define PTHREAD_STACK_MIN 25

int main(void)
{
    console_init();

    create_tasks();

    vTaskStartScheduler();

    return 0;
}
