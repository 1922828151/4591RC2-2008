/*
 * func-name: sub_101619D0
 * func-address: 0x101619d0
 * callers: none
 * callees: 0x10161830, 0x101a26c0
 */

char __thiscall sub_101619D0(_DWORD *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // esi

  v3 = this[1];
  v4 = (__int64)((double)(int)*(float *)(a2 + 4) / (double)(int)this[13])
     + this[11] * (__int64)((double)(int)*(float *)(a2 + 12) / (double)(int)this[14]);
  if ( !v3 || v4 >= (this[2] - v3) >> 2 )
    return 0;
  sub_10161830(*(_DWORD *)(this[1] + 4 * v4), a2);
  return 1;
}
