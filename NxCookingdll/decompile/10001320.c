/*
 * func-name: sub_10001320
 * func-address: 0x10001320
 * callers: 0x10001380
 * callees: 0x100014f0
 */

int __thiscall sub_10001320(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = this[8];
  *this = &NxFoundation::FoundationSDK::`vftable';
  this[6] = &NxFoundation::FoundationSDK::`vftable';
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 100))(v2, 1);
  sub_100014F0(this + 13);
  this[6] = &NxFoundationSDK::`vftable';
  result = this[1];
  if ( result )
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[1]);
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  return result;
}
