/*
 * func-name: ?SetCurrentPosition@Equip@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x10159230
 * callers: 0x1000289c
 * callees: none
 */

void __thiscall GameClient::Equip::SetCurrentPosition(GameClient::Equip *this, const struct Vector *a2)
{
  _DWORD *v2; // ecx

  *((_DWORD *)this + 6) = *(_DWORD *)a2;
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 2);
  v2 = (_DWORD *)(*((_DWORD *)this + 45) + 856);
  *v2 = *(_DWORD *)a2;
  v2[1] = *((_DWORD *)a2 + 1);
  v2[2] = *((_DWORD *)a2 + 2);
}
