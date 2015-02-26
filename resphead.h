/*

  RESPHEAD.H
  ==========
  CWeb v1.0.1
  N00D13 Alex Wellnitz

*/



#ifndef PG_RESPHEAD_H
#define PG_RESPHEAD_H


#include "reqhead.h"          /*  for struct ReqInfo  */


/*  Function prototypes  */

int Output_HTTP_Headers(int conn, struct ReqInfo * reqinfo);


#endif  /*  PG_RESPHEAD_H  */
