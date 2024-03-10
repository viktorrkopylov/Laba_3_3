#include <iostream>
#include <string>
class Shape {

public:
	virtual void Scale(float scaleFactor) = 0;
	virtual void ShowInfo() = 0;
	virtual std::string GetName() = 0;
};

class Shape2D : public Shape {
private:
	float area;
public:
	virtual void CalculateArea() = 0;
	float GetArea() {
		return area;
	}
};


class Square : public Shape2D{
private:
	float side;
public:
	Square(float side)
		: side(side) {} 
	void CalculateArea() override { 

	}
	void ShowInfo() override {
		std::cout << "Я квадрат " << std::endl;
		std::cout << "Моя сторона = " << side << std::endl;
		std::cout << "Моя площадь = " << std::endl;
	}
};

class Triangle : public Shape2D {
private:
	float base, height;
public:
	Triangle(float base, float height)
		: base(base), height(height){}

	void CalculateArea() override {
		
	}
	void ShowInfo() override {
		std::cout << "Я треугольник " << std::endl;
		std::cout << "Длина основания = " << base << std::endl;
		std::cout << "Моя высота = " << height << std::endl;
		std::cout << "Моя площадь = " << this->GetArea() << std::endl;
	}
};

class Circle : public Shape2D {
private:
	float radius;
public:
	void ShowInfo() override {
		std::cout << "Я круг " << std::endl;
		std::cout << "Мой радиус = " << radius << std::endl;
		std::cout << "Моя площадь = " << GetArea() << std::endl;
	}
};

class Shape3D : public Shape {
private:
	float volume;
public:
	
	virtual void CalculateVolume() = 0;
};

class TriangularPyramid : public Shape3D{
private:
	float height;
public:
		
};

class Cylinder {
private:
	float height;
};

class Sphere {
private:
	float radius;
};


int main() {






}