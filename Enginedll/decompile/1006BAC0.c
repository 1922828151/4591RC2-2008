/*
 * func-name: sub_1006BAC0
 * func-address: 0x1006bac0
 * callers: none
 * callees: 0x100cab00, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006BAC0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x27Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CHotZonePic::~CHotZonePic);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CHotZonePic::~CHotZonePic((CHotZonePic *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
