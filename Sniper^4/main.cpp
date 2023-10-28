#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

// Variables 
Texture texture;
Sprite sprite;

int main() {

    // Cargamos la textura del archivo
    texture.loadFromFile("rcircle.png");

    // Cargamos el material del sprite
    sprite.setTexture(texture);

    sf::RenderWindow ventana(sf::VideoMode(800, 600,32), "Puntos en las esquinas con SFML");

    
    while (ventana.isOpen()) {
        sf::Event event;
        while (ventana.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                ventana.close();
            }
        }

        // Limpiar la ventana
        ventana.clear();

        // Dibujar puntos rojos en las esquinas
        sprite.setPosition(0, 0); // Esquina superior izquierda
        ventana.draw(sprite);

        sprite.setPosition(800 - 128, 0); // Esquina superior derecha
        ventana.draw(sprite);

        sprite.setPosition(0, 600 - 128); // Esquina inferior izquierda
        ventana.draw(sprite);

        sprite.setPosition(800 - 128, 600 - 128); // Esquina inferior derecha
        ventana.draw(sprite);

        ventana.display(); // Mostrar todo en la ventana
    }

    return 0;
}



