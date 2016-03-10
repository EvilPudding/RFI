#include<stdio.h>

#include"rfi.h"

SERVER(
	Server,
	REMOTE_FUNC(printRange, int, int, int),
	REMOTE_FUNC(touch)
);

HOST(
	SHARED_FUNC(printRange, int, int, int),
	SHARED_FUNC(touch)
);

int main(int argc, char **argv)
{
	Server *server = Server_new("127.0.0.1", 5000);
	server->printRange(server, 59, 30, 32);
	server->touch(server);
	Server_free(server);

	return 0;
}
