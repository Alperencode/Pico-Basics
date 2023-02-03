#include "pico/stdlib.h"
#include <stdio.h>
#define LED_PIN25 25
#define LED_PIN14 14

int main() {
    stdio_init_all();

    gpio_init(LED_PIN25);
    gpio_init(LED_PIN14);

    gpio_set_dir(LED_PIN25, GPIO_OUT);
    gpio_set_dir(LED_PIN14, GPIO_OUT);
    
    while(true){
        gpio_put(LED_PIN25, 1);
        gpio_put(LED_PIN14, 1);
        sleep_ms(500);
        gpio_put(LED_PIN25, 0);
        gpio_put(LED_PIN14, 0);
        sleep_ms(500);
    }

    return 0;
}