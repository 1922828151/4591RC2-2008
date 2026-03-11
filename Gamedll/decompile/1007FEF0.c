/*
 * func-name: sub_1007FEF0
 * func-address: 0x1007fef0
 * callers: 0x10002554
 * callees: 0x100173d2, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1007FEF0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x498u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_DynamicLasers::~Effect_DynamicLasers);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_DynamicLasers::~Effect_DynamicLasers((Effect_DynamicLasers *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
