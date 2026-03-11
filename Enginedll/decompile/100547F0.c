/*
 * func-name: sub_100547F0
 * func-address: 0x100547f0
 * callers: none
 * callees: 0x100541c0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100547F0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x458u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))ActorInstancer::~ActorInstancer);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    ActorInstancer::~ActorInstancer((ActorInstancer *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
