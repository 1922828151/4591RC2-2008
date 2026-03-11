/*
 * func-name: sub_100184E0
 * func-address: 0x100184e0
 * callers: none
 * callees: 0x100511a0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100184E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x41Cu, *((_DWORD *)this - 1), (void (__thiscall *)(void *))Actor::~Actor);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Actor::~Actor((Actor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
