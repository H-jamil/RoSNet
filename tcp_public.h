/*
 * =====================================================================================
 *
 *       Filename:  tcp_public.h
 *
 *    Description:  This file contains routines and structures which should be exposed to the application for use
 *
 *        Version:  1.0
 *        Created:  05/30/2020 11:13:54 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jamil Hasibul- SIU855574994
 *
 *
 *        This program is free software: you can redistribute it and/or modify it under the terms of the GNU General
 *        Public License as published by the Free Software Foundation, version 3.
 *
 *        This program is distributed in the hope that it will be useful, but
 *        WITHOUT ANY WARRANTY; without even the implied warranty of
 *        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *        General Public License for more details.
 *
 *
 * =====================================================================================
 */

#ifndef __TCP_IP_STACK__
#define __TCP_IP_STACK__

#include <assert.h>
#include <arpa/inet.h> /*for inet_ntop & inet_pton*/
#include <stdint.h>
#include "tcpconst.h"
#include "graph.h"
#include "net.h"
#include "Layer2/layer2.h"
#include "Layer3/layer3.h"
#include "utils.h"
#include "comm.h"
#include "gluethread/glthread.h"
#include "CommandParser/libcli.h"
#include "CommandParser/cmdtlv.h"
#include "cmdcodes.h"

extern graph_t * topo;

#endif /* __TCP_IP_STACK__ */
