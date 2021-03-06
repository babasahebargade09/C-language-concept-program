﻿// This program demonstates goto 
// Author: Babasaheb Argade
#include<stdio.h>

int main()
{
	// The goto statement transfers control to a label. 
	// The given label must reside in the same function.

	/*
		Syntax of goto : 

		goto label;
		.............
		............. 
		............. 
		label: statement;

	*/
	int i, j;

	for ( i = 0; i < 10; i++ )
	{
		printf( "Outer loop executing. i = %d\n", i );
		for ( j = 0; j < 3; j++ )
		{
			printf( "\tInner loop executing. j = %d\n", j );
			if ( i == 5 )
			{
				goto stop;
			}
		}
	}

	/* This message does not print: */
	printf( "Loop exited. i = %d\n", i );

	stop: printf( "Jumped to stop. i = %d\n", i );

	Label : printf("Stament in label is always executed\n");

	return 0;
}
