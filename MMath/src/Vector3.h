#pragma once

#ifndef VECTOR3_H
#define VECTOR3_H

#include <ostream>

#define M_INLINE inline

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)

#endif

namespace MMath {
	class Vector3
	{

	public:
		Vector3() : xValue(0), yValue(0), zValue(0) { }
		Vector3(float xValue_, float yValue_, float zValue_) : xValue(xValue_), yValue(yValue_), zValue(zValue_) { }
		~Vector3();

		float getX() { return xValue; }
		float getY() { return yValue; }
		float getZ() { return zValue; }

		void setX(float x_) { this->xValue = x_; }
		void setY(float y_) { this->yValue = y_; }
		void setZ(float z_) { this->zValue = z_; }

		MATHLIBRARY_API static M_INLINE Vector3 down();
		MATHLIBRARY_API static M_INLINE Vector3 up();
		MATHLIBRARY_API static M_INLINE Vector3 forward();
		MATHLIBRARY_API static M_INLINE Vector3 back();
		MATHLIBRARY_API static M_INLINE Vector3 left();
		MATHLIBRARY_API static M_INLINE Vector3 right();
		MATHLIBRARY_API static M_INLINE Vector3 one();
		MATHLIBRARY_API static M_INLINE Vector3 zero();

		Vector3 cross(Vector3& vector) const;

		Vector3 operator+  (const Vector3& vector) const;
		Vector3 operator!= (const Vector3& vector) const;
		Vector3 operator-  (const Vector3& vector) const;
		Vector3 operator*  (const Vector3& vector) const;
		Vector3 operator/  (const Vector3& vector) const;
		Vector3 operator== (const Vector3& vector) const;
		friend std::ostream& operator<<(std::ostream& os, Vector3& vectorValue);

	private:
		float xValue, yValue, zValue;
	};
}

#endif // !VECTOR3_H