// Overring Boss 
// Demonstrates calling and overriding base member functions

#include <iostream>

using namespace std;

class Enemy
{
private:
    int m_Damage;
public:
    Enemy(int damage = 10);
    void virtual Taunt() const;  // Made Virtual to be overridden
    void virtual Attack() const;  // Made Virtual to be overridden
};

Enemy::Enemy(int damage):
    m_Damage(damage)
    {}

void Enemy::Taunt() const
{
    cout << "The enemy says he will fight you.\n";
}

void Enemy::Attack() const
{
    cout << "Attack! Inflicts " << m_Damage << " damage points.";
}

class Boss : public Enemy
{
public:
    Boss(int damage = 30);
    void virtual Taunt() const;  // optional use of keyword virtual
    void virtual Attack() const; // optional use of keyword virtual
};

Boss::Boss(int damage):
    Enemy(damage)       // Call base class constructor with argument
{}

void Boss::Taunt() const  // override base class member fucntion
{
    cout << "The boss says he will end your pitiful existence.\n";
}

void Boss::Attack() const  // overide bas class member function
{
    Enemy::Attack();           // calls base class member function
    cout << " And laughs heartily at you.";
}

int main()
{
    cout << "Enemy object:\n";
    Enemy anEnemy;
    anEnemy.Taunt();
    anEnemy.Attack();

    cout << "\n\nBoss object:\n";
    Boss aBoss;
    aBoss.Taunt();
    aBoss.Attack();

    return 0;
}