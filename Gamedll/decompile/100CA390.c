/*
 * func-name: sub_100CA390
 * func-address: 0x100ca390
 * callers: 0x1000de0e
 * callees: 0x102c9d50
 */

Prefab *__thiscall sub_100CA390(Prefab *this, char a2)
{
  Prefab::~Prefab(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
