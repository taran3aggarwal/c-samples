#include<stdio.h>
#include<windows.h>

int main(void)
{
	char *msg = "This message will be printed in slow motion.";
	int c;
	
	for (c = 0; msg[c] != '\0'; c++) {
		printf("%c", msg[c]);
		Sleep(200);
	}
	
	return 0;
}