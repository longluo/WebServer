#include <stdio.h>

#include <dirent.h>
#include <unistd.h>

#include <iostream>
#include <string>

#include <errno.h>

#include <sys/socket.h>


int main(int argc, const char *argv[]) {
    // Create a socket
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("webserver (socket)");
        return 1;
    }
	
    printf("socket created successfully\n");

	return 0;
}
