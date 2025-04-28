/*Write the code snippet to detect the Keyboard input, enter key, from the user using Keyboard class
 and also display a message, Enter Pressed on the output stream, if enter key is pressed.*/
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
int main() {
    RenderWindow window(VideoMode(800, 600), "Keyboard Input Example");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
            if (Keyboard::isKeyPressed(Keyboard::Enter)) {
                cout << "Enter Pressed" << endl;
            }
        }

        window.clear();
        window.display();
    }

    return 0;
}