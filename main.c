#include "stdint.h"
#include "stdbool.h"
#include "math.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/sysctl.c"
#include "driverlib/gpio.h"
#include "lcd.h"



void main()
 {
    SysCtlClockSet(SYSCTL_OSC_MAIN|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_5);
    unsigned char metin[] = {'b', 'a','l','i','k'};
    while(1){
        SysCtlDelay(10000000);
        Lcd_ilk_ayarlar();
        Lcd_Satir_Sutuna_Git(1, 1);
        SysCtlDelay(5000000); //Delay
        Lcd_Tek_Karakter_Yaz('x'); // belki 'a' seklindedir.
        SysCtlDelay(10000000); //Delay
        Lcd_Satir_Sutuna_Git(2,1);
        SysCtlDelay(10000000); //Delay
        Lcd_Cok_Karakter_Yaz(metin, 5);
        SysCtlDelay(10000000); //Delay
    }
}


