#include <zephyr.h>
#include <logging/log.h>
#include <stdio.h>

LOG_MODULE_REGISTER(main, CONFIG_LOG_DEFAULT_LEVEL);


void main(void)
{   int i=0;
    LOG_INF("HELLO");
    while(true) {
        printf("ROUND %d\n", i);
        i++;
        k_msleep(1000);
    }
}
