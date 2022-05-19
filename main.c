#include <stdio.h>
#include "pico/stdio"

int main(){
    stdio_init_all();
    gpio_init(25);
    gpio_set_dir(25,true);
    gpio_init(11);
    gpio_set_dir(11,false);
    while(1){
        char pin2=gpio_get(25);
        char pin1=gpio_get(11);
        if (pin1==1 && pin2==0) {
            gpio_put(25, true);
        }
        if (pin1==1 && pin2==1) {
            gpio_put(25,false);
        }
        sleep_ms(500);    

    }
    
}
