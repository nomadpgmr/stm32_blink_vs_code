#include "mbed.h"

DigitalOut led1(LED1);
// DigitalOut led4_blue_led(LED4);
// Serial pc(USBTX, USBRX);

class MyLed
{
   public:

   MyLed()
   {
   }
   ~MyLed()
   {

   }

   void blink(float delay)
   {
      led1 = 1;
      wait(delay);
      led1 = 0;
      wait(delay);
   }
};

int main()
{

   // led4_blue_led = 1; // 0 == on
   
   MyLed *myled = new MyLed();
   while (1)
   {
      myled->blink(0.2);
      myled->blink(0.2);
      myled->blink(0.2);
      myled->blink(0.2);
      myled->blink(0.2);
      wait(1.0);
      myled->blink(0.2);
      wait(1.0);
      // pc.printf("Hello World\r\n");
      // printf("Hello World\n");
   };

   free(myled);

}
