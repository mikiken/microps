#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#include "net.h"
#include "util.h"

#define DUMMY_MTU UINT16_MAX /* maximum size of IP datagram */

static int dummy_transmit(struct net_device *dev, uint16_t type, const uint8_t *data, size_t len, const void *dst) {}

static struct net_device_ops dummy_ops = {
    .transmit = dummy_transmit,
};

struct net_device *dummy_init(void) {}