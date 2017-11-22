#include "main.h"

void operatorControl()
{
	TaskHandle Task1 = taskCreate(TaskTest, TASK_DEFAULT_STACK_SIZE, NULL, TASK_PRIORITY_DEFAULT);
	while (1)
	{
		//User Controll Code
		delay(20);
	}
	taskDelete(Task1);
}
