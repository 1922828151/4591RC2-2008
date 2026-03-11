/*
 * func-name: sub_102C0F30
 * func-address: 0x102c0f30
 * callers: 0x100919f0, 0x10092070, 0x10092230, 0x10098710, 0x100c2280, 0x100c2c00, 0x100c38b0, 0x100c40c0, 0x100d9dd0, 0x100dd6c0, 0x10177e70, 0x1017ae60
 * callees: 0x100029cd
 */

_DWORD *__thiscall sub_102C0F30(_DWORD *this, _DWORD *a2)
{
  *a2 = this[4];
  a2[1] = this[5];
  a2[2] = this[6];
  sub_100029CD();
  return a2;
}
