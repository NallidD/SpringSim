#include <chrono>
#include <stdio.h>

using namespace std::chrono;
using hires_clock = high_resolution_clock;

class Timer {

private:

    time_point<hires_clock> begin, finish;
    bool running;

public:

    Timer() = default;

    auto start() -> void;
    auto end() -> void;
    auto get() -> int64_t;
    auto reset() -> void;
    auto is_running() -> bool;

};