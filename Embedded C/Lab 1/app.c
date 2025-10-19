#include "uart.h"

unsigned char       string_buffer1[100] = "Learn in Depth: Ahmed Salem\r\n";
unsigned char const string_buffer2[100] = "Mastering Embedded Systems\r\n";
int main(void)
{
    uart_send_string(string_buffer1);
    uart_send_string(string_buffer2);
    while(1);
}
