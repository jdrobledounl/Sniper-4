#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

// Realice una aplicación que abra una ventana de 800x600 y dibuje un punto
// rojo en cada una de las esquinas de la misma

int main()
{
    // Crear una ventana SFML con una relación de aspecto de 4:3
    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Ventana 4:3 de SFML");

    // Bucle principal
    while (App.isOpen())
    {
        App.clear();
        
        // Manejar eventos
        sf::Event event;
        while (App.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                App.close();
        }

        // Dibujar algo en la ventana (aquí puedes agregar tu propia lógica de dibujo)
        App.clear(sf::Color::Black); // Limpiar la ventana con fondo negro
        // Agregar aquí tus elementos de dibujo

        // Mostrar la ventana
        // App.display();
        
        App.display();


    }

    return 0;
}
