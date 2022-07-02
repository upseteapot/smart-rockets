#pragma once
#include <SFML/Graphics.hpp>
#include "math/vec2.hpp"


class Target : public sf::Drawable
{
  public:
    Target() = default;
    void setup(Vec2f pos, sf::Color color);
  private:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    const float m_radius = 10.0f;
    Vec2f m_pos;
    sf::CircleShape m_shape;
};
