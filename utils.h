/*
 * =====================================================================================
 *
 *       Filename:  utils.h
 *
 *    Description:  This file contains the decalaration of all enumerations used in this file
 *
 *        Version:  1.0
 *        Created:  Wednesday 18 September 2019 02:38:12  IST
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author:  Jamil Hasibul- SIU855574994
 *        This program is free software: you can redistribute it and/or modify
 *        it under the terms of the GNU General Public License as published by
 *        the Free Software Foundation, version 3.
 *
 *        This program is distributed in the hope that it will be useful, but
 *        WITHOUT ANY WARRANTY; without even the implied warranty of
 *        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *        General Public License for more details.
 *
 *        You should have received a copy of the GNU General Public License
 *        along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * =====================================================================================
 */


#ifndef __UTILS__
#define __UTILS__

#include <stdint.h>

typedef enum{

  FALSE,
  TRUE
} bool_t;


#define IS_BIT_SET(n, pos)      ((n & (1 << (pos))) != 0)
#define TOGGLE_BIT(n, pos)      (n = n ^ (1 << (pos)))
#define COMPLEMENT(num)         (num = num ^ 0xFFFFFFFF)
#define UNSET_BIT(n, pos)       (n = n & ((1 << pos) ^ 0xFFFFFFFF))
#define SET_BIT(n, pos)         (n = n | 1 << pos)

void
apply_mask(char *prefix, char mask, char *str_prefix);

void
layer2_fill_with_broadcast_mac(char *mac_array);

#define IS_MAC_BROADCAST_ADDR(mac)   \
    (mac[0] == 0xFF  &&  mac[1] == 0xFF && mac[2] == 0xFF && \
     mac[3] == 0xFF  &&  mac[4] == 0xFF && mac[5] == 0xFF)

char *
tcp_ip_covert_ip_n_to_p(uint32_t ip_addr,
        char *output_buffer);

uint32_t
tcp_ip_covert_ip_p_to_n(char *ip_addr);


#endif /* __UTILS__ */
