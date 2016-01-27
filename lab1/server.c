// NYU CS 480-008 | Spring 2016 | Lab 1
// Skeleton code for server.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sendfile.h>
#include <sys/fcntl.h>

#define MAX_THREAD_COUNT 16

/*
 * int parse_request(...)
 *
 *  This function parses an HTTP request passed in
 *  by the 'request' argument. It updates the 'uri'
 *  string (assume enough memory has been allocated)
 *  and returns 200 in the event of success or the
 *  appropriate HTTP error code in the event of 
 *  failure:
 *    
 *    '400' Bad Request  
 *       If the request is inappropriately
 *       formatted.
 *
 *    '501' Not Implemented 
 *       If the request method is not GET.
 *
 *    '418' I'm a teapot
 *       In the event the server is actually
 *       a teapot.
 */
int parse_request(char * request, char * uri) {
  // Silence 'unused' error. Feel free to remove.
  (void) request;
  (void) uri;

  // Your code here

  return 501;
}

/*
 * int send_response_header(...)
 *
 *  This function builds and sends a properly-
 *  formatted HTTP response header to the file
 *  descriptor given by the first argument. Feel
 *  free to change the arguments if you want to,
 *  but make sure your code compiles!
 *
 *  For reference, the form of a response is:
 *
 *  HTTP/[VERSION] [CODE] [TEXT]
 *
 *  where 
 *  
 *  [VERSION] is now 1.1
 *  [CODE] should be passed in
 *  [TEXT] should match [CODE] according
 *         to the specification outlined in 
 *         section 10 of RFC 2616
 *
 *  The response header should be followed by a
 *  double return (CRLF CRLF) just as the request
 *  is terminated by double return. Please see 
 *  the lab description for more information.
 *
 *  Returns:
 *   0 if the response header was sent successfully
 *     (though note that the response header may contain an error code!)
 *  -1 otherwise
 *
 */
int send_response_header(int fd, int code, int length, int MIMEtype) {
  // Silence 'unused' error. Feel free to remove.
  (void) fd;
  (void) code;
  (void) length;
  (void) MIMEtype;

  // Your code here

}

/*
 * void send_file(...)
 *
 *  This function sends the file at 'path'
 *  to the socket specified by 'fd'. You 
 *  may assume 'fd' can be written to and
 *  that the file at 'path' exists.
 */
void send_file(int fd, char * path) {
  // Silence 'unused' error. Feel free to remove.
  (void) fd;
  (void) path;

  // Your code here

} 

/*
 * void * handle_client(...) 
 *
 *  EXTRA CREDIT.
 *
 *  This function should be used as the
 *  start routine for any helper threads
 *  you spawn upon making a connection to
 *  a client. 
 *
 *  It should:
 *
 *   - Parse the request
 *   - Stat the resource
 *   - Build/send the response header
 *   - Send the resource (if possible)
 *   - Close the client socket
 *
 */
void * handle_client(void * fd) {
  // Silence 'unused' error. Feel free to remove.
  (void) fd;

  // Your code here

  return NULL;
}


int main(int argc, char **argv) {

  // Get port number from command line arguements
  int port;
  if (argc != 2) {
    fprintf(stderr, "usage: %s <port>\n", argv[0]);
    exit(1);
  }
  port = atoi(argv[1]);

  /*
   * EXERCISE 4
   *
   *  Set up our dispatch socket and fill out
   *  the sockaddr_in structure with appropriate
   *  information. Then, bind the socket to a 
   *  port and set it ready for connection.
   *
   *  You'll need the following system calls:
   *   - socket(...)
   *   - htonl(...)
   *   - htons(...)
   *   - bind(...)
   *   - listen(...)
   */
  int listen_fd;
  struct sockaddr_in server_addr;

  // Your code here


  /*
   * EXERCISE 5
   * 
   *  Set up the main loop. This should 
   *  only require 1-2 lines of code, but
   *  be careful to accept the connection
   *  in the 'right' place. Remember that
   *  the server should run until it is
   *  killed -- not die after it responds
   *  to a client request.
   *
   *  You'll need the following system calls:
   *   - accept(...)
   *   - close(...)
   */ 

  // This is the main loop. Run until the end of time!
  while (1) {

    /*
     * EXERCISE 6
     *
     *  Add code to implement the echoing
     *  behavior: receive text from the
     *  remote client and then 'echo' back
     *  the same text to the same socket.
     *
     *  You'll need to use the following 
     *  calls:
     *   - recv(...)
     *   - send(...)
     *  and possibly
     *   - write() or printf().
     *
     *  You can access systems calls'
     *  man-page entries with
     *      'man 2 <syscall>'.
     *  and standard C functions with 
     *      'man 3 <function>'
     */

    // Your code here

  }
}
