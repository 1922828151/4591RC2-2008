/*
 * func-name: sub_10030090
 * func-address: 0x10030090
 * callers: none
 * callees: 0x1002ffd0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10030090(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x1C8u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))Model::~Model);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Model::~Model((Model *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
