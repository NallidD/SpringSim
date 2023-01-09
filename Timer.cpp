#include "Timer.hpp"

auto Timer::start() -> void {

    begin = hires_clock::now();
    running = true;

}

auto Timer::end() -> void {

    if(!running) {

        perror("Timer never started.\n");
        return;

    }

    finish = hires_clock::now();
    running = false;

}

auto Timer::get() -> int64_t {

    time_point<system_clock> result;

    running ? result = hires_clock::now() : result = finish;

    return duration_cast<microseconds>(result - begin).count();

}

auto Timer::reset() -> void {

    begin = finish = {};

}

auto Timer::is_running() -> bool {

    return running;

}