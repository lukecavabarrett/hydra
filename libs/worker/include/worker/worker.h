#ifndef HYDRA_LIBS_WORKER_INCLUDE_WORKER_WORKER_H_
#define HYDRA_LIBS_WORKER_INCLUDE_WORKER_WORKER_H_

#include <cstdint>
#include <string>

namespace hydra {

namespace worker {

  extern uint64_t id;
  extern std::string nick;
void work();

};

}

#endif //HYDRA_LIBS_WORKER_INCLUDE_WORKER_WORKER_H_
