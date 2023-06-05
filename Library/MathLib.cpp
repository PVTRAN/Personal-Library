#include "MathLib.h"
#include <cmath>

#pragma region float2
float2::float2()
{
	x = y = 0.0f;
}
float2::float2(float X, float Y)
{
	x = X;
	y = Y;
}
float2 float2::operator+(const float2& that)
{
	return float2(x + that.x, y + that.y);
}
float2 float2::operator-(const float2& that)
{
	return float2(x - that.x, y - that.y);
}
float2 float2::operator-()
{
	return float2(-x, -y);
}
float2& float2::operator=(const float2& that)
{
	if (this != &that)
	{
		x = that.x;
		y = that.y;
	}
	return *this;
}
float2& float2::operator+=(const float2& that)
{
	x += that.x;
	y += that.y;

	return *this;
}
float2& float2::operator-=(const float2& that)
{
	x -= that.x;
	y -= that.y;

	return*this;
}
bool float2::operator==(const float2& that)
{
	if (this != &that)
	{
		if ((x == that.x) && (y == that.y))
			return true;
		else
			return false;
	}
	return true;
}
bool float2::operator!=(const float2& that)
{
	if (this != &that)
	{
		if ((x == that.x) && (y == that.y))
			return false;
		else
			return true;
	}
	return false;
}
float2 float2::operator*(float scalar)
{
	return float2(x * scalar, y * scalar);
}
float2 float2::operator/(float scalar)
{
	return float2(x / scalar, y / scalar);
}
float2& float2::operator*=(float scalar)
{
	x *= scalar;
	y *= scalar;

	return *this;
}
float2& float2::operator/=(float scalar)
{
	x /= scalar;
	y /= scalar;

	return *this;
}
float float2::lengthSquared()
{
	return x * x + y * y;
}
float2 float2::perpendicular()
{
	return  float2(-y, x);
}
#pragma endregion

#pragma region float3
float3::float3()
{
	x = y = z = 0.0f;
}
float3::float3(float X, float Y, float Z)
{
	x = X;
	y = Y;
	z = Z;
}
float3 float3::operator-()
{
	return float3(-x, -y, -z);
}
float3 float3::operator+(const float3& that)
{
	return float3(x + that.x, y + that.y, z + that.z);
}
float3 float3::operator-(const float3& that)
{
	return float3(x - that.x, y - that.y, z - that.z);
}
float3& float3::operator=(const float3& that)
{
	if (this != &that)
	{
		x = that.x;
		y = that.y;
		z = that.z;
	}
	return *this;
}
float3& float3::operator+=(const float3& that)
{
	x += that.x;
	y += that.y;
	z += that.z;
	return *this;
}
float3& float3::operator-=(const float3& that)
{
	x -= that.x;
	y -= that.y;
	z -= that.z;
	return*this;
}
bool float3::operator==(const float3& that)
{
	if (this != &that)
	{
		if ((x == that.x) && (y == that.y) && (z == that.z))
			return true;
		else
			return false;
	}
	return true;
}
bool float3::operator!=(const float3& that)
{
	if (this != &that)
	{
		if ((x == that.x) && (y == that.y) && (z == that.z))
			return false;
		else
			return true;
	}
	return false;
}
float3 float3::operator*(float scalar)
{
	return float3(x * scalar, y * scalar, z * scalar);
}
float3 float3::operator/(float scalar)
{
	return float3(x / scalar, y / scalar, z / scalar);
}
float3& float3::operator*=(float scalar)
{
	x *= scalar;
	y *= scalar;
	z *= scalar;
	return *this;
}
float3& float3::operator/=(float scalar)
{
	x /= scalar;
	y /= scalar;
	z /= scalar;
	return *this;
}
float float3::lengthSquared()
{
	return x * x + y * y + z * z;
}
float3 float3::perpendicular()
{
	return float3(-y, x, z);
}
#pragma endregion

#pragma region float4
float4::float4()
{
	x = y = z = w = 0.0f;
}
float4::float4(float X, float Y, float Z, float W)
{
	x = X;
	y = Y;
	z = Z;
	w = W;
}
float4 float4::operator-()
{
	return float4(-x, -y, -z, -w);
}
float4 float4::operator+(const float4& that)
{
	return float4(x + that.x, y + that.y, z + that.z, w + that.w);
}
float4 float4::operator-(const float4& that)
{
	return float4(x - that.x, y - that.y, z - that.z, w + that.w);
}
float4& float4::operator=(const float4& that)
{
	if (this != &that)
	{
		x = that.x;
		y = that.y;
		z = that.z;
		w = that.w;
	}
	return *this;
}
float4& float4::operator+=(const float4& that)
{
	x += that.x;
	y += that.y;
	z += that.z;
	w += that.w;
	return *this;
}
float4& float4::operator-=(const float4& that)
{
	x -= that.x;
	y -= that.y;
	z -= that.z;
	w -= that.w;
	return*this;
}
bool float4::operator==(const float4& that)
{
	if (this != &that)
	{
		if ((x == that.x) && (y == that.y) && (z == that.z) && (w == that.w))
			return true;
		else
			return false;
	}
	return true;
}
bool float4::operator!=(const float4& that)
{
	if (this != &that)
	{
		if ((x == that.x) && (y == that.y) && (z == that.z) && (w == that.w))
			return false;
		else
			return true;
	}
	return false;
}

float4 float4::operator*(float scalar)
{
	return float4(x * scalar, y * scalar, z * scalar, w * scalar);
}
float4 float4::operator/(float scalar)
{
	return float4(x / scalar, y / scalar, z / scalar, w / scalar);
}
float4& float4::operator*=(float scalar)
{
	x *= scalar;
	y *= scalar;
	z *= scalar;
	w *= scalar;
	return *this;
}
float4& float4::operator/=(float scalar)
{
	x /= scalar;
	y /= scalar;
	z /= scalar;
	w /= scalar;
	return *this;
}
float float4::lengthSquared()
{
	return x * x + y * y + z * z + w * w;
}
float4 float4::perpendicular()
{
	return float4(-y, x, z, w);
}
#pragma endregion

#pragma region matrix2x2
matrix2x2::matrix2x2()
{
	Xx = 0.0f; Xy = 0.0f;
	Yx = 0.0f; Yy = 0.0f;
}

matrix2x2::matrix2x2(matrix2x2& mt)
{
	Xx = mt.Xx; Xy = mt.Xy;
	Yx = mt.Yx; Yy = mt.Yy;
}
matrix2x2::matrix2x2(const matrix2x2& mt)
{
	Xx = mt.Xx; Xy = mt.Xy;
	Yx = mt.Yx; Yy = mt.Yy;
}
matrix2x2::matrix2x2(float2 mx, float2 my)
{
	X.x = mx.x; X.y = mx.y;
	Y.x = my.x; Y.y = my.y;
}

matrix2x2::matrix2x2(float mXx, float mXy, float mYx, float mYy)
{
	Xx = mXx; Xy = mXy;
	Yx = mYx; Yy = mYy;
}

matrix2x2 matrix2x2::operator+(const matrix2x2& that)
{
	for (int i = 0; i < 4; i++)
	{
		m[i] = m[i] + that.m[i];
	}
	return *this;
}

matrix2x2 matrix2x2::operator-(const matrix2x2& that)
{
	for (int i = 0; i < 4; i++)
	{
		m[i] = m[i] - that.m[i];
	}
	return *this;
}

matrix2x2& matrix2x2::operator=(const matrix2x2& that)
{
	if (this != &that)
	{
		Xx = that.Xx; Xy = that.Xy;
		Yx = that.Yx; Yy = that.Yy;
	}
	return *this;
}

matrix2x2& matrix2x2::operator+=(const matrix2x2& that)
{
	for (int i = 0; i < 4; i++)
	{
		m[i] += that.m[i];
	}
	return *this;
}

matrix2x2& matrix2x2::operator-=(const matrix2x2& that)
{
	for (int i = 0; i < 4; i++)
	{
		m[i] -= that.m[i];
	}
	return *this;
}

bool matrix2x2::operator==(const matrix2x2& that)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(m[i] == that.m[i]))
			return false;
	}
	return true;
}

bool matrix2x2::operator!=(const matrix2x2& that)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(m[i] == that.m[i]))
			return true;
	}
	return false;
}

matrix2x2 matrix2x2::operator*(const matrix2x2& mt)
{
	//   Xx Xy    Xx Xy
	//   Yx Yy	  Yx Yy

	matrix2x2 temp;

	temp.Xx = (Xx * mt.Xx) + (Xy * mt.Yx);
	temp.Xy = (Xx * mt.Xy) + (Xy * mt.Yy);

	temp.Yx = (Yx * mt.Xx) + (Yy * mt.Xy);
	temp.Yy = (Yx * mt.Xy) + (Yy * mt.Yy);

	return matrix2x2(temp);
}

matrix2x2& matrix2x2::operator*=(const matrix2x2& mt)
{
	matrix2x2 temp;

	temp.Xx = (Xx * mt.Xx) + (Xy * mt.Yx);
	temp.Xy = (Xx * mt.Xy) + (Xy * mt.Yy);

	temp.Yx = (Yx * mt.Xx) + (Yy * mt.Xy);
	temp.Yy = (Yx * mt.Xy) + (Yy * mt.Yy);

	for (int i = 0; i < 4; i++)
	{
		m[i] = temp.m[i];
	}

	return *this;
}

float2 matrix2x2::operator*(const float2 f)
{
	//   Xx Xy    X
	//   Yx Yy	  Y

	return float2((Xx * f.x) + (Xy * f.y), (Yx * f.x) + (Yy * f.y));
}

float2 operator*(const float2 f, matrix2x2 mt)
{
	//   X Y  Xx Xy
	//        Yx Yy

	return float2((f.x * mt.Xx) + (f.y * mt.Yx), (f.x * mt.Xy) + (f.y * mt.Yy));
}

matrix2x2 matrix2x2::operator*(float scalar)
{
	for (int i = 0; i < 4; i++)
		m[i] = m[i] * scalar;
	return *this;
}

matrix2x2 operator*(float scalar, const matrix2x2& mt)
{
	matrix2x2 temp;
	for (int i = 0; i < 4; i++)
		temp.m[i] = mt.m[i] * scalar;
	return temp;
}

matrix2x2 matrix2x2::operator/(float scalar)
{
	for (int i = 0; i < 4; i++)
		m[i] = m[i] / scalar;
	return *this;
}

matrix2x2& matrix2x2::operator*=(float scalar)
{
	for (int i = 0; i < 4; i++)
		m[i] *= scalar;
	return *this;
}

matrix2x2& matrix2x2::operator/=(float scalar)
{
	for (int i = 0; i < 4; i++)
		m[i] /= scalar;
	return *this;
}

matrix2x2& operator*=(float scalar, const matrix2x2& mt)
{
	matrix2x2 temp = mt;
	for (int i = 0; i < 4; i++)
		temp.m[i] = mt.m[i] * scalar;

	return temp;
}

//matrix2x2& matrix2x2::inverse()
//{
//	*this = inverse(*this);
//	return *this;
//}
//
//matrix2x2 matrix2x2::inverse(const matrix2x2& mt)
//{
//	matrix2x2 matrix = mt;
//
//	float det = determinant(matrix);
//
//	float invDet = 1.0f / det;
//
//	matrix2x2 result = invDet * matrix;
//	return result;
//}

matrix2x2& matrix2x2::identity()
{
	*this = { 1.0f, 0.0f,
			  0.0f, 1.0f };

	return *this;
}

matrix2x2& matrix2x2::transpose()
{
	//   Xx Xy
	//   Yx Yy

	matrix2x2 temp = { Xx, Yx,
					   Xy, Yy };

	*this = temp;
	return *this;
}

float determinant(matrix2x2 mt)
{
	//   Xx Xy
	//   Yx Yy
	float det = mt.Xx * mt.Yy - mt.Xy * mt.Yx;
	return det;
}
#pragma endregion

#pragma region matrix3x3
matrix3x3::matrix3x3()
{
	//Xx = 1.0f; Xy = 0.0f; Xz = 0.0f;
	//Yx = 0.0f, Yy = 1.0f; Yz = 0.0f;
	//Zx = 0.0f; Zy = 0.0f; Zz = 1.0f;

	identity();
}

matrix3x3::matrix3x3(matrix3x3& mt)
{
	Xx = mt.Xx; Xy = mt.Xy; Xz = mt.Xz;
	Yx = mt.Yx; Yy = mt.Yy; Xz = mt.Yz;
	Zx = mt.Zx; Zy = mt.Zy; Zz = mt.Zz;
}
matrix3x3::matrix3x3(const matrix3x3& mt)
{
	Xx = mt.Xx; Xy = mt.Xy; Xz = mt.Xz;
	Yx = mt.Yx; Yy = mt.Yy; Xz = mt.Yz;
	Zx = mt.Zx; Zy = mt.Zy; Zz = mt.Zz;
}
matrix3x3::matrix3x3(float3 mx, float3 my, float3 mz)
{
	X.x = mx.x; X.y = mx.y; X.z = mx.z;
	Y.x = my.x; Y.y = my.y; Y.z = my.z;
	Z.x = mz.x; Z.y = mz.y; Z.z = mz.z;
}
matrix3x3::matrix3x3(float mXx, float mXy, float mXz, float mYx, float mYy, float mYz, float mZx, float mZy, float mZz)
{
	Xx = mXx; Xy = mXy; Xz = mXz;
	Yx = mYx; Yy = mYy; Yz = mYz;
	Zx = mZx; Zy = mZy; Zz = mZz;
}
matrix3x3 matrix3x3::operator+(const matrix3x3& that)
{
	for (int i = 0; i < 9; i++)
	{
		m[i] = m[i] + that.m[i];
	}
	return *this;
}
matrix3x3 matrix3x3::operator-(const matrix3x3& that)
{
	for (int i = 0; i < 9; i++)
	{
		m[i] = m[i] - that.m[i];
	}
	return *this;
}
matrix3x3& matrix3x3::operator=(const matrix3x3& that)
{
	if (this != &that)
	{
		Xx = that.Xx; Xy = that.Xy; Xz = that.Xz;
		Yx = that.Yx; Yy = that.Yy; Yz = that.Yz;
		Zx = that.Zx; Zy = that.Zy; Zz = that.Zz;
	}
	return *this;
}
matrix3x3& matrix3x3::operator+=(const matrix3x3& that)
{
	for (int i = 0; i < 9; i++)
	{
		m[i] += that.m[i];
	}
	return *this;
}
matrix3x3& matrix3x3::operator-=(const matrix3x3& that)
{
	for (int i = 0; i < 9; i++)
	{
		m[i] -= that.m[i];
	}
	return *this;
}
bool matrix3x3::operator==(const matrix3x3& that)
{
	for (int i = 0; i < 9; i++)
	{
		if (!(m[i] == that.m[i]))
			return false;
	}
	return true;
}
bool matrix3x3::operator!=(const matrix3x3& that)
{
	for (int i = 0; i < 9; i++)
	{
		if (!(m[i] == that.m[i]))
			return true;
	}
	return false;
}
matrix3x3 matrix3x3::operator*(const matrix3x3& mt)
{
	//   Xx Xy Xz     Xx Xy Xz
	//   Yx Yy Yz	  Yx Yy Yz
	//   Zx Zy Zz     Zx Zy Zz
	matrix3x3 temp;

	temp.Xx = (Xx * mt.Xx) + (Xy * mt.Yx) + (Xz * mt.Zx);
	temp.Xy = (Xx * mt.Xy) + (Xy * mt.Yy) + (Xz * mt.Zy);
	temp.Xz = (Xx * mt.Xz) + (Xy * mt.Yz) + (Xz * mt.Zz);

	temp.Yx = (Yx * mt.Xx) + (Yy * mt.Yx) + (Yz * mt.Zx);
	temp.Yy = (Yx * mt.Xy) + (Yy * mt.Yy) + (Yz * mt.Zy);
	temp.Yz = (Yx * mt.Xz) + (Yy * mt.Yz) + (Yz * mt.Zz);

	temp.Zx = (Zx * mt.Xx) + (Zy * mt.Yx) + (Zz * mt.Zx);
	temp.Zy = (Zx * mt.Xy) + (Zy * mt.Yy) + (Zz * mt.Zy);
	temp.Zz = (Zx * mt.Xz) + (Zy * mt.Yz) + (Zz * mt.Zz);

	for (int i = 0; i < 9; i++)
	{
		m[i] = temp.m[i];
	}

	return *this;
}
matrix3x3& matrix3x3::operator*=(const matrix3x3& mt)
{
	matrix3x3 temp;

	temp.Xx = (Xx * mt.Xx) + (Xy * mt.Yx) + (Xz * mt.Zx);
	temp.Xy = (Xx * mt.Xy) + (Xy * mt.Yy) + (Xz * mt.Zy);
	temp.Xz = (Xx * mt.Xz) + (Xy * mt.Yz) + (Xz * mt.Zz);

	temp.Yx = (Yx * mt.Xx) + (Yy * mt.Yx) + (Yz * mt.Zx);
	temp.Yy = (Yx * mt.Xy) + (Yy * mt.Yy) + (Yz * mt.Zy);
	temp.Yz = (Yx * mt.Xz) + (Yy * mt.Yz) + (Yz * mt.Zz);

	temp.Zx = (Zx * mt.Xx) + (Zy * mt.Yx) + (Zz * mt.Zx);
	temp.Zy = (Zx * mt.Xy) + (Zy * mt.Yy) + (Zz * mt.Zy);
	temp.Zz = (Zx * mt.Xz) + (Zy * mt.Yz) + (Zz * mt.Zz);

	return temp;
}
float3 matrix3x3::operator*(const float3 f)
{
	//   Xx Xy Xz      X
	//   Yx Yy Yz	X  Y
	//   Zx Zy Zz      Z

	float3 temp;

	temp.x = Xx * f.x + Xy * f.y + Xz * f.z;
	temp.y = Yx * f.x + Yy * f.y + Yz * f.z;
	temp.z = Zx * f.x + Zy * f.y + Zz * f.z;

	return temp;
}
float3 operator*(const float3 f, matrix3x3 mt)
{
	//            Xx Xy Xz
	//  X Y Z  *  Yx Yy Yz
	//            Zx Zy Zz
	float3 temp;

	temp.x = f.x * mt.Xx + f.y * mt.Yx + f.z * mt.Zx;

	temp.y = f.x * mt.Xy + f.y * mt.Yy + f.z * mt.Zy;

	temp.z = f.x * mt.Xz + f.y * mt.Yz + f.z * mt.Zz;

	return float3();
}
matrix3x3 matrix3x3::operator*(float scalar)
{
	for (int i = 0; i < 9; i++)
		m[i] = m[i] * scalar;

	return *this;
}
matrix3x3 matrix3x3::operator/(float scalar)
{
	for (int i = 0; i < 9; i++)
		m[i] = m[i] / scalar;

	return *this;
}
matrix3x3& matrix3x3::operator*=(float scalar)
{
	for (int i = 0; i < 9; i++)
		m[i] *= scalar;

	return *this;
}
matrix3x3& matrix3x3::operator/=(float scalar)
{
	for (int i = 0; i < 9; i++)
		m[i] /= scalar;

	return *this;
}
matrix3x3& matrix3x3::identity()
{
	*this = { 1.0f, 0.0f, 0.0f,
			  0.0f, 1.0f, 0.0f,
			  0.0f, 0.0f, 1.0f };

	return *this;
}
matrix3x3 matrix3x3::rotationX(float degree)
{
	float angle = MathLib::toRadian(degree);
	matrix3x3 Temp =
	{
		1.0f,            0.0f,             0.0f,
		0.0f,    (cos(angle)),    (-sin(angle)),
		0.0f,    (sin(angle)),     (cos(angle))
	};
	return Temp;
}
matrix3x3 matrix3x3::rotationY(float degree)
{
	float angle = MathLib::toRadian(degree);
	matrix3x3 Temp =
	{
		(cos(angle)),     0.0f,    (sin(angle)),
		0.0f,             1.0f,            0.0f,
		(-sin(angle)),    0.0f,    (cos(angle))
	};
	return Temp;
}
matrix3x3 matrix3x3::rotationZ(float degree)
{
	float angle = MathLib::toRadian(degree);
	matrix3x3 Temp =
	{
		(cos(angle)),     (-sin(angle)),    0.0f,
		(sin(angle)),     (cos(angle)),     0.0f,
		0.0f,             0.0f,             1.0f
	};
	return Temp;
}
matrix3x3& matrix3x3::transpose()
{
	matrix3x3 temp;
	temp.Xx = Xx; temp.Xy = Yx; temp.Xz = Zx;
	temp.Yx = Xy; temp.Yy = Yy; temp.Yz = Zy;
	temp.Zx = Xz; temp.Zy = Yz; temp.Zz = Zz;

	for (int i = 0; i < 9; i++)
		m[i] = temp.m[i];

	return *this;
}
matrix3x3 operator*(float scalar, const matrix3x3& mt)
{
	matrix3x3 temp;
	for (int i = 0; i < 9; i++)
		temp.m[i] = mt.m[i] * scalar;
	return temp;
}
matrix3x3& operator*=(float scalar, const matrix3x3& mt)
{
	matrix3x3 temp;
	for (int i = 0; i < 9; i++)
		temp.m[i] = mt.m[i] * scalar;
	return temp;
}
float determinant(matrix3x3 mt)
{
	// Xx Xy Xz
	// Yx Yy Yz  Xx * ( Yy*Z  z - Zy*Yz ) - Xy*( Yx*Zz - Zx*Yz ) + Xz*( Xy*Zy - Xz*Yy )
	// Zx Zy Zz
	float det = 
		  mt.Xx * (mt.Yy * mt.Zz - mt.Zy * mt.Yz)
		- mt.Xy * (mt.Yx * mt.Zz - mt.Zx * mt.Yz)
		+ mt.Xz * (mt.Xy * mt.Zy - mt.Xz * mt.Yy);
	return det;
}

#pragma endregion

#pragma region matrix4x4
matrix4x4::matrix4x4()
{
	identity();
}
matrix4x4::matrix4x4(matrix4x4& mt)
{
	for (int i = 0; i < 16; i++)
	{
		m[i] = mt.m[i];
	}
}
matrix4x4::matrix4x4(const matrix4x4& mt)
{
	for (int i = 0; i < 16; i++)
	{
		m[i] = mt.m[i];
	}
}
matrix4x4::matrix4x4(float4 mx, float4 my, float4 mz, float4 mw)
{
	X.x = mx.x; X.y = mx.y; X.z = mx.z; X.w = mx.w;
	Y.x = my.x; Y.y = my.y; Y.z = my.z; Y.w = my.w;
	Z.x = mz.x; Z.y = mz.y; Z.z = mz.z; Z.w = mz.w;
	W.x = mw.x; W.y = mw.y; W.z = mw.z; W.w = mw.w;
}
matrix4x4::matrix4x4(float mXx, float mXy, float mXz, float mXw, float mYx, float mYy, float mYz, float mYw, float mZx, float mZy, float mZz, float mZw, float mWx, float mWy, float mWz, float mWw)
{
	Xx = mXx; Xy = mXy; Xz = mXz; Xw = mXw;
	Yx = mYx; Yy = mYy; Yz = mYz; Yw = mYw;
	Zx = mZx; Zy = mZy; Zz = mZz; Zw = mZw;
	Wx = mWx; Wy = mWy; Wz = mWz; Ww = mWw;
}

matrix4x4 matrix4x4::operator+(const matrix4x4& that)
{
	for (int i = 0; i < 16; i++)
	{
		m[i] = m[i] + that.m[i];
	}
	return *this;
}
matrix4x4 matrix4x4::operator-(const matrix4x4& that)
{
	for (int i = 0; i < 16; i++)
	{
		m[i] = m[i] - that.m[i];
	}
	return *this;
}
matrix4x4& matrix4x4::operator=(const matrix4x4& that)
{
	if (this != &that)
	{
		Xx = that.Xx; Xy = that.Xy; Xz = that.Xz; Xw = that.Xw;
		Yx = that.Yx; Yy = that.Yy; Yz = that.Yz; Yw = that.Yw;
		Zx = that.Zx; Zy = that.Zy; Zz = that.Zz; Zw = that.Zw;
		Wx = that.Wx; Wy = that.Wy; Wz = that.Wz; Ww = that.Ww;
	}
	return *this;
}
matrix4x4& matrix4x4::operator+=(const matrix4x4& that)
{
	for (int i = 0; i < 16; i++)
	{
		m[i] += that.m[i];
	}
	return *this;
}
matrix4x4& matrix4x4::operator-=(const matrix4x4& that)
{
	for (int i = 0; i < 16; i++)
	{
		m[i] -= that.m[i];
	}
	return *this;
}

bool matrix4x4::operator==(const matrix4x4& that)
{
	for (int i = 0; i < 16; i++)
	{
		if (!(m[i] == that.m[i]))
			return false;
	}
	return true;
}
bool matrix4x4::operator!=(const matrix4x4& that)
{
	for (int i = 0; i < 16; i++)
	{
		if (!(m[i] == that.m[i]))
			return true;
	}
	return false;
}

matrix4x4 matrix4x4::operator*(const matrix4x4& mt)
{
	// Xx Xy Xz Xw	    Xx Xy Xz Xw
	// Yx Yy Yz Yw  \/  Yx Yy Yz Yw
	// Zx Zy Zz Zw	/\  Zx Zy Zz Zw
	// Wx Wy Wz Ww	    Wx Wy Wz Ww
	matrix4x4 temp;

	temp.Xx = (Xx * mt.Xx) + (Xy * mt.Yx) + (Xz * mt.Zx) + (Xw * mt.Wx);
	temp.Xy = (Xx * mt.Xy) + (Xy * mt.Yy) + (Xz * mt.Zy) + (Xw * mt.Wy);
	temp.Xz = (Xx * mt.Xz) + (Xy * mt.Yz) + (Xz * mt.Zz) + (Xw * mt.Wz);
	temp.Xw = (Xx * mt.Xw) + (Xy * mt.Yw) + (Xz * mt.Zw) + (Xw * mt.Ww);

	temp.Yx = (Yx * mt.Xx) + (Yy * mt.Yx) + (Yz * mt.Zx) + (Yw * mt.Wx);
	temp.Yy = (Yx * mt.Xy) + (Yy * mt.Yy) + (Yz * mt.Zy) + (Yw * mt.Wy);
	temp.Yz = (Yx * mt.Xz) + (Yy * mt.Yz) + (Yz * mt.Zz) + (Yw * mt.Wz);
	temp.Yw = (Yx * mt.Xw) + (Yy * mt.Yw) + (Yz * mt.Zw) + (Yw * mt.Ww);

	temp.Zx = (Zx * mt.Xx) + (Zy * mt.Yx) + (Zz * mt.Zx) + (Zw * mt.Wx);
	temp.Zy = (Zx * mt.Xy) + (Zy * mt.Yy) + (Zz * mt.Zy) + (Zw * mt.Wy);
	temp.Zz = (Zx * mt.Xz) + (Zy * mt.Yz) + (Zz * mt.Zz) + (Zw * mt.Wz);
	temp.Zw = (Zx * mt.Xw) + (Zy * mt.Yw) + (Zz * mt.Zw) + (Zw * mt.Ww);

	temp.Wx = (Wx * mt.Xx) + (Wy * mt.Yx) + (Wz * mt.Zx) + (Ww * mt.Wx);
	temp.Wy = (Wx * mt.Xy) + (Wy * mt.Yy) + (Wz * mt.Zy) + (Ww * mt.Wy);
	temp.Wz = (Wx * mt.Xz) + (Wy * mt.Yz) + (Wz * mt.Zz) + (Ww * mt.Wz);
	temp.Ww = (Wx * mt.Xw) + (Wy * mt.Yw) + (Wz * mt.Zw) + (Ww * mt.Ww);

	return matrix4x4(temp);
}
matrix4x4& matrix4x4::operator*=(const matrix4x4& mt)
{
	matrix4x4 temp;

	temp.Xx = (Xx * mt.Xx) + (Xy * mt.Yx) + (Xz * mt.Zx) + (Xw * mt.Wx);
	temp.Xy = (Xx * mt.Xy) + (Xy * mt.Yy) + (Xz * mt.Zy) + (Xw * mt.Wy);
	temp.Xz = (Xx * mt.Xz) + (Xy * mt.Yz) + (Xz * mt.Zz) + (Xw * mt.Wz);
	temp.Xw = (Xx * mt.Xw) + (Xy * mt.Yw) + (Xz * mt.Zw) + (Xw * mt.Ww);

	temp.Yx = (Yx * mt.Xx) + (Yy * mt.Yx) + (Yz * mt.Zx) + (Yw * mt.Wx);
	temp.Yy = (Yx * mt.Xy) + (Yy * mt.Yy) + (Yz * mt.Zy) + (Yw * mt.Wy);
	temp.Yz = (Yx * mt.Xz) + (Yy * mt.Yz) + (Yz * mt.Zz) + (Yw * mt.Wz);
	temp.Yw = (Yx * mt.Xw) + (Yy * mt.Yw) + (Yz * mt.Zw) + (Yw * mt.Ww);

	temp.Zx = (Zx * mt.Xx) + (Zy * mt.Yx) + (Zz * mt.Zx) + (Zw * mt.Wx);
	temp.Zy = (Zx * mt.Xy) + (Zy * mt.Yy) + (Zz * mt.Zy) + (Zw * mt.Wy);
	temp.Zz = (Zx * mt.Xz) + (Zy * mt.Yz) + (Zz * mt.Zz) + (Zw * mt.Wz);
	temp.Zw = (Zx * mt.Xw) + (Zy * mt.Yw) + (Zz * mt.Zw) + (Zw * mt.Ww);

	temp.Wx = (Wx * mt.Xx) + (Wy * mt.Yx) + (Wz * mt.Zx) + (Ww * mt.Wx);
	temp.Wy = (Wx * mt.Xy) + (Wy * mt.Yy) + (Wz * mt.Zy) + (Ww * mt.Wy);
	temp.Wz = (Wx * mt.Xz) + (Wy * mt.Yz) + (Wz * mt.Zz) + (Ww * mt.Wz);
	temp.Ww = (Wx * mt.Xw) + (Wy * mt.Yw) + (Wz * mt.Zw) + (Ww * mt.Ww);

	for (int i = 0; i < 16; i++)
	{
		m[i] = temp.m[i];
	}

	return *this;
}
// Matrix4x4 X float4 Column = float4 Column
float4 matrix4x4::operator*(const float4 f)
{
	//	Xx Xy Xz Xw      X
	//	Yx Yy Yz Yw  \/  Y  ==    X Y Z W
	//	Zx Zy Zz Zw  /\  Z  ==
	//	Wx Wy Wz Ww      W
	float4 temp;

	temp.x = (Xx * f.x) + (Xy * f.y) + (Xz * f.z) + (Xw * f.w);
	temp.y = (Yx * f.x) + (Yy * f.y) + (Yz * f.z) + (Yw * f.w);
	temp.z = (Zx * f.x) + (Zy * f.y) + (Zz * f.z) + (Zw * f.w);
	temp.w = (Wx * f.x) + (Wy * f.y) + (Wz * f.z) + (Ww * f.w);

	return temp;
}
// float4 Row X Matrix4x4 = float4 Row
float4 operator*(const float4 f, matrix4x4 mt)
{
	//              Xx Xy Xz Xw
	// X Y Z W  \/  Yx Yy Yz Yw
	//          /\  Zx Zy Zz Zw
	//              Wx Wy Wz Ww
	float4 temp;
	temp.x = (f.x * mt.Xx) + (f.y * mt.Yx) + (f.z * mt.Zx) + (f.w * mt.Wx);
	temp.y = (f.x * mt.Xy) + (f.y * mt.Yy) + (f.z * mt.Zy) + (f.w * mt.Wy);
	temp.z = (f.x * mt.Xz) + (f.y * mt.Yz) + (f.z * mt.Zz) + (f.w * mt.Wz);
	temp.w = (f.x * mt.Xw) + (f.y * mt.Yw) + (f.z * mt.Zw) + (f.w * mt.Ww);
	return temp;
}

matrix4x4 matrix4x4::operator*(float scalar)
{
	for (int i = 0; i < 16; i++)
		m[i] = m[i] * scalar;

	return *this;
}
matrix4x4 operator*(float scalar, const matrix4x4& mt)
{
	matrix4x4 temp;
	for (int i = 0; i < 16; i++)
		temp.m[i] = mt.m[i] * scalar;
	return temp;
}
matrix4x4 matrix4x4::operator/(float scalar)
{
	for (int i = 0; i < 16; i++)
		m[i] = m[i] / scalar;

	return *this;
}
matrix4x4& matrix4x4::operator*=(float scalar)
{
	for (int i = 0; i < 16; i++)
		m[i] *= scalar;

	return *this;
}
matrix4x4& operator*=(float scalar, const matrix4x4& mt)
{
	matrix4x4 temp;
	for (int i = 0; i < 16; i++)
		temp.m[i] = mt.m[i] * scalar;

	return temp;
}
matrix4x4& matrix4x4::operator/=(float scalar)
{
	for (int i = 0; i < 16; i++)
		m[i] /= scalar;

	return *this;
}

matrix4x4& matrix4x4::identity()
{
	*this = { 1.0f, 0.0f, 0.0f, 0.0f,
					  0.0f, 1.0f, 0.0f, 0.0f,
					  0.0f, 0.0f, 1.0f, 0.0f,
					  0.0f, 0.0f, 0.0f, 1.0f };
	return *this;
}
matrix4x4& matrix4x4::inverse()
{
	*this = inverse(*this);
	return *this;
}
matrix4x4 matrix4x4::inverse(const matrix4x4& mt)
{
#if defined(FastInversion)

	//	Xx Xy Xz Xw      00 01 02 03      0  1  2  3
	//	Yx Yy Yz Yw      10 11 12 13      4  5  6  7
	//	Zx Zy Zz Zw      20 21 22 23      8  9  10 11
	//	Wx Wy Wz Ww      30 31 32 33      12 13 14 15
	float A2323 = mt(2, 2) * mt(3, 3) - mt(2, 3) * mt(3, 2);  // 10 11 14 15
	float A1323 = mt(2, 1) * mt(3, 3) - mt(2, 3) * mt(3, 1);  //  9 11 13 15
	float A1223 = mt(2, 1) * mt(3, 2) - mt(2, 2) * mt(3, 1);  //  9 10 13 14
	float A0323 = mt(2, 0) * mt(3, 3) - mt(2, 3) * mt(3, 0);  //  8 11 12 15
	float A0223 = mt(2, 0) * mt(3, 2) - mt(2, 2) * mt(3, 0);  //  8 10 12 14
	float A0123 = mt(2, 0) * mt(3, 1) - mt(2, 1) * mt(3, 0);  //  8  9 12 13
	float A2313 = mt(1, 2) * mt(3, 3) - mt(1, 3) * mt(3, 2);  //  6  7 14 15
	float A1313 = mt(1, 1) * mt(3, 3) - mt(1, 3) * mt(3, 1);  //  5  7 13 15
	float A1213 = mt(1, 1) * mt(3, 2) - mt(1, 2) * mt(3, 1);  //  5  6 13 14
	float A2312 = mt(1, 2) * mt(2, 3) - mt(1, 3) * mt(2, 2);  //  6  7 10 11
	float A1312 = mt(1, 1) * mt(2, 3) - mt(1, 3) * mt(2, 1);  //  5  7  9 11
	float A1212 = mt(1, 1) * mt(2, 2) - mt(1, 2) * mt(2, 1);  //  5  6  9 10
	float A0313 = mt(1, 0) * mt(3, 3) - mt(1, 3) * mt(3, 0);  //  4  7 12 15
	float A0213 = mt(1, 0) * mt(3, 2) - mt(1, 2) * mt(3, 0);  //  4  6 12 14
	float A0312 = mt(1, 0) * mt(2, 3) - mt(1, 3) * mt(2, 0);  //  4  7  8 11
	float A0212 = mt(1, 0) * mt(2, 2) - mt(1, 2) * mt(2, 0);  //  4  6 10
	float A0113 = mt(1, 0) * mt(3, 1) - mt(1, 1) * mt(3, 0);  //  4
	float A0112 = mt(1, 0) * mt(2, 1) - mt(1, 1) * mt(2, 0);  //  4

	float det;
	det = mt(0, 0) * (mt(1, 1) * A2323 - mt(1, 2) * A1323 + mt(1, 3) * A1223)
		- mt(0, 1) * (mt(1, 0) * A2323 - mt(1, 2) * A0323 + mt(1, 3) * A0223)
		+ mt(0, 2) * (mt(1, 0) * A1323 - mt(1, 1) * A0323 + mt(1, 3) * A0123)
		- mt(0, 3) * (mt(1, 0) * A1223 - mt(1, 1) * A0223 + mt(1, 2) * A0123);
	det = 1 / det;

	matrix4x4 tM;
	tM(0, 0) = det * (mt(1, 1) * A2323 - mt(1, 2) * A1323 + mt(1, 3) * A1223);
	tM(0, 1) = det * -(mt(0, 1) * A2323 - mt(0, 2) * A1323 + mt(0, 3) * A1223);
	tM(0, 2) = det * (mt(0, 1) * A2313 - mt(0, 2) * A1313 + mt(0, 3) * A1213);
	tM(0, 3) = det * -(mt(0, 1) * A2312 - mt(0, 2) * A1312 + mt(0, 3) * A1212);
	tM(1, 0) = det * -(mt(1, 0) * A2323 - mt(1, 2) * A0323 + mt(1, 3) * A0223);
	tM(1, 1) = det * (mt(0, 0) * A2323 - mt(0, 2) * A0323 + mt(0, 3) * A0223);
	tM(1, 2) = det * -(mt(0, 0) * A2313 - mt(0, 2) * A0313 + mt(0, 3) * A0213);
	tM(1, 3) = det * (mt(0, 0) * A2312 - mt(0, 2) * A0312 + mt(0, 3) * A0212);
	tM(2, 0) = det * (mt(1, 0) * A1323 - mt(1, 1) * A0323 + mt(1, 3) * A0123);
	tM(2, 1) = det * -(mt(0, 0) * A1323 - mt(0, 1) * A0323 + mt(0, 3) * A0123);
	tM(2, 2) = det * (mt(0, 0) * A1313 - mt(0, 1) * A0313 + mt(0, 3) * A0113);
	tM(2, 3) = det * -(mt(0, 0) * A1312 - mt(0, 1) * A0312 + mt(0, 3) * A0112);
	tM(3, 0) = det * -(mt(1, 0) * A1223 - mt(1, 1) * A0223 + mt(1, 2) * A0123);
	tM(3, 1) = det * (mt(0, 0) * A1223 - mt(0, 1) * A0223 + mt(0, 2) * A0123);
	tM(3, 2) = det * -(mt(0, 0) * A1213 - mt(0, 1) * A0213 + mt(0, 2) * A0113);
	tM(3, 3) = det * (mt(0, 0) * A1212 - mt(0, 1) * A0212 + mt(0, 2) * A0112);
}
#else
	//matrix4x4 matrix = mt;
	//
	//float det = determinant(matrix);
	//
	//float invDet = 1.0f / det;
	//
	//matrix4x4 result = invDet * matrix;
	//
	//return result;

	//	Xx Xy Xz Xw      00 01 02 03      0  1  2  3
	//	Yx Yy Yz Yw      10 11 12 13      4  5  6  7
	//	Zx Zy Zz Zw      20 21 22 23      8  9  10 11
	//	Wx Wy Wz Ww      30 31 32 33      12 13 14 15
	float a0 = mt.m[0] * mt.m[5] - mt.m[1] * mt.m[4];  //  0  1  4  5
	float a1 = mt.m[0] * mt.m[6] - mt.m[2] * mt.m[4];  //  0  2  4  6
	float a2 = mt.m[0] * mt.m[7] - mt.m[3] * mt.m[4];  //  0  3  4  7
	float a3 = mt.m[1] * mt.m[6] - mt.m[2] * mt.m[5];  //  1  2  5  6
	float a4 = mt.m[1] * mt.m[7] - mt.m[3] * mt.m[5];  //  1  3  5  7
	float a5 = mt.m[2] * mt.m[7] - mt.m[3] * mt.m[6];  //  2  3  6  7

	float b0 = mt.m[4] * mt.m[9] - mt.m[5] * mt.m[8];  //  4  5  8  9
	float b1 = mt.m[4] * mt.m[10] - mt.m[6] * mt.m[8];  //  4  6  8 10
	float b2 = mt.m[4] * mt.m[11] - mt.m[7] * mt.m[8];  //  4  7  8 11
	float b3 = mt.m[5] * mt.m[10] - mt.m[6] * mt.m[9];  //  5  6  9 10
	float b4 = mt.m[5] * mt.m[11] - mt.m[7] * mt.m[9];  //  5  7  9 11
	float b5 = mt.m[6] * mt.m[11] - mt.m[7] * mt.m[10]; //  6  7 10 11

	float c0 = mt.m[8] * mt.m[13] - mt.m[9] * mt.m[12]; //  8  9 12 13
	float c1 = mt.m[8] * mt.m[14] - mt.m[10] * mt.m[12]; //  8 10 12 14
	float c2 = mt.m[8] * mt.m[15] - mt.m[11] * mt.m[12]; //  8 11 12 15
	float c3 = mt.m[9] * mt.m[14] - mt.m[10] * mt.m[13]; //  9 10 13 14
	float c4 = mt.m[9] * mt.m[15] - mt.m[11] * mt.m[13]; //  9 11 13 15
	float c5 = mt.m[10] * mt.m[15] - mt.m[11] * mt.m[14]; // 10 11 14 15

	float det = a0 * c5 - a1 * c4 + a2 * c3 + a3 * c2 - a4 * c1 + a5 * c0;

	matrix4x4 outM;
	outM.m[0] = mt.m[5] * c5 - mt.m[6] * c4 + mt.m[7] * c3;
	outM.m[1] = -mt.m[1] * c5 + mt.m[2] * c4 - mt.m[3] * c3;
	outM.m[2] = mt.m[13] * a5 - mt.m[14] * a4 + mt.m[15] * a3;
	outM.m[3] = -mt.m[9] * a5 + mt.m[10] * a4 - mt.m[11] * a3;

	outM.m[4] = -mt.m[4] * c5 + mt.m[6] * c2 - mt.m[7] * c1;
	outM.m[5] = mt.m[0] * c5 - mt.m[2] * c2 + mt.m[3] * c1;
	outM.m[6] = -mt.m[12] * a5 + mt.m[14] * a2 - mt.m[15] * a1;
	outM.m[7] = mt.m[8] * a5 - mt.m[10] * a2 + mt.m[11] * a1;

	outM.m[8] = mt.m[4] * c4 - mt.m[5] * c2 + mt.m[7] * c0;
	outM.m[9] = -mt.m[0] * c4 + mt.m[1] * c2 - mt.m[3] * c0;
	outM.m[10] = mt.m[12] * a4 - mt.m[13] * a2 + mt.m[15] * a0;
	outM.m[11] = -mt.m[8] * a4 + mt.m[9] * a2 - mt.m[11] * a0;

	outM.m[12] = -mt.m[4] * c3 + mt.m[5] * c1 - mt.m[6] * c0;
	outM.m[13] = mt.m[0] * c3 - mt.m[1] * c1 + mt.m[2] * c0;
	outM.m[14] = -mt.m[12] * a3 + mt.m[13] * a1 - mt.m[14] * a0;
	outM.m[15] = mt.m[8] * a3 - mt.m[9] * a1 + mt.m[10] * a0;

	outM = outM * (1.0f / det);

	return outM;
#endif
}
float determinant(matrix4x4 mt)
{
	//   Xx Xy Xz Xw
	//   Yx Yy Yz Yw
	//   Zx Zy Zz Zw
	//   Wx Wy Wz Ww

	// First A = Xx
	//	   Yy Yz Yw
	// A X Zy Zz Zw ==> A*( Yy*( Zz*Ww - Wz*Zw) - Yz*( Zy*Ww - Wy*Zw) + Yw*( Zy*Wz - Wy*Zz))
	//	   Wy Wz Ww
	float A = mt.Xx * (mt.Yy * (mt.Zz * mt.Ww - mt.Wz * mt.Zw) - mt.Yz * (mt.Zy * mt.Ww - mt.Wy * mt.Zw) + mt.Yw * (mt.Zy * mt.Wz - mt.Wy * mt.Zz));
	// Second B = Xy
	//	   Yx Yz Yw
	// B X Zx Zz Zw ==> B*( Yx*( Zz*Ww - Wz*Zw) - Yz*( Zx*Ww - Wx*Zw) + Yw*( Zx*Wz - Wx*Zz))
	//	   Wx Wz Ww
	float B = mt.Xy * (mt.Yx * (mt.Zz * mt.Ww - mt.Wz * mt.Zw) - mt.Yz * (mt.Zx * mt.Ww - mt.Wx * mt.Zw) + mt.Yw * (mt.Zx * mt.Wz - mt.Wx * mt.Zz));
	// Third C = Xz
	//	   Yx Yy Yw
	// C X Zx Zy Zw ==> C*( Yx*( Zy*Ww - Wy*Zw) - Yy*( Zx*Ww - Wx*Zw) + Yw*( Zx*Wy - Wx*Zy))
	//	   Wx Wy Ww
	float C = mt.Xz * (mt.Yx * (mt.Zy * mt.Ww - mt.Wy * mt.Zw) - mt.Yy * (mt.Zx * mt.Ww - mt.Wx * mt.Zw) + mt.Yw * (mt.Zx * mt.Wy - mt.Wx * mt.Zy));
	// Fourth D = Xw
	//	   Yx Yy Yz
	// D X Zx Zy Zz ==> D*( Yx*( Zy*Wz - Wy*Zz) - Yy*( Zx*Wz - Wx*Zz) + Yz*( Zx*Wy - Wx*Zy))
	//	   Wx Wy Wz
	float D = mt.Xw * (mt.Yx * (mt.Zy * mt.Wz - mt.Wy * mt.Zz) - mt.Yy * (mt.Zx * mt.Wz - mt.Wx * mt.Zz) + mt.Yz * (mt.Zx * mt.Wy - mt.Wx * mt.Zy));

	float det4x4 = A - B + C - D;
	return det4x4;
}
matrix4x4 MinorMatrix(matrix4x4 mt)
{
	//   Xx Xy Xz Xw
	//   Yx Yy Yz Yw
	//   Zx Zy Zz Zw
	//   Wx Wy Wz Ww

	return matrix4x4();
}
matrix4x4& matrix4x4::transpose()
{
	//   Xx Xy Xz Xw
	//   Yx Yy Yz Yw
	//   Zx Zy Zz Zw
	//   Wx Wy Wz Ww
	matrix4x4 temp;
	temp.Xx = Xx; temp.Xy = Yx; temp.Xz = Zx; temp.Xw = Wx;
	temp.Yx = Xy; temp.Yy = Yy; temp.Yz = Zy; temp.Yw = Wy;
	temp.Zx = Xz; temp.Zy = Yz; temp.Zz = Zz; temp.Zw = Wz;
	temp.Wx = Xw; temp.Wy = Yw; temp.Wz = Zw; temp.Ww = Ww;

	//for (int i = 0; i < 16; i++)

	return temp;
}

float3& matrix4x4::GetAxisX(matrix4x4& mIn)
{
	return *(float3*)&mIn.Xx;
}
float3& matrix4x4::GetAxisY(matrix4x4& mIn)
{
	return *(float3*)&mIn.Yx;
}
float3& matrix4x4::GetAxisZ(matrix4x4& mIn)
{
	return *(float3*)&mIn.Zx;
}
float3& matrix4x4::GetAxisW(matrix4x4& mIn)
{
	return *(float3*)&mIn.Wx;
}

matrix4x4 matrix4x4::rotationX(float degree)
{
	float angle = MathLib::toRadian(degree);
	matrix4x4 Temp =
	{
		1.0f,            0.0f,             0.0f, 0.0f,
		0.0f,    (cos(angle)),    (-sin(angle)), 0.0f,
		0.0f,    (sin(angle)),     (cos(angle)), 0.0f,
		0.0f,            0.0f,             0.0f, 1.0f
	};
	return Temp;
}
matrix4x4 matrix4x4::rotationY(float degree)
{
	float angle = MathLib::toRadian(degree);
	matrix4x4 Temp =
	{
		(cos(angle)),     0.0f,    (sin(angle)), 0.0f,
		0.0f,             1.0f,            0.0f, 0.0f,
		(-sin(angle)),    0.0f,    (cos(angle)), 0.0f,
		0.0f,             0.0f,            0.0f, 1.0f
	};
	return Temp;
}
matrix4x4 matrix4x4::rotationZ(float degree)
{
	float angle = MathLib::toRadian(degree);
	matrix4x4 Temp =
	{
		(cos(angle)),     (-sin(angle)),    0.0f, 0.0f,
		(sin(angle)),     (cos(angle)),     0.0f, 0.0f,
		0.0f,             0.0f,             1.0f, 0.0f,
		0.0f,             0.0f,             0.0f, 1.0f
	};
	return Temp;
}
matrix4x4 matrix4x4::translation(float x, float y, float z)
{
	matrix4x4 temp = { 1.0f, 0.0f, 0.0f, 0.0f,
					   0.0f, 1.0f, 0.0f, 0.0f,
					   0.0f, 0.0f, 1.0f, 0.0f,
						  x,    y,    z, 1.0f };
	return temp;
}
matrix4x4 matrix4x4::translation(float3 vT)
{
	matrix4x4 temp = { 1.0f, 0.0f, 0.0f, 0.0f,
					   0.0f, 1.0f, 0.0f, 0.0f,
					   0.0f, 0.0f, 1.0f, 0.0f,
					   vT.x, vT.y, vT.z, 1.0f };
	return temp;
}
matrix4x4 matrix4x4::scale(float x, float y, float z)
{
	matrix4x4 temp = { x, 0.0f, 0.0f, 0.0f,
					   0.0f,    y, 0.0f, 0.0f,
					   0.0f, 0.0f,    z, 0.0f,
					   0.0f, 0.0f, 0.0f, 1.0f };
	return temp;
}
matrix4x4 matrix4x4::scale(float3 vS)
{
	matrix4x4 temp = { vS.x, 0.0f, 0.0f, 0.0f,
					   0.0f, vS.y, 0.0f, 0.0f,
					   0.0f, 0.0f, vS.z, 0.0f,
					   0.0f, 0.0f, 0.0f, 1.0f };
	return temp;
}
#pragma endregion

#pragma region MathLib

MathLib::MathLib()
{
}

MathLib::~MathLib()
{
}

float MathLib::squareRoot(float value)
{
	return sqrt(value);
}
float MathLib::abs(float value)
{
	return -value;
}
float MathLib::pow(float value, float exponent)
{
	float temp = 6;
	int max = static_cast<int>(exponent) - 1;
	for (int i = 0; i < max; i++)
	{
		temp *= temp;
	}
	return temp;
}
#pragma region TrigonometryFunction
float MathLib::toRadian(float degree)
{
	return degree * PI / 180.0f;
}
float MathLib::toDegree(float radian)
{
	return radian * 180.0f / PI;
}
float MathLib::sine(float radian)
{
	return sin(radian);
}
float MathLib::cosine(float radian)
{
	return cos(radian);
}
float MathLib::tangent(float radian)
{
	return tan(radian);
}
float MathLib::arcSine(float value)
{
	return asin(value);
}
float MathLib::arcCosine(float value)
{
	return acos(value);
}
float MathLib::arcTanggent(float value)
{
	return atan(value);
}
float MathLib::hypotenuse(float lhs, float rhs)
{
	return squareRoot(lhs * lhs + rhs * rhs);
}
#pragma endregion
#pragma region VectorFunction

float MathLib::dot(float2 lhs, float2 rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y;
}
float MathLib::dot(const float2 lhs)
{
	return lhs.x * lhs.x + lhs.y * lhs.y;
}
float MathLib::dot(float3 lhs, float3 rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
}
float MathLib::dot(const float3 lhs)
{
	return lhs.x * lhs.x + lhs.y * lhs.y + lhs.z * lhs.z;
}
float MathLib::dot(float4 lhs, float4 rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z + lhs.w * rhs.w;
}
float MathLib::dot(const float4 lhs)
{
	return lhs.x * lhs.x + lhs.y * lhs.y + lhs.z * lhs.z + lhs.w * lhs.w;;
}

float3 MathLib::cross(float3 lhs, float3 rhs)
{
	float A = lhs.y * rhs.z - lhs.z * rhs.y;
	float B = lhs.z * rhs.x - lhs.x * rhs.z;
	float C = lhs.x * rhs.y - lhs.y * rhs.x;

	return float3(A, B, C);
}
float3 MathLib::cross(float3 lhs)
{
	float A = lhs.y * lhs.z - lhs.z * lhs.y;
	float B = lhs.z * lhs.x - lhs.x * lhs.z;
	float C = lhs.x * lhs.y - lhs.y * lhs.x;

	return float3(A, B, C);
}

float MathLib::distanceSquared(float2 lhs, float2 rhs)
{
	float x = lhs.x - rhs.x;
	float y = lhs.y - rhs.x;
	return (x * x + y * y);
}
float MathLib::distanceSquared(float3 lhs, float3 rhs)
{
	float x = lhs.x - rhs.x;
	float y = lhs.y - rhs.x;
	float z = lhs.z - rhs.z;
	return (x * x + y * y + z * z);
}

float2 MathLib::normalize(float2 vector)
{
	float length = sqrt(vector.lengthSquared());
	return float2(vector.x / length, vector.y / length);
}
float3 MathLib::normalize(float3 vector)
{
	float length = sqrt(vector.lengthSquared());
	return float3(vector.x / length, vector.y / length, vector.z / length);
}
float4 MathLib::normalize(float4 vector)
{
	float length = sqrt(vector.lengthSquared());
	return float4(vector.x / length, vector.y / length, vector.z / length, vector.w / length);
}
#pragma endregion
#pragma endregion