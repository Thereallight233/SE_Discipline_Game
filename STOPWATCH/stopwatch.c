#include <stdio.h>
#include <unistd.h>

/* main - Entry point of our program
 *
 *Description: A simple stopwatch program written in c
 *using loops and conditional statement
 *
 *Return- Always (0).
 * */
int main(void)
{
	int hours = 0, minutes = 0, seconds = 0, milliseconds = 0; //initialize and declare variables and set al to 0

	while(1){
		printf("\r\t%.2d HOURS : %.2d MINUTES : %.2d SECONDS : %.2d", hours, minutes,seconds, milliseconds);//Display the current time in the fprmat HH:MM:SS:MS
		fflush(stdout);
		usleep(1000);//sets a delay
		++milliseconds;
		if(milliseconds == 999)
		{
			milliseconds = 0;
			++seconds;
		}
		if(seconds == 60)
		{
			milliseconds = 0;
			seconds = 0;
			++minutes;
		}
		if(minutes == 60)
		{
			milliseconds = 0;
			seconds = 0;
			minutes = 0;
			++hours;
		}
	}
	return 0;
}
