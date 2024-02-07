#include "mbed.h"
#include "arm_book_lib.h"

#define DUTY_MIN 0.025
#define DUTY_MAX 0.115
#define PERIOD 0.02

PwmOut servo(PF_9);
int main(){
servo.period(PERIOD); 
servo.write(DUTY_MIN);
while (true) {
    servo.write(DUTY_MIN);
    delay(1500);
    servo.write(DUTY_MAX);
    delay(1500);
}
}