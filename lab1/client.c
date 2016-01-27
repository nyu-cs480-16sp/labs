// NYU CS 480-008 | Spring 2016 | Lab 1
// Skeleton code for client.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>

int main (int argc, char **argv) {

  // Get hostname and port number 
  char * host;
  short port;
  if (argc != 3) {
    fprintf(stderr, "usage: %s <hostname> <port>\n", argv[0]);
    exit(1);
  }
  host = argv[1];
  port = atoi(argv[2]);

  /*
   * EXERCISE 1
   *
   *  Create a socket, set up server information, and 
   *  set up the sockaddr_in struct below. Make sure to
   *  do error checking when appropriate. In response to an 
   *  error, call perror( ... ) and exit
   *  (Type "man perror" for usage.)
   *
   *  You'll need the following functions:
   *   - socket(...)
   *   - gethostbyname(...)
   *   - htons(...)
   */
  int socket_fd = 0;
  struct hostent * server;
  struct sockaddr_in server_addr;

  // Your code here

  /*
   * EXERCISE 2
   *
   *  Connect to the remote server here. You'll need
   *  to use the connect(...) function. Remember to check 
   *  for errors. This one is just one or two lines.
   */

   // Your code here


   // Get a message from the user to send to the server
   ssize_t s;
   size_t len;
   char * buf = NULL;
   printf("Type something to send: ");
   if ( (s = getline(&buf, &len, stdin)) < 0) {
	perror("getline");
        exit(1);
   }

   /* 
    * EXERCISE 3
    *
    *  Write code to do the following:
    *   - Send the string in 'buf' to the server
    *   - Receive a message in reply from the server
    *     and print this reply to the screen.
    *
    *  You will likely need to call the following 
    *  functions:
    *   - send(...)
    *   - recv(...)
    *   - write(...)
    */
    char recvbuf[1024];

    // Your code here

    const char* server_said = "Server_said: ";
    write(1, server_said, strlen(server_said));

    // Rest of your code here


    // Housekeeping here. Always be sure to close
    // any open file descriptors and free any 
    // allocated memory!
    close(socket_fd);
    free(buf);

  return 0;
}
