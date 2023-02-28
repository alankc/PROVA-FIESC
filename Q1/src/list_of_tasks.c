/********** Code informaation **********/
/**** Developer: Alan Kunz Cechinel ****/
/**** e-mail: cechinel.a.k@gmail.com ***/
/***************************************/

/* FreeRTOS kernel includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

/* Local includes. */
#include "console.h"
#include "list_of_tasks.h"

/*shared variable*/
SemaphoreHandle_t xVariablesMutex;
int number;

void create_tasks()
{
    number = 0;
    xVariablesMutex = xSemaphoreCreateMutex();
    xTaskCreate(&vTask1, "Task 1", PTHREAD_STACK_MIN, NULL, 1, NULL);
    xTaskCreate(&vTask2, "Task 2", PTHREAD_STACK_MIN, NULL, 1, NULL);
}

void vTask1(void *pvParameters)
{

    TickType_t xLastWakeTime;
    const TickType_t xTime = 500;
    xLastWakeTime = xTaskGetTickCount();

    while (1)
    {
        xSemaphoreTake(xVariablesMutex, portMAX_DELAY);
        int tmp_number = number;
        tmp_number++;
        console_print("Task 1: %d\n", tmp_number);
        number = tmp_number;
        xSemaphoreGive(xVariablesMutex);
        vTaskDelayUntil(&xLastWakeTime, xTime);
    }
}

void vTask2(void *pvParameters)
{
    TickType_t xLastWakeTime;
    const TickType_t xTime = 500;
    xLastWakeTime = xTaskGetTickCount();

    while (1)
    {
        xSemaphoreTake(xVariablesMutex, portMAX_DELAY);
        int tmp_number = number;
        tmp_number--;
        console_print("Task 2: %d\n", tmp_number);
        number = tmp_number;
        xSemaphoreGive(xVariablesMutex);
        vTaskDelayUntil(&xLastWakeTime, xTime);
    }
}