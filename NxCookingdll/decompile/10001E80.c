/*
 * func-name: sub_10001E80
 * func-address: 0x10001e80
 * callers: 0x10002fe0
 * callees: 0x100016f0
 */

char __thiscall sub_10001E80(_DWORD *this, _DWORD *a2)
{
  int v4; // eax
  int v5; // ecx

  if ( !sub_100016F0(this, 4) )
    return 0;
  v4 = this[3];
  if ( this[5] - v4 < 4 )
    return 0;
  v5 = this[4];
  if ( !v5 )
    return 0;
  *a2 = *(_DWORD *)(v5 + v4);
  this[3] += 4;
  return 1;
}
