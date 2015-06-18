#ifndef ENGINE_H
#define ENGINE_H
namespace smolek {
class Engine 
{
public:
  Engine();
  ~Engine();
  void run();
  void add(ModulePtr& module);
private:
  typedef std::vector<ModulePtr> ModuleList;
  ModuleList moduleList;
  
  bool open(PaDeviceIndex index);
  bool close();
  bool start();
  bool stop();
  int paCallbackMethod(const void *inputBuffer, void *outputBuffer,
      unsigned long framesPerBuffer,
      const PaStreamCallbackTimeInfo* timeInfo,
      PaStreamCallbackFlags statusFlags);
  static int paCallback( const void *inputBuffer, void *outputBuffer,
      unsigned long framesPerBuffer,
      const PaStreamCallbackTimeInfo* timeInfo,
      PaStreamCallbackFlags statusFlags,
      void *userData );
  void paStreamFinishedMethod();
  static void paStreamFinished(void* userData);
  typedef std::vector<ModulePtr> ModuleList;
  ModuleList moduleList;
};
}