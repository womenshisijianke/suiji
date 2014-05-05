#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<student_info.h>
main()
{
        int i,j;
    for (int i = 0; i < sizeof(info)/sizeof(struct student); ++i) {
                printf("%d - %s\n", info[i].id, info[i].name);
        }
        return 0;
     int info[6][10] = {0};
 int i,j;
 srand(time(NULL));
 for(i = 1;i <= 60;i++)
 {
  j = rand() % 60;
  while(*(info[0] + j % 60) != 0)
   j++;
  *(info[0] + j % 60) = i;
 }
 for(i=0;i<10;i++)
 { printf("第%d组：",i+1);
  for(j=0;j<4;j++)
   printf("%d ",info[i][j]);
  printf("\n");
}

}







}

