#include "mbed.h"

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
};

int main()
{

   MyLed *myled = new MyLed();
   while (1)
   {
      myled->blink(0.2);
      myled->blink(0.2);
      myled->blink(0.2);
      wait(1.0);
      myled->blink(0.2);
      wait(1.0);
   };

   free(myled);

}
