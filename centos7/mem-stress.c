#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
	/* Allocate 1GB of ram, write repeating patterns. */
	int size = 1024 * 1024 * 1024;

	unsigned char *p = malloc(size);

	for (int i = 0; i < 1024; i++) {
		printf("pid %d memset\n", getpid());
		memset(p, i, size);
	}

	free(p);
	return 0;
}
