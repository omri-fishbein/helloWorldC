/*
 ============================================================================
 Name        : HolloWoldC.c
 Author      : omri fishbein
 Version     :
 Copyright   : this is mine
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "HelloWorldC.h"
//#include <stdio.h>
//#include <stdlib.h>

int main(void) {
	puts("!!!Hello World C code 1!!!"); /* prints !!!Hello WorldC!!! */
	printf("!!!Hello World C code 2!!!"); /* prints !!!Hello WorldC!!! */
	printf("\n!!!Hello World C code 3!!!"); /* prints !!!Hello WorldC!!! */
	printf("\n!!!Hello World C code 4!!!"); /* prints !!!Hello WorldC!!! */
	printf("\n!!!Hello World C code 5!!!"); /* prints !!!Hello WorldC!!! */

	PrintGreeting("Israel 1");
	PrintGreeting("Israel 2");
	PrintGreeting("Israel 3");
	return EXIT_SUCCESS;
}

void PrintGreeting(char* var)
{
	printf("\nhello, %s", var);
}//PrintGreeting(...)
