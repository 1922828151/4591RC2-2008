/*
 * func-name: sub_10088640
 * func-address: 0x10088640
 * callers: 0x100196c8
 * callees: 0x1000f7ae, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10088640(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4A0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_LightBeam::~Effect_LightBeam);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_LightBeam::~Effect_LightBeam((Effect_LightBeam *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
