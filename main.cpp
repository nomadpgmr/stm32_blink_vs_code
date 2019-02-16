#include "mbed.h"

Serial pc(USBTX, USBRX);

DigitalOut led1(LED1);

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
   void run()
   {
      while (1)
      {
         blink(0.2);
         blink(0.2);
         blink(0.2);
         blink(0.2);
         blink(0.2);
         wait(1.0);
         blink(0.2);
         wait(1.0);
      };
   }
};

int main()
{
   // Add breakpoint here to prevent exceptions
   MyLed *myled = new MyLed();
   pc.printf("Hello World\r\n");
   myled->run();
   free(myled);

}
