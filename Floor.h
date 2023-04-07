#pragma once
class FFloor
{
public:
	FFloor();
	virtual~FFloor();
	int GetX() { return X; }
	void SetX(int Value) { X = Value; }

	int GetY() { return Y; }
	void SetY(int Value) { Y = Value; }
private:

	int X;
	int Y;
};

