#include <iostream>

// tools
const int Pen{10};
const int Marker{20};
const int Eraser{3};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{15};

int main()
{
    int tool{Circle};

    if (tool == Pen)
    {
        std::cout << "You selected Pen" << std::endl;
    }
    else if (tool == Marker)
    {
        std::cout << "You selected Marker" << std::endl;
    }
    else if (tool == Eraser)
    {
        std::cout << "You selected Eraser" << std::endl;
    }
    else if (tool == Rectangle)
    {
        std::cout << "You selected Rectangle" << std::endl;
    }
    else if (tool == Circle)
    {
        std::cout << "You selected Circle" << std::endl;
    }
    else if (tool == Ellipse)
    {
        std::cout << "You selected Ellipse" << std::endl;
    }
}