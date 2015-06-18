#include "engine.h"

int
main(int argc, char argv[])
{
  smolek::Engine engine;
  DEBUG(ALWAYS,"smolek main starting");
  ModulePtr sine(new SineModule);
  engine.add(sine);
  engine.maxRunTime(5000);
  engine.run();
  DEBUG(ALWAYS,"smolek main exiting" );
}