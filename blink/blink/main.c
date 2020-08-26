
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
uint8_t a = 0;
int main(void)
{
    DDRA |= 1 << 3;
    while (1) 
    {
		a++;
		PORTA ^= 1 << 3;
		_delay_ms(200);
    }
}

