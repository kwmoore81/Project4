#include <iostream>
#include <cmath>
using namespace std;

bool IsLeftMostBitSet(unsigned int n)
{
	int LMB = n >> 31 ;
	int MSB = LMB & 1;

	if (MSB == 1)
	{
		cout << "True" << endl;
		return true;
	}

	else
	{
		cout << "False" << endl;
		return false;
	}
}

bool IsRightMostBitSet(unsigned int n)
{
	int LMB = n;
	int LSB = LMB & 1;

	if (LSB == 1)
	{
		cout << "True" << endl;
		return true;
	}

	else
	{
		cout << "False" << endl;
		return false;
	}
}

bool IsBitSet(unsigned int n, unsigned b)
{
	int bit = n >> b;
	int bitSet = bit & 1;

	if (bitSet == 1)
	{
		cout << "True" << endl;
		return true;
	}

	else
	{
		cout << "False" << endl;
		return false;
	}
}

bool GetRightMostSetBit(unsigned int n)
 {
	int b = 0;
	int bitSet = 0;
	int set = n;
	
	while (bitSet != 1)
	{
		int bit = set >> b;
		bitSet = set & 1;
		if (bitSet == 1)
		{
			cout << b << endl;
			return b;
		}
		else if (b >= 8)
		{
			cout << "-1" << endl;
			return -1;
		}
		else
		{
			++b;
		}
	}
	
}

float fA(float x)
{
	float y = sqrt(x) + (x*2) - 7;

	return y;
}

float fB(float a, float b, float c)
{
	float top = sqrt(b) - (4 * a*c);
		if (top > 0)
		{
			cout << "The Polynomial has no roots";
		}
		else
		{
			float solution = (-b + top) / (a * 2);

				return solution;
		}


}

float FindTheAngle(float a, float b, float c)
{
	float A = 0;
	float solution = acosf((b*b + c*c - a*a) / (2 * b*c));

	
	
	cout << solution << endl;

	return solution;
}



float Mag2D(float x1, float y1, float x2, float y2)
{
	float mag = sqrt(((x2*x2) - (x1*x1)) + ((y2*y2) - (y1*y1)));
	return mag;
}

float Normalise(float x, float y)
{
	float Nx = x / Mag2D(0, 0, x, y);
	float Ny = y / Mag2D(0, 0, x, y);

	cout << Nx << "," << Ny;
	return Nx, Ny;
}


void main()
{
	//IsLeftMostBitSet(128);

	//IsRightMostBitSet(64);
	
	//IsBitSet(90, 4);

	//GetRightMostSetBit(4); hotdog

	//FindTheAngle(8, 6, 9);

	Normalise(11.52, 53.34);

	system("pause");

}