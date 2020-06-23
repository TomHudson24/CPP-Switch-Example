#include <iostream>

int main() {

    double earthWeight;
    int planetNum;
    double relativeGravity;
    double result;

    std::cout << "What is your weight on earth (Kg)?\n";
    std::cin >> earthWeight;

    std::cout << "Enter planet number you are fighting on?\nVenus = 1 (Lighter)\nMars = 2 (Lighter)\nJupiter = 3 (Heavier)\nSaturn = 4 (Heavier)\nUranus = 5 (Heavier)\nNeptune = 6 (Heavier)\n";
    std::cin >> planetNum;

    switch (planetNum)
    {
    case 1:
        relativeGravity = 0.78;
        break;
    case 2:
        relativeGravity = 0.39;
        break;
    case 3:
        relativeGravity = 2.65;
        break;
    case 4:
        relativeGravity = 1.17;
        break;
    case 5:
        relativeGravity = 1.05;
        break;
    case 6:
        relativeGravity = 1.23;
    default:
        relativeGravity = 1.0;
        break;

    }

    result = earthWeight * relativeGravity;

    std::cout << result << " Kg\n";

    return 0;

}