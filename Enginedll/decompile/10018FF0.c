/*
 * func-name: sub_10018FF0
 * func-address: 0x10018ff0
 * callers: none
 * callees: 0x100dde50, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10018FF0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x5B0u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))Light::~Light);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Light::~Light((Light *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
