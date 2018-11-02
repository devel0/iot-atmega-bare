#include <DPrint.h>
using namespace SearchAThing::Arduino;

void setup()
{
  DPrintln("serial debug");
}

void loop()
{
  DPrintln(millis());
  delay(1000);
}