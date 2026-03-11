/*
 * func-name: sub_100179B0
 * func-address: 0x100179b0
 * callers: none
 * callees: 0x100ef850, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100179B0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x178u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))StaticModel::~StaticModel);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    StaticModel::~StaticModel((StaticModel *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
