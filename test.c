#include "student_info.h"
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,j,m=0,flag=0,a[40];
    srand((int)time(0));
     for(i=0;i<=39;i++)
     {
      j=rand()%40;
       { printf("%d-%s",info[j].id,info[j].name);m++;
         if(m%4==0)  printf("\n");
       }
      }
	return 0;
}
