/*
 * func-name: sub_10009760
 * func-address: 0x10009760
 * callers: 0x10001300, 0x10001810, 0x10001cf0, 0x10002260, 0x10009900
 * callees: 0x10004c20
 */

int __thiscall sub_10009760(_DWORD *this)
{
  int v2; // ecx

  *this = &Controller::`vftable';
  v2 = this[88];
  if ( v2 && this[66] )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 32))(v2, this[66]);
  return sub_10004C20(this + 10);
}
