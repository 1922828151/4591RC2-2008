/*
 * func-name: sub_1009FC70
 * func-address: 0x1009fc70
 * callers: 0x1000feca
 * callees: 0x102c9d50
 */

void __thiscall sub_1009FC70(_DWORD *this)
{
  ActorGroup *v2; // edi

  *this = &FXWrapper::`vftable';
  v2 = (ActorGroup *)this[1];
  if ( v2 )
  {
    ActorGroup::~ActorGroup(v2);
    operator delete(v2);
    this[1] = 0;
  }
  std::string::~string(this + 2);
}
