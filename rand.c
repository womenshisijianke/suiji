#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<student_info.h>
main()
{
	int i,j;
	srand((int)time(0));
	for(i=0;i<40;i++)
	{
		j=1+(int)(10.0*rand()/(RAND_MAX+1.0));
		PRINTF("%d",J);
	}
}

