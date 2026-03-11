/*
 * func-name: sub_10036800
 * func-address: 0x10036800
 * callers: 0x10005772
 * callees: 0x10001dfc, 0x10016f95, 0x102c9ea8
 */

int __thiscall sub_10036800(_DWORD *this, int a2)
{
  int v3; // eax
  GameClient::Robot *v4; // ecx

  if ( !this[75] )
    this[75] = a2;
  if ( !this[76] )
  {
    v3 = sub_10001DFC(*(_DWORD *)(this[75] + 292));
    this[76] = _RTDynamicCast(
                 v3,
                 0,
                 &GameClient::WorldObject `RTTI Type Descriptor',
                 &GameClient::Robot `RTTI Type Descriptor',
                 0);
  }
  v4 = (GameClient::Robot *)this[76];
  if ( v4 )
    GameClient::Robot::ChangeViewMode(v4, 0);
  return (*(int (__stdcall **)(_DWORD))(this[1] + 4))(LODWORD(GDeltaTime));
}
