/*
 * func-name: ?SetCharacterID@WorldObject@GameClient@@QAEXK@Z_0
 * func-address: 0x1019ad80
 * callers: 0x10011702
 * callees: 0x10009d68
 */

void __thiscall GameClient::WorldObject::SetCharacterID(GameClient::WorldObject *this, unsigned int a2)
{
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    *((_DWORD *)this + 5) = sub_10009D68(a2);
  else
    *((_DWORD *)this + 5) = 0;
}
