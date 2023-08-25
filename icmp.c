#include <stddef.h>
#include <stdint.h>

#include "icmp.h"
#include "ip.h"
#include "util.h"

void icmp_input(const uint8_t *data, size_t len, ip_addr_t src, ip_addr_t dst, struct ip_iface *iface) {}

int icmp_init(void) {}