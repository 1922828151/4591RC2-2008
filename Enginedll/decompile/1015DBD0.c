/*
 * func-name: sub_1015DBD0
 * func-address: 0x1015dbd0
 * callers: 0x1015dbd0, 0x1015e240, 0x1015edf0, 0x1015f860, 0x10162160, 0x10164f30
 * callees: 0x1015dbd0
 */

char __thiscall sub_1015DBD0(_DWORD *this, int a2, int a3, float *a4)
{
  int v5; // ecx
  int v6; // edx

  v5 = this[2];
  if ( a2 < v5 && a3 < this[3] && a2 >= 0 && a3 >= 0 )
  {
    v6 = this[5];
    if ( v6 )
    {
      *a4 = *(float *)(v6 + 4 * (a2 + a3 * v5));
      return 1;
    }
    if ( this[7] )
    {
      sub_1015DBD0(a2 + *this, a3 + this[1], a4);
      return 1;
    }
  }
  return 0;
}
