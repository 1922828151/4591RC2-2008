/*
 * func-name: ?StopUse@Weapon@GameClient@@UAE_NXZ_0
 * func-address: 0x101959a0
 * callers: 0x10013822
 * callees: 0x10001b04, 0x100077ed, 0x10009a84, 0x1000bb7c, 0x10013647
 */

bool __thiscall GameClient::Weapon::StopUse(GameClient::Weapon *this)
{
  int v2; // eax
  Outpop::Utility::Ref_Object *v4; // [esp+14h] [ebp-18h] BYREF
  int v5; // [esp+18h] [ebp-14h] BYREF
  int v6; // [esp+1Ch] [ebp-10h] BYREF
  int v7; // [esp+28h] [ebp-4h]

  if ( *((_DWORD *)this + 186) == 1 )
  {
    (*(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 156))(this);
    sub_100077ED((int)&v4, 9, 29, COERCE_INT(0.0), 1, 512);
    v2 = *((_DWORD *)this + 3);
    v7 = 0;
    v5 = 0;
    v6 = v2;
    sub_10001B04((int)&v6);
    sub_10009A84((int)&v5);
    j_nullsub_44((int)&v4);
    v7 = -1;
    if ( v4 )
      Outpop::Utility::Ref_Object::release(v4);
  }
  return GameClient::Equip::StopUse(this);
}
