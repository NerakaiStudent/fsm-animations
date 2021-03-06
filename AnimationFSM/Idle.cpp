#include <Idle.h>
#include <Jumping.h>
#include <Walking.h>
#include <Shoveling.h>
#include <Hammering.h>
#include <Swording.h>

#include <string>

Idle::Idle()
{
	m_minFrame = 0;
	m_maxFrame = 5;
}

void Idle::handleInput() {}
void Idle::update() {}

int Idle::getMinFrame()
{
	return m_minFrame;
}

int Idle::getMaxFrame()
{
	return m_maxFrame;
}

void Idle::jumping(Animation* a)
{
	//std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::walking(Animation* a)
{
	//std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Idle::hammering(Animation * a)
{
	a->setCurrent(new Hammering());
	delete this;
}

void Idle::shoveling(Animation * a)
{
	a->setCurrent(new Shoveling());
	delete this;
}

void Idle::swording(Animation * a)
{
	a->setCurrent(new Swording());
	delete this;
}
