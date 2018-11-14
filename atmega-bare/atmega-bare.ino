#include <DPrint.h>
using namespace SearchAThing::Arduino;

void setup()
{
  DPrintStrln("SETUP");
}

void loop()
{
  DPrintULongln(millis());
  delay(1000);
}