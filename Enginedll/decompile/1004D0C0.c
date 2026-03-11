/*
 * func-name: sub_1004D0C0
 * func-address: 0x1004d0c0
 * callers: none
 * callees: 0x100da460, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1004D0C0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x468u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))IndoorVolume::~IndoorVolume);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    IndoorVolume::~IndoorVolume((IndoorVolume *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
