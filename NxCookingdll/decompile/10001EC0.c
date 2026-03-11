/*
 * func-name: sub_10001EC0
 * func-address: 0x10001ec0
 * callers: 0x10001f10
 * callees: 0x100016f0
 */

char __thiscall sub_10001EC0(_DWORD *this, float *a2)
{
  int v4; // eax
  int v5; // ecx
  float v6; // edx

  if ( !sub_100016F0(this, 4) )
    return 0;
  v4 = this[3];
  if ( this[5] - v4 < 4 )
    return 0;
  v5 = this[4];
  if ( !v5 )
    return 0;
  v6 = *(float *)(v5 + v4);
  this[3] = v4 + 4;
  *a2 = v6;
  return 1;
}
