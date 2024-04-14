#pragma once


int SqrSum(int a, int b)
{
	return (a + b) * (a + b);
}

void PrintNumber(bool print_is_even, int n)
{
	for (int i = 0; i <= n; ++i)
	{
		if ((i%2) == 0 )
		{
			if (print_is_even) { std::cout << i << " "; }
		}
		else
		{
			if (!print_is_even) { std::cout << i << " "; }
		}
	}
};

void ModeratePrintNumber(bool print_is_even, int n)
{
	int i = 0;
	if (!print_is_even) { i = 1; }

	for (; i <= n; i+=2)
	{
		std::cout << i << " ";
	}
};

class Vector
{
public:
	Vector() = default;
	~Vector() = default;

	Vector(float x_, float y_, float z_) : x(x_), y(y_), z(z_){}

	void ShowVector(){
		std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
	}

	float GetX() { return x; }
	float GetY() { return y; }
	float GetZ() { return z; }

	void SetX(float x_) { x = x_; }
	void SetY(float y_) { y = y_; }
	void SetZ(float z_) { z = z_; }

private:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
};