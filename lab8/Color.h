#pragma once
class Color
{
	void SetValue(int value);
	void SetName(const char* name);

	unsigned char GetR() const;
	unsigned char GetG() const;
	unsigned char GetB() const;
	string GetHexValue() const;
	string GetName() const;
};

