#include<stdio.h>

#include"rfi.h"

/* SERVER SIDE */

void printRange(void *data, int start, int end, int step)
{
	printf("%d -> %d : %d\n", start, end, step);
}

void touch(void *data)
{
	printf("Touched!\n");
}

HOST(
	SHARED_FUNC(printRange, int, int, int),
	SHARED_FUNC(touch)
);

/* CLIENT SIDE */

void send_to_server(char *buffer)
{
	RFI_called(NULL, buffer); /* Loopback */
}

SERVER(
	Remote,
	REMOTE_FUNC(printRange, int, int, int),
	REMOTE_FUNC(touch)
);

int main(int argc, char **argv)
{
	Remote *remote = Remote_new(send_to_server);
	remote->printRange(remote, 59, 30, 32);
	remote->touch(remote);
	Remote_free(remote);

	return 0;
}
