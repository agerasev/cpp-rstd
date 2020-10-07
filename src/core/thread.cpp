#include "thread.hpp"

#include <pthread.h>


using namespace core;

static_thread_local_(Thread, current_thread) {
    return Thread();
}

Thread &thread::current() {
    return *current_thread;
}
