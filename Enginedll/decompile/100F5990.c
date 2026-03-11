/*
 * func-name: sub_100F5990
 * func-address: 0x100f5990
 * callers: none
 * callees: 0x100f20a0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100F5990(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x2Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))AnimationSet::~AnimationSet);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    AnimationSet::~AnimationSet((AnimationSet *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
