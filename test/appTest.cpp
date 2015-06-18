#include "engine.h"
#include "sineModule.h"

int
main(int argc, char *argv[])
{
  smolek::Engine engine;
  DEBUG(ALWAYS,"smolek main starting");
  smolek::ModulePtr sine(new smolek::SineModule);
  engine.add(sine);
  engine.maxRunTime(5000);
  engine.run();
  DEBUG(ALWAYS,"smolek main exiting" );
}