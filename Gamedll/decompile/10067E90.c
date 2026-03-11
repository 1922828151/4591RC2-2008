/*
 * func-name: sub_10067E90
 * func-address: 0x10067e90
 * callers: 0x10015f7d
 * callees: 0x10001564, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10067E90(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))RadarMapState::~RadarMapState);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    RadarMapState::~RadarMapState((RadarMapState *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
