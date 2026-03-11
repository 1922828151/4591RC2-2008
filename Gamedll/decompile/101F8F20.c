/*
 * func-name: ??0Group@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101f8f20
 * callers: 0x10010cc1
 * callees: 0x100142a4
 */

GameClient::Group *__thiscall GameClient::Group::Group(GameClient::Group *this, const struct GameClient::Group *a2)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)((char *)this + 12);
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  sub_100142A4((int)a2 + 12);
  return this;
}
