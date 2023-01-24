#include "Vector3.h"

MMath::Vector3::~Vector3()
{
}

MMath::Vector3 MMath::Vector3::cross(Vector3& vector) const
{
    Vector3 resultVector;

    resultVector.setX((vector.getY() * this->zValue - vector.getZ() * this->yValue));
    resultVector.setY((vector.getZ() * this->xValue - vector.getX() * this->zValue));
    resultVector.setZ((vector.getX() * this->yValue - vector.getY() * this->xValue));

    return resultVector;
}

MATHLIBRARY_API M_INLINE MMath::Vector3 MMath::Vector3::down()
{
    return Vector3(0, -1, 0);
}

MATHLIBRARY_API M_INLINE MMath::Vector3 MMath::Vector3::up()
{
    return Vector3(0, 1, 0);
}

MATHLIBRARY_API M_INLINE MMath::Vector3 MMath::Vector3::forward()
{
    return Vector3(0, 0, 1);
}

MATHLIBRARY_API M_INLINE MMath::Vector3 MMath::Vector3::back()
{
    return Vector3(0, 0, -1);
}

MATHLIBRARY_API M_INLINE MMath::Vector3 MMath::Vector3::left()
{
    return Vector3(-1, 0, 0);
}

MATHLIBRARY_API M_INLINE MMath::Vector3 MMath::Vector3::right()
{
    return Vector3(1, 0, 0);
}

MATHLIBRARY_API M_INLINE MMath::Vector3 MMath::Vector3::one()
{
    return Vector3(1, 1, 1);
}

MATHLIBRARY_API M_INLINE MMath::Vector3 MMath::Vector3::zero()
{
    return Vector3(0, 0, 0);
}


MMath::Vector3 MMath::Vector3::operator+(const Vector3& vector) const
{
    Vector3 resultVector;

    resultVector.setX(this->xValue + vector.xValue);
    resultVector.setY(this->yValue + vector.yValue);
    resultVector.setZ(this->zValue + vector.zValue);
    return resultVector;
}


MMath::Vector3 MMath::Vector3::operator-(const Vector3& vector) const
{
    return Vector3();
}

MMath::Vector3 MMath::Vector3::operator*(const Vector3& vector) const
{
    Vector3 resultVector;

    resultVector.setX(this->xValue * vector.xValue);
    resultVector.setY(this->yValue * vector.yValue);
    resultVector.setZ(this->zValue * vector.zValue);

    return resultVector;

}

MMath::Vector3 MMath::Vector3::operator/(const Vector3& vector) const
{
    Vector3 resultVector;

    resultVector.setX(this->xValue / vector.xValue);
    resultVector.setY(this->yValue / vector.yValue);
    resultVector.setZ(this->zValue / vector.zValue);

    return resultVector;
}

bool MMath::Vector3::operator==(const Vector3& vector) const
{
    return (this->getX() == vector.getX()) &&
           (this->getY() == vector.getY()) &&
           (this->getZ() == vector.getZ());
}

bool MMath::Vector3::operator!=(const Vector3& vector) const
{
 
}

std::ostream& MMath::operator<<(std::ostream& os, Vector3& vectorValue)
{
    os << "(" << vectorValue.getX() << "," << vectorValue.getY() << "," << vectorValue.getZ() << ")";
    return os;
}