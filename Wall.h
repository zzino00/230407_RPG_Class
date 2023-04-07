#pragma once
class FWall
{
public:
	FWall();
	virtual~FWall();

	int GetX() { return X; }
	void SetX(int Value) { X = Value; }

	int GetY() { return Y; }
	void SetY(int Value) { Y = Value; }
private:

	int X;
	int Y;
};

