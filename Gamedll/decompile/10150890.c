/*
 * func-name: ??0DamageEquip@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10150890
 * callers: 0x10001e47
 * callees: 0x1000cea0, 0x1000cf40, 0x1000f5ce
 */

GameClient::DamageEquip *__thiscall GameClient::DamageEquip::DamageEquip(
        GameClient::DamageEquip *this,
        const struct GameClient::DamageEquip *a2)
{
  char *v3; // eax

  GameClient::Item::Item(this, a2);
  v3 = 0;
  if ( a2 )
    v3 = (char *)a2 + 780;
  *((_DWORD *)this + 195) = &GameClient::DamageUnit::`vftable';
  sub_1000F5CE((int)(v3 + 4));
  *(_DWORD *)this = &GameClient::DamageEquip::`vftable'{for `GameClient::Item'};
  *((_DWORD *)this + 195) = &GameClient::DamageEquip::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 200) = *((_DWORD *)a2 + 200);
  *((_DWORD *)this + 201) = *((_DWORD *)a2 + 201);
  *((_DWORD *)this + 202) = *((_DWORD *)a2 + 202);
  *((_DWORD *)this + 203) = *((_DWORD *)a2 + 203);
  *((_DWORD *)this + 204) = *((_DWORD *)a2 + 204);
  *((_BYTE *)this + 820) = *((_BYTE *)a2 + 820);
  sub_1000CF40((char *)a2 + 824);
  return this;
}
