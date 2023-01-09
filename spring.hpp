//sigma (s) = stress
//epsilon (e) = strain
//L = length
//delta (D)
//Let 0 = the initial rest value (L0 => length when spring is at rest)
//x = 1 dimensional vector, where x = F/k
//k = spring constant

//e = D(L) / L0
//L = L0 + x for extension
//L = L0 - x for compression


class Spring {

private:

    double init_length;
    double cur_length; //volatile
    double stress; //volatile
    double strain; //volatile
    double spring_constant;

public:

    Spring() = delete;
    Spring(double init_length, double spring_constant);

    auto find_vector(double force) -> double;
    auto find_delta_length(double vector) -> double;
    auto find_resistance(double stress, double strain) -> double;
    auto find_constant(double resistance, double area, double length) -> double;

};