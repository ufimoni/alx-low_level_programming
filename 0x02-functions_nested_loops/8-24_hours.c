// aprogram that checks the time which is minute jack bauer starts from 00:00 to 23:59
#include <stdio.h>
void jack_bauer(void){
	for (int hour = 0; hour < 24; hour++){
		for ( int minute = 0; minute < 60; minute++0){
	printf("%0.2d:%0.2d\n",hour,minute);
	}
	}
}
int main (void){
	jack_bauer();
	return 0;
}
