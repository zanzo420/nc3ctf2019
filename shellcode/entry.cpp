#include <iostream>
#include <Windows.h>


int main()
{
    __asm __volatile__(".byte 0x52, 0x59, 0x83, 0xC1, 0x05, 0xC0, 0xE1, 0x02, 0x80, 0xE9, 0x0F, 0x68, 0x35, 0x3A, 0x7B, 0x79, 0x68, 0x66, 0x5D, 0x6A, 0x5D, 0x68, 0xFB, 0x6C, 0x5C, 0x6C, 0x68, 0x70, 0x67, 0x67, 0x66, 0x68, 0x7E, 0x6E, 0x62, 0x69, 0xBA, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x04, 0x94, 0x35, 0x03, 0x02, 0x03, 0x02, 0x50, 0x83, 0xC2, 0x02, 0xFE, 0xC9, 0x75, 0xF0, 0x30, 0xC0, 0xB5, 0x4F, 0xFE, 0xC0, 0xFE, 0xCD, 0x75, 0xFA, 0x34, 0x01, 0x88, 0xC1, 0xC1, 0xE1, 0x10, 0x34, 0x01, 0x2C, 0x0E, 0x34, 0x02, 0x88, 0xC1, 0x34, 0x01, 0x2C, 0x10, 0x34, 0x01, 0x88, 0xC5, 0x30, 0xE9, 0x30, 0xCD, 0x30, 0xE9, 0x51, 0xCC, 0xCC");   
    
    return 0;
}