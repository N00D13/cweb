/*

  REQHEAD.H
  =========
  CWeb v1.0.1
  N00D13 Alex Wellnitz

*/



#ifndef PG_REQHEAD_H
#define PG_REQHEAD_H


/*  User-defined data types  */

enum Req_Method { GET, HEAD, UNSUPPORTED };
enum Req_Type   { SIMPLE, FULL };

struct ReqInfo {
    enum Req_Method method;
    enum Req_Type   type;
    char           *referer;
    char           *useragent;
    char           *resource;
    int             status;
};


/*  Global macros/variables  */

#define MAX_REQ_LINE         (1024)


/*  Function prototypes  */

int  Parse_HTTP_Header(char * buffer, struct ReqInfo * reqinfo);
int  Get_Request      (int conn, struct ReqInfo * reqinfo);
void InitReqInfo      (struct ReqInfo * reqinfo);
void FreeReqInfo      (struct ReqInfo * reqinfo);

#endif  /*  PG_REQHEAD_H  */
