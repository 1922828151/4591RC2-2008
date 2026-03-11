/*
 * func-name: sub_1004D550
 * func-address: 0x1004d550
 * callers: none
 * callees: 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1004D550(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))PhysicsTriggerReport::~PhysicsTriggerReport);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &NxUserTriggerReport::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
