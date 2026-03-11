/*
 * func-name: ?Relive@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x1017b870
 * callers: 0x10011bbc
 * callees: 0x10006a19, 0x1000cf86
 */

void __thiscall GameClient::Robot::Relive(GameClient::Robot *this)
{
  int v2; // esi

  if ( *((_DWORD *)this + 90) != 2 )
    GameClient::Robot::Dead(this, 0.0);
  *((_DWORD *)this + 90) = 3;
  if ( GameClient::WorldObject::IsLocal(this) )
  {
    v2 = *((_DWORD *)this + 5);
    if ( v2 )
      *(_DWORD *)(v2 + 308) = -1;
  }
}
