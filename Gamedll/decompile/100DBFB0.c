/*
 * func-name: sub_100DBFB0
 * func-address: 0x100dbfb0
 * callers: 0x100089e0
 * callees: 0x102c9d50
 */

Light *__thiscall sub_100DBFB0(Light *this, char a2)
{
  Light::~Light(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
