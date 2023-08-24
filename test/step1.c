#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#include "net.h"
#include "util.h"

#include "driver/dummy.h"

#include "test.h"

static volatile sig_atomic_t terminate;

static void on_signal(int s) {
  (void)s;
  terminate = 1;
}

int main(int argc, char *argv[]) {}
