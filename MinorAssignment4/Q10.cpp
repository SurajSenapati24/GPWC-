// for bat
void Bat::update(Time dt)
{if (m_MovingLeft) {
    m_Position.x -= m_Speed * dt.asSeconds();
}
if (m_MovingRight) {
    m_Position.x += m_Speed * dt.asSeconds();
}
m_Shape.setPosition(m_Position);
}
//  for ball
 void Ball::update(Time dt)
 {
    // Update the ball's position
    m_Position.y += m_DirectionY * m_Speed * dt.asSeconds();
    m_Position.x += m_DirectionX * m_Speed * dt.asSeconds();
    // Move the ball 
    m_Shape.setPosition(m_Position);
 }