#ifndef MODULE_H
#define MODULE_H
#include "shared.h"
#include "frame.h"

class Module {
public:
  virtual void getFrame(Frame&) = 0;
};

typedef std::uniquePtr<Module> ModulePtr;

#endif