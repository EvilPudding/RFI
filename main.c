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

int getIncrement(void *data, int num)
{
	return num + 1;
}

/* LOCAL_HEADER(Local); */
LOCAL(Local,
	SHARED_FUNC(void, printMessage, char*, char*),
	SHARED_FUNC(void, printRange, int, int, int),
	SHARED_FUNC(void, touch),
	SHARED_FUNC(int, getIncrement, int)
);

CHAR_VEC *server_received(void *data, char *buffer, size_t size)
{
	return Local_called(NULL, buffer, size);
}

/* CLIENT SIDE */

CHAR_VEC *request_to_server(void *data, char *buffer, size_t size)
{
	return server_received(NULL, buffer, size);
}

#if 0
REMOTE_HEADER(
	Remote,
	REMOTE_FUNC(void, printMessage, char*, char*),
	REMOTE_FUNC(void, printRange, int, int, int),
	REMOTE_FUNC(void, touch)
);
REMOTE_OBJECT(
	Remote,
	REMOTE_FUNC(void, printMessage, char*, char*),
	REMOTE_FUNC(void, printRange, int, int, int),
	REMOTE_FUNC(void, touch),
	REMOTE_FUNC(int, getIncrement)
);
#else
REMOTE(
	Remote,
	REMOTE_FUNC(void, printMessage, char*, char*),
	REMOTE_FUNC(void, printRange, int, int, int),
	REMOTE_FUNC(void, touch),
	REMOTE_FUNC(int, getIncrement, int)
);
#endif

int main(int argc, char **argv)
{
	Remote *remote = Remote_new(request_to_server, NULL);
	remote->touch(remote);
	remote->printRange(remote, 59, 30, 32);
	remote->printMessage(remote, "Hello ", "World!");
	printf("Increment %d\n", remote->getIncrement(remote, 10));
	Remote_free(remote);

	return 0;
}
