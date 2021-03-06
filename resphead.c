/*

  RESPHEAD.C
  ==========
  CWeb v1.0.1
  N00D13 Alex Wellnitz

*/


#include <string.h>
#include <unistd.h>

#include <stdio.h>

#include "resphead.h"
#include "helper.h"


/*  Outputs HTTP response headers  */

int Output_HTTP_Headers(int conn, struct ReqInfo * reqinfo) {

    char buffer[100];

    sprintf(buffer, "HTTP/1.0 %d OK\r\n", reqinfo->status);
    Writeline(conn, buffer, strlen(buffer));

    Writeline(conn, "Server: PGWebServ v0.1\r\n", 24);
    Writeline(conn, "Content-Type: text/html\r\n", 25);
    Writeline(conn, "\r\n", 2);

    return 0;
}



