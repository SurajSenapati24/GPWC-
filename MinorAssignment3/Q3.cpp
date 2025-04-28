/*The pollEvent function of RenderWindow class puts data into the event object of the Event
 class that describes an operating system event. There would be many events stored in the queue. Con
struct a while loop to check for the event types KeyPressed and display a message, Keypressed
 Detected on the std, if that event has occurred.*/
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
int main() {
    RenderWindow window(VideoMode(800, 600), "Event Polling Example");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
            if (event.type == Event::KeyPressed) {
                cout << "Key Pressed Detected" << endl;
            }
        }

        window.clear();
        window.display();
    }

    return 0;
}