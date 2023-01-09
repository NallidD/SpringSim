#include <SFML/Window.hpp>

class Window {

private:

    unsigned int height;
    unsigned int width;
    sf::Window window;

public:

    Window();
    Window(unsigned int height, unsigned int width);

};