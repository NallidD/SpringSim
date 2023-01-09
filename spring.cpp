#include "spring.hpp"

Spring::Spring(double init_length, double spring_constant) : init_length {init_length}, spring_constant {spring_constant} {}

auto Spring::find_vector(double force) -> double {

    return (force * 9.81) / this->spring_constant;

}

auto Spring::find_delta_length(double vector) -> double {

    return (this->init_length / this->cur_length) - vector;

}

auto Spring::find_resistance(double stress, double strain) -> double {

    return stress / strain;

}

auto Spring::find_constant(double resistance, double area, double length) -> double {

    return resistance * (area / length);

}