#ifndef SINE_MODULE_H
#define SINE_MODULE_H
namespace smolek {
class SineModule : public Module {
public:
  virtual void getFrame(Frame&);
};
}
#endif