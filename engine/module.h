#ifndef MODULE_H
#define MODULE_H
#include "shared.h"
#include "frame.h"

namespace smolek {
class Module {
public:
  virtual void getFrame(Frame&) = 0;
};

typedef std::unique_ptr<Module> ModulePtr;
}
#endif