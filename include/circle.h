// Copyright 2024 Smirnov Leonid

#pragma once

class Circle {
private:
	static const double PI;
	double radius;
	double ference;

	double area;

	static double checkingTheInputData(double radius);

	explicit Circle(double raduisValue);

public:
	double GetRadius() const;
	double GetFerence() const;
	double GetArea() const;

	void SetRadius(double value);
	void SetFerence(double value);
	void SetArea(double value);
};
