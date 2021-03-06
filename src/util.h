#ifndef __UTIL_H__
#define __UTIL_H__

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#include "common.h"
#include "list.h"
#include "queue.h"
#include "mempool.h"
#include "session.h"
#include "cJSON.h"

void debug_hex_println(char *begin, void* data, uint len);

#endif
