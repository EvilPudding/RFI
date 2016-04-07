#include<stdio.h>

#include"rfi.h"

/* SERVER SIDE */

void printMessage(void *data, char *message, char *message2)
{
	printf("%s%s\n", message, message2);
}

void printRange(void *data, int start, int end, int step)
{
	printf("%d -> %d : %d\n", start, end, step);
}

void touch(void *data)
{
	printf("Touched!\n");
}

HOST(
	SHARED_FUNC(printMessage, char*, char*),
	SHARED_FUNC(printRange, int, int, int),
	SHARED_FUNC(touch)
);

/* CLIENT SIDE */

void send_to_server(void *data, char *buffer, size_t size)
{
	RFI_called(NULL, buffer, size); /* Loopback */
}

REMOTE(
	Remote,
	REMOTE_FUNC(printMessage, char*, char*),
	REMOTE_FUNC(printRange, int, int, int),
	REMOTE_FUNC(touch)
);

int main(int argc, char **argv)
{
	Remote *remote = Remote_new(send_to_server, NULL);
	remote->touch(remote);
	remote->printRange(remote, 59, 30, 32);
	remote->printMessage(remote, "Hello ", "World!");
	Remote_free(remote);

	return 0;
}
