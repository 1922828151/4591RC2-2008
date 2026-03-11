/*
 * func-name: ?OnDestroy@Booty@GameClient@@UAEXXZ_0
 * func-address: 0x10144d70
 * callers: 0x10001f9b
 * callees: 0x1001a72b
 */

void __thiscall GameClient::Booty::OnDestroy(GameClient::Booty *this)
{
  unsigned int v2; // ebx
  char *v3; // esi
  unsigned int v4; // ebp
  _BYTE v5[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = *((_DWORD *)this + 39);
  v3 = (char *)this + 148;
  if ( *((_DWORD *)this + 38) > v2 )
    _invalid_parameter_noinfo();
  v4 = *((_DWORD *)v3 + 1);
  if ( v4 > *((_DWORD *)v3 + 2) )
    _invalid_parameter_noinfo();
  sub_1001A72B((int)v5, (int)v3, v4, (int)v3, v2);
  GameClient::WorldObject::OnDestroy(this);
}
