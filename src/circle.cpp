// Copyright 2024 Smirnov Leonid
#include <cstdint>
#include <cmath>
#include <stdexcept>
#include "circle.h"

double const Circle::PI = std::acos(-1);

double Circle::checkingTheInputData(double value)
{
	if (value <= 0) {
		throw std::invalid_argument("The value must be greater than zero");
	}
	return value;
}

Circle::Circle(double radiusValue) {
	radius = checkingTheInputData(radiusValue);
	ference = 2 * PI * radius;
	area = PI * radius * radius;
}

double Circle::GetRadius() const
{
	return radius;
}

double Circle::GetFerence() const
{
	return ference;
}

double Circle::GetArea() const
{
	return area;
}

void Circle::SetRadius(double value)
{
	radius = checkingTheInputData(value);
	ference = radius * 2 * PI;
	area = radius * radius * PI;
}

void Circle::SetFerence(double value)
{
	ference = checkingTheInputData(value);
	radius = ference / (2 * PI);
	area = radius * radius * PI;
}

void Circle::SetArea(double value)
{
	area = checkingTheInputData(value);
	radius = std::sqrt(area / PI);
}
