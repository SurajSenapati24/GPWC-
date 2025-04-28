/*Fill out the places marked with the symbol, ?, in the following code snippet.
 Texture ?;
 ?.loadFromFile("sample.png");
 Sprite ?;
 ?.setTexture(?);
 ?.?(960,540);*/
#include <SFML/Graphics.hpp>
using namespace sf;
int main(){
    Texture texture;
    texture.loadFromFile("sample.png");
    Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(960,540);
}