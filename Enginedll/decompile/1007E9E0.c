/*
 * func-name: sub_1007E9E0
 * func-address: 0x1007e9e0
 * callers: none
 * callees: 0x1007e990, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1007E9E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4B0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))PrefabInstance::~PrefabInstance);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    PrefabInstance::~PrefabInstance((PrefabInstance *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
