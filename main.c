#include<stdio.h>

#include"rfi.h"

/* SERVER SIDE */

void printMessage(void *data, char *message)
{
	printf("%s\n", message);
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
	SHARED_FUNC(printMessage, char*),
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
	REMOTE_FUNC(printMessage, char*),
	REMOTE_FUNC(printRange, int, int, int),
	REMOTE_FUNC(touch)
);

int main(int argc, char **argv)
{
	Remote *remote = Remote_new(send_to_server);
	remote->touch(remote);
	remote->printRange(remote, 59, 30, 32);
	remote->printMessage(remote, "Magic.");
	Remote_free(remote);

	return 0;
}
