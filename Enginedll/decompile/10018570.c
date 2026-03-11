/*
 * func-name: sub_10018570
 * func-address: 0x10018570
 * callers: none
 * callees: 0x100518e0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10018570(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x494u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))Prefab::~Prefab);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Prefab::~Prefab((Prefab *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
