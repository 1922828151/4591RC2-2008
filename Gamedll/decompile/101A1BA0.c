/*
 * func-name: ?GetChipInfo@Establishment@GameClient@@QAEXAAW4BASE_TYPE@@AAJ@Z_0
 * func-address: 0x101a1ba0
 * callers: 0x1000dd69
 * callees: none
 */

void __thiscall GameClient::Establishment::GetChipInfo(GameClient::Establishment *this, enum BASE_TYPE *a2, int *a3)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 88);
  *a3 = *((_DWORD *)this + 89);
}
