#include <iostream>
#include <string>

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{15};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()

{
    int tool{Eraser};

    switch (tool)
    {
    case Pen:
        std::cout << "You selected the Pen\n";
        break;
    case Marker:
        std::cout << "You selected the Marker\n";
        break;
    case Eraser:
        std::cout << "You selected the Eraser\n";
        break;
    case Rectangle:
        std::cout << "You selected the Rectangle\n";
        break;
    case Circle:
        std::cout << "You selected the Circle\n";
        break;
    case Ellipse:
        std::cout << "You selected the Ellipse\n";
        break;
    default:
        std::cout << "Unknown tool\n";
        break;
    }

    // Error
    //  std::string name{"Alex"};

    // switch (name)
    // {
    // case "Alex":
    //     std::cout << "Found Alex\n";
    //     break;
    // case "Betty":
    //     std::cout << "Found Betty\n";
    //     break;
    // case "Caroline":
    //     std::cout << "Found Caroline\n";
    //     break;
    // default:
    //     std::cout << "Unknown name\n";
    //     break;

    return 0;
}