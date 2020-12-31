#ifndef PRL_H_
#define PRL_H_

#include <entt/entt.hpp>
#include "SFML/Graphics.hpp"
#include "protorlconfig.hpp"

namespace prl
{
class TileMap : public sf::Drawable, public sf::Transformable
{
public:
    bool load(const std::string& tileset, sf::Vector2u tileSize, const int* tiles, unsigned int width, unsigned int height);
private:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    sf::VertexArray m_vertices;
    sf::Texture m_tileset;
};

struct pos {
  float x;
  float y;
};

struct vel {
  float dx;
  float dy;
};

int add(int, int);
void show_version();
void update(entt::registry &registry);

}

#endif  // PRL_H_H
