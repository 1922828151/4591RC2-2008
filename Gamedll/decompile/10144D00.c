/*
 * func-name: ??1Booty@GameClient@@UAE@XZ_0
 * func-address: 0x10144d00
 * callers: 0x100143bc
 * callees: 0x1001a72b, 0x102c9d50
 */

void __thiscall GameClient::Booty::~Booty(GameClient::Booty *this)
{
  char *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ebp
  _BYTE v5[8]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (char *)this + 148;
  *(_DWORD *)this = &GameClient::Booty::`vftable';
  v3 = *((_DWORD *)this + 39);
  if ( *((_DWORD *)this + 38) > v3 )
    _invalid_parameter_noinfo();
  v4 = *((_DWORD *)v2 + 1);
  if ( v4 > *((_DWORD *)v2 + 2) )
    _invalid_parameter_noinfo();
  sub_1001A72B((int)v5, (int)v2, v4, (int)v2, v3);
  if ( *((_DWORD *)v2 + 1) )
    operator delete(*((void **)v2 + 1));
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  GameClient::WorldObject::~WorldObject(this);
}
