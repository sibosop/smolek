

#include "basics.h"

namespace smolek {

pthread_mutex_t debugMutex = PTHREAD_MUTEX_INITIALIZER;
#ifdef USE_FILE_DEBUG
    std::ofstream outl("CMSutro3Debug.txt");
#endif
}
