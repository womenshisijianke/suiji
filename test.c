#include "student_info.h"
#include <stdio.h>

int main()
{
	for (int i = 0; i < sizeof(info)/sizeof(struct student); ++i) {
		printf("%d - %s\n", info[i].id, info[i].name);
	}
	return 0;
}
