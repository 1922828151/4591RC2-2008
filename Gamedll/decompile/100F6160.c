/*
 * func-name: sub_100F6160
 * func-address: 0x100f6160
 * callers: 0x100163e7
 * callees: 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100F6160(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::AdapterActorALReport::~AdapterActorALReport);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::AdapterActorALReport::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
