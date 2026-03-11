/*
 * func-name: sub_100681B0
 * func-address: 0x100681b0
 * callers: 0x100068c0
 * callees: 0x10016eeb, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100681B0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x1030u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CRadarMapUI::~CRadarMapUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CRadarMapUI::~CRadarMapUI((CRadarMapUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
