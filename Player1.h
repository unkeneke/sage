
#ifndef PLAYER1_H
#define PLAYER1_H
#ifdef _WIN32 
#include <windows.h>
#endif

#include "Component.h"  


class Player1 : public Component
{
public:
	Player1(std::string Id, int X, int Y);
	void Update(std::vector<Component*> RenderableComponents, const int &Width, const int &Height, double &DeltaTime) override;
	char GetSymbol() override;

protected:
	const char PlayerSymbol = '|';
};

#endif
