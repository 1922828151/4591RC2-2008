/*
 * func-name: sub_1009F4A0
 * func-address: 0x1009f4a0
 * callers: 0x100015b9
 * callees: 0x10009309, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1009F4A0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x584u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))AnimationModal::~AnimationModal);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    AnimationModal::~AnimationModal((AnimationModal *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
