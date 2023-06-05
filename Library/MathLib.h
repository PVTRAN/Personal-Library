#pragma once

#include "IncludeHeader.h"

///////////////////////////////////////////
// define Variable
//////////////////////////////////////////
#pragma region preprocessDefine
#define PI 3.14159265359f
struct float2;
struct float3;
struct float4;
struct matrix3x3;
struct matrix4x4;
class MathLib;
#pragma endregion
///////////////////////////////////////////
// Struct and Classes
//////////////////////////////////////////
#pragma region IfndefVariable

#ifndef FLOAT2
#define FLOAT2
typedef struct float2
{
	union
	{
		struct
		{
			float x;
			float y;
		};
		float xy[2];
	};
	float2();
	float2(float X, float Y);
	// (x1, y1) + (x2, y2)
	float2 operator+(const float2& that);
	// (x1, y1) - (x2, y2)
	float2 operator-(const float2& that);
	// float2 => -float2
	float2 operator-();

	//Assignment Operator
	float2& operator=(const float2& that);
	// (x1, y1) += (x2, y2)
	float2& operator+=(const float2& that);
	// (x1, y1) -= (x2, y2)
	float2& operator-=(const float2& that);

	//Boolean Operator
	bool operator==(const float2& that);
	bool operator!=(const float2& that);

	// Scalar operation
	float2 operator*(float scalar);
	float2 operator/(float scalar);
	float2& operator*=(float scalar);
	float2& operator/=(float scalar);

	float lengthSquared();
	float2 perpendicular();
}float2;

#endif // !FLOAT2

#ifndef FLOAT3
#define FLOAT3
typedef struct float3
{
private:
	friend struct matrix3x3;
public:
	union
	{
		struct
		{
			float x;
			float y;
			float z;
		};
		float xyz[3];
		float2 xy;
	};
	float3();
	float3(float X, float Y, float Z);

	float3 operator-();

	// (x1, y1, z1) + (x2, y2, z2)
	float3 operator+(const float3& that);
	// (x1, y1, z1) - (x2, y2, z2)
	float3 operator-(const float3& that);
	//Assignment Operator
	float3& operator=(const float3& that);
	// (x1, y1, z1) += (x2, y2, z2)
	float3& operator+=(const float3& that);
	// (x1, y1, z1) -= (x2, y2, z2)
	float3& operator-=(const float3& that);
	//Boolean Operator
	bool operator==(const float3& that);
	bool operator!=(const float3& that);

	// Scalar operation
	float3 operator*(float scalar);
	float3 operator/(float scalar);
	float3& operator*=(float scalar);
	float3& operator/=(float scalar);

	float lengthSquared();
	float3 perpendicular();

	friend float3 operator*(const float3 f, matrix3x3 mt);
}float3;

#endif // !FLOAT3

#ifndef FLOAT4
#define FLOAT4
typedef struct float4
{
private:
	friend struct matrix4x4;
public:
	union
	{
		struct
		{
			float x;
			float y;
			float z;
			float w;
		};
		struct
		{
			float2 xy;
			float2 zw;
		};
		float xyzw[4];
	};

	float4();
	float4(float X, float Y, float Z, float W);

	float4 operator-();

	// (x1, y1, z1, w1) + (x2, y2, z2, w2)
	float4 operator+(const float4& that);
	// (x1, y1, z1, w1) - (x2, y2, z2, w2)
	float4 operator-(const float4& that);
	//Assignment Operator
	float4& operator=(const float4& that);
	// (x1, y1, z1, w1) += (x2, y2, z2, w2)
	float4& operator+=(const float4& that);
	// (x1, y1, z1, w1) -= (x2, y2, z2, w2)
	float4& operator-=(const float4& that);
	//Boolean Operator
	bool operator==(const float4& that);
	bool operator!=(const float4& that);

	// Row float4 multiplier
	friend float4 operator*(const float4 f, matrix4x4 m);

	// Scalar operation
	float4 operator*(float scalar);
	float4 operator/(float scalar);
	float4& operator*=(float scalar);
	float4& operator/=(float scalar);

	float lengthSquared();
	float4 perpendicular();
}float4;

#endif // !FLOAT4

#ifndef MATRIX2X2
#define MATRIX2X2

typedef struct matrix2x2
{
	union
	{
		struct
		{
			float Xx, Xy;
			float Yx, Yy;
		};
		struct
		{
			float2 X;
			float2 Y;
		};
		float m[4];
		float M[2][2];
	};
	// default & copy constructor
	matrix2x2();
	matrix2x2(matrix2x2& mt);
	matrix2x2(const matrix2x2& mt);
	matrix2x2(float2 mx, float2 my);
	matrix2x2(float mXx, float mXy, float mYx, float mYy);

	//Operator
	matrix2x2 operator+(const matrix2x2& that);
	matrix2x2 operator-(const matrix2x2& that);
	matrix2x2& operator=(const matrix2x2& that);
	matrix2x2& operator+=(const matrix2x2& that);
	matrix2x2& operator-=(const matrix2x2& that);
	bool operator==(const matrix2x2& that);
	bool operator!=(const matrix2x2& that);

	matrix2x2 operator*(const matrix2x2& mt);
	matrix2x2& operator*=(const matrix2x2& mt);

	// Column float2 multiplier
	float2 operator*(const float2 f);
	// Row float2 multiplier
	friend float2 operator*(const float2 f, matrix2x2 mt);

	// Scalar operation
	matrix2x2 operator*(float scalar);
	friend matrix2x2 operator*(float scalar, const matrix2x2& mt);
	matrix2x2 operator/(float scalar);
	matrix2x2& operator*=(float scalar);
	friend matrix2x2& operator*=(float scalar, const matrix2x2& mt);
	matrix2x2& operator/=(float scalar);

	//matrix2x2& inverse();
	//matrix2x2 inverse(const matrix2x2& mt);
	matrix2x2& identity();

	friend float determinant(matrix2x2 mt);
	matrix2x2& transpose();
}matrix2x2;
#endif // !MATRIX2X2

#ifndef MATRIX3X3
#define MATRIX3X3

typedef struct matrix3x3
{
private:
	friend class MathLib;
public:
	union
	{
		struct
		{
			float Xx, Xy, Xz;
			float Yx, Yy, Yz;
			float Zx, Zy, Zz;
		};
		struct
		{
			float3 X;
			float3 Y;
			float3 Z;
		};
		float m[9];
		float M[3][3];
	};
	// default & copy constructor
	matrix3x3();
	matrix3x3(matrix3x3& mt);
	matrix3x3(const matrix3x3& mt);
	matrix3x3(float3 mx, float3 my, float3 mz);
	matrix3x3(float mXx, float mXy, float mXz,
		float mYx, float mYy, float mYz,
		float mZx, float mZy, float mZz);

	//Operator
	matrix3x3 operator+(const matrix3x3& that);
	matrix3x3 operator-(const matrix3x3& that);
	matrix3x3& operator=(const matrix3x3& that);
	matrix3x3& operator+=(const matrix3x3& that);
	matrix3x3& operator-=(const matrix3x3& that);
	bool operator==(const matrix3x3& that);
	bool operator!=(const matrix3x3& that);

	matrix3x3 operator*(const matrix3x3& mt);
	matrix3x3& operator*=(const matrix3x3& mt);

	// Column float3 multiplier
	float3 operator*(const float3 f);
	// Row float3 multiplier
	friend float3 operator*(const float3 f, matrix3x3 mt);

	// Scalar operation
	matrix3x3 operator*(float scalar);
	friend matrix3x3 operator*(float scalar, const matrix3x3& mt);
	matrix3x3 operator/(float scalar);
	matrix3x3& operator*=(float scalar);
	friend matrix3x3& operator*=(float scalar, const matrix3x3& mt);
	matrix3x3& operator/=(float scalar);

	//matrix3x3& inverse();
	//matrix3x3 inverse(const matrix3x3& mt);
	matrix3x3& identity();

	matrix3x3 rotationX(float degree);
	matrix3x3 rotationY(float degree);
	matrix3x3 rotationZ(float degree);

	friend float determinant(matrix3x3 mt);
	matrix3x3& transpose();
}matrix3x3;

#endif // !MATRIX3X3

#ifndef MATRIX4X4
#define MATRIX4X4

typedef struct matrix4x4
{
private:
	friend class MathLib;
public:
	union
	{
		struct
		{
			float Xx, Xy, Xz, Xw;
			float Yx, Yy, Yz, Yw;
			float Zx, Zy, Zz, Zw;
			float Wx, Wy, Wz, Ww;
		};
		struct
		{
			float4 X;
			float4 Y;
			float4 Z;
			float4 W;
		};
		float m[16];
		float M[4][4];
	};

	matrix4x4();
	matrix4x4(matrix4x4& mt);
	matrix4x4(const matrix4x4& mt);
	matrix4x4(float4 mx, float4 my, float4 mz, float4 mw);
	matrix4x4(float mXx, float mXy, float mXz, float mXw,
		float mYx, float mYy, float mYz, float mYw,
		float mZx, float mZy, float mZz, float mZw,
		float mWx, float mWy, float mWz, float mWw);

	//Operator
	matrix4x4 operator+(const matrix4x4& that);
	matrix4x4 operator-(const matrix4x4& that);
	matrix4x4& operator=(const matrix4x4& that);
	matrix4x4& operator+=(const matrix4x4& that);
	matrix4x4& operator-=(const matrix4x4& that);
	bool operator==(const matrix4x4& that);
	bool operator!=(const matrix4x4& that);

	matrix4x4 operator*(const matrix4x4& mt);
	matrix4x4& operator*=(const matrix4x4& mt);

	// Column float4 multiplier
	float4 operator*(const float4 f);
	// Row float4 multiplier
	friend float4 operator*(const float4 f, matrix4x4 mt);

	// Scalar operation
	matrix4x4 operator*(float scalar);
	friend matrix4x4 operator*(float scalar, const matrix4x4& mt);
	matrix4x4 operator/(float scalar);
	matrix4x4& operator*=(float scalar);
	friend matrix4x4& operator*=(float scalar, const matrix4x4& mt);
	matrix4x4& operator/=(float scalar);

	matrix4x4& identity();

	matrix4x4& inverse();
	matrix4x4 inverse(const matrix4x4& mt);
	friend float determinant(matrix4x4 mt);

	friend matrix4x4 MinorMatrix(matrix4x4 mt);

	matrix4x4& transpose();

	// X-Axis
	float3& GetAxisX(matrix4x4& mIn);
	// Y-Axis
	float3& GetAxisY(matrix4x4& mIn);
	// Z-Axis
	float3& GetAxisZ(matrix4x4& mIn);
	// Origin/ Location
	float3& GetAxisW(matrix4x4& mIn);

	// rotation & Translation

	matrix4x4 rotationX(float degree);
	matrix4x4 rotationY(float degree);
	matrix4x4 rotationZ(float degree);

	matrix4x4 translation(float x, float y, float z);
	matrix4x4 translation(float3 vT);
	matrix4x4 scale(float x, float y, float z);
	matrix4x4 scale(float3 vS);

	float& operator()(unsigned int x, unsigned int y)
	{
		return m[x + 4 * y];
	}
	float operator()(unsigned int x, unsigned int y) const
	{
		return m[x + 4 * y];
	}
}matrix4x4;

#endif // !MATRIX4X4
#pragma endregion

class MathLib
{
private:

public:
	MathLib();
	~MathLib();

#pragma region MathFunction
	float squareRoot(float value);

	float abs(float value);

	float pow(float value, float exponent);
#pragma endregion

#pragma region TrigonometryFunction
	static float toRadian(float degree);
	static float toDegree(float radian);

	static float sine(float radian);
	static float cosine(float radian);
	static float tangent(float radian);

	static float arcSine(float value);
	static float arcCosine(float value);
	static float arcTanggent(float value);

	float hypotenuse(float lhs, float rhs);
#pragma endregion

#pragma region VectorFunction

	float dot(const float2 lhs, const float2 rhs);
	float dot(const float2 lhs);
	float dot(const float3 lhs, const float3 rhs);
	float dot(const float3 lhs);
	float dot(const float4 lhs, const float4 rhs);
	float dot(const float4 lhs);

	float3 cross(float3 lhs, float3 rhs);
	float3 cross(float3 lhs);

	float distanceSquared(float2 lhs, float2 rhs);
	float distanceSquared(float3 lhs, float3 rhs);

	float2 normalize(float2 vector);
	float3 normalize(float3 vector);
	float4 normalize(float4 vector);

#pragma endregion

#pragma region MatrixFunction
	friend float determinant(matrix2x2 m);
	friend float determinant(matrix3x3 m);
	friend float determinant(matrix4x4 m);

	friend matrix4x4 MinorMatrix(matrix4x4 mt);

#pragma endregion
};
