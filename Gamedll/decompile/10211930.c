/*
 * func-name: sub_10211930
 * func-address: 0x10211930
 * callers: 0x1000dbd9
 * callees: 0x1000d512
 */

_DWORD *__thiscall sub_10211930(_DWORD *this)
{
  char v3; // [esp+Bh] [ebp-11h] BYREF
  _DWORD *v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+18h] [ebp-4h]

  v4 = this;
  *this = &GameClient::DESC_WORLD::`vftable';
  std::string::string(this + 2);
  v5 = 0;
  sub_1000D512((int)&v3, (int)&v3);
  return this;
}
