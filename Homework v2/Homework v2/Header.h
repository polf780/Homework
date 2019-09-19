#ifndef _HEADER_H

#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;

template <class T>


class vec3
{
public:

	T x, y, z;

	vec3(T x1, T y1, T z1)
	{
		x = x1;
		y = y1;
		z = z1;
	}

	void normalize()
	{
		float modulo;
		modulo = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		x = x / modulo;
		y = y / modulo;
		z = z / modulo;
	}

	void zero()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	bool is_zero()
	{
		if (x == 0 && y == 0 && z == 0)
		{
			return true;
		}

		return false;
	}

	float distance_to(vec3 v1)
	{
		float result;
		result = sqrt(pow((v1.x - x), 2) + pow((v1.y - y), 2) + pow((v1.z - z), 2));
		return result;
	}

	vec3 operator+(vec3 <float> v)
	{
		vec3 <float> res(0, 0, 0);
		res.x = this->x + v.x;
		res.y = this->y + v.y;
		res.z = this->z + v.z;
		return res;
	}

	vec3 operator-(vec3 <float> v)
	{
		vec3 <float> res(0, 0, 0);
		res.x = this->x - v.x;
		res.y = this->y - v.y;
		res.z = this->z - v.z;
		return res;
	}

	vec3 operator+=(vec3 <float> v)
	{
		vec3 <float> res(0, 0, 0);
		res.x = this->x += v.x;
		res.y = this->y += v.y;
		res.z = this->z += v.z;
		return res;
	}

	vec3 operator-=(vec3 <float> v)
	{
		vec3 <float> res(0, 0, 0);
		res.x = this->x -= -v.x;
		res.y = this->y -= -v.y;
		res.z = this->z -= -v.z;
		return res;
	}

	vec3 operator==(vec3 <T>v1) {
		{
			if (this->x == v1->x && this->y == v1->y && this->z == v1->z)
			{
				return true;
			}
			return false;
		}
	}
};

void main()
{
	vec3 <int> v(10, 4, 6);
	vec3 <float> o(4.4, 2.2, 1.8);
	vec3 <float> u(1.5, 2.5, 3.6);
	vec3 <double> m(3.55, 5.55, 6.75);

	cout << v.x << "," << v.y << "," << v.z << endl;
	cout << o.x << "," << o.y << "," << o.z << endl;
	cout << u.x << "," << u.y << "," << u.z << endl;
	cout << m.x << "," << m.y << "," << m.z << endl;

	v.zero();
	cout << v.x << "," << v.y << "," << v.z << endl;

	if (v.is_zero() == true)
	{
		cout << "v es 0" << endl;
	}

	if (u.is_zero() == false)
	{
		cout << "u no es 0" << endl;
	}

	vec3 <float> k(0, 0, 0);
	k = u + o;
	vec3 <float> n(0, 0, 0);
	n = o - u;

	cout << k.x << "," << k.y << "," << k.z << endl;
	cout << n.x << "," << n.y << "," << n.z << endl;



	cout << u.distance_to(o) << endl;
	system("pause");

}


#endif //_HEADER_H
