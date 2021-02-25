/*
 * File:   main.c
 * Author: 20187263
 *
 * Created on 25 de Fevereiro de 2021, 14:46
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "digitos7seg.h"



void main(void)
{
    int cont = 0;
    
    digitos7seg_init();
    
    while(1)
    {
        digitos7seg(cont);
        delay(1000);
        cont++;
        
        if(cont>=16) cont = 0;
    
    
    }
}
