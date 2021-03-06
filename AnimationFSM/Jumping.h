#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping();
	~Jumping() {};
	int getMinFrame();
	int getMaxFrame();
	void walking(Animation* a);
	void hammering(Animation* a);
	void shoveling(Animation* a);
	void swording(Animation* a);
	void idle(Animation* a);

private:
	int m_minFrame;
	int m_maxFrame;
};

#endif // !IDLE_H