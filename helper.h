#pragma once
#include <string>
//#include <math.h>


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

	float ModulV() { return sqrtf(x * x + y * y + z * z); };

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


class Player
{
public:
	Player() = default;
	~Player() = default;

	Player(std::string& name_){
		SetName(name_);
	}

	std::string& GetName() { return name; }
	int GetScore() { return score; }

	void SetName(std::string& name_){
		name = std::move(name_);
	}

	void SetScore(int s_){
		score = s_;
	}

	friend  std::ostream& operator<<(std::ostream& out, Player& p){
		out << "Player name: " << p.name << "\n";
		out << "Player score: " << p.score << "\n";
		return out;
	}

	bool operator<(Player& p){
		return (this->score < p.GetScore());
	}

private:
	std::string name = "";
	int score = 0;
};


class Animal
{
public:
	virtual ~Animal() {}

	virtual void Voice() {}
};

class Dog : public Animal
{
public:
	void Voice() override {
		std::cout << "Woof!\n";
	}
};

class Cat : public Animal
{
public:
	void Voice() override {
		std::cout << "Myau!\n";
	}
};

class Fish : public Animal
{
	void Voice() override {
		std::cout << "Boole!\n";
	}
};