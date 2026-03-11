/*
 * func-name: sub_10099350
 * func-address: 0x10099350
 * callers: none
 * callees: 0x10137070, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10099350(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x494u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))WaterSurface::~WaterSurface);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    WaterSurface::~WaterSurface((WaterSurface *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
