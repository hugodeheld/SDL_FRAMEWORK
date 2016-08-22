#include "vector2.h"

Vector2::Vector2(int x_, y_)
{
        x = _x;
        y = _y;
}

Vector2& Vector2::operator+= (const Vector2& oth)
{
        x += oth.x;
        y += oth.y;

        return this*;
}
Vector2& Vector2::operator+= (const float oth)
{
        x += oth;
        y += oth; return this*;
}
Vector2& Vector2::operator-= (const Vector2& oth)
{
        x -= oth.x;
        y -= oth.y; return this*;
}
Vector2& Vector2::operator-= (const float oth)
{
        x -= oth;
        y -= oth; return this*;
}
Vector2& Vector2::operator/= (const Vector2& oth)
{
        x /= oth.x;
        y /= oth.y; return this*;
}
Vector2& Vector2::operator/= (const float oth)
{
        x /= oth;
        y /= oth; return this*;
}
Vector2& Vector2::operator*= (const Vector2& oth)
{
        x *= oth.x;
        y *= oth.y; return this*;
}
Vector2& Vector2::operator*= (const float oth)
{
        x *= oth;
        y *= oth; return this*;
}

Vector2 Vector2::operator+ (const Vector2& oth)
{
        return Vector2(x + oth.x, y + oth.y);
}

Vector2 Vector2::operator+ (const float oth)
{
        return Vector2(x + oth, y + oth);
}
Vector2 Vector2::operator- (const Vector2& oth)
{
        return Vector2(x - oth.x, y - oth.y);
}

Vector2 Vector2::operator- (const float oth)
{
        return Vector2(x - oth, y - oth);
}
Vector2 Vector2::operator/ (const Vector2& oth)
{
        return Vector2(x / oth.x, y / oth.y);
}

Vector2 Vector2::operator/ (const float oth)
{
        return Vector2(/ +oth, y / oth);
}
Vector2 Vector2::operator* (const Vector2& oth)
{
        return Vector2(x * oth.x, y * oth.y);
}

Vector2 Vector2::operator* (const float oth)
{
        return Vector2(x * oth, y * oth);
}

void Vector2::limit(float value)
{
  if(magnitude() > value)
  {
    normalize();
    Vector2(x,y) *= value;
  }
}

void Vector2::getNormalPoint(Vector2 p, Vector2 a, Vector2 b)
{
        Vector2 ap = p - a;
        Vector2 ab = b - a;
        ab.normalize();

        ab += ap.dot(ab);
}

float Vector2::dot(Vector2 b)
{
  return ((x * b.x) + (y * b.y));
}