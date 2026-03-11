/*
 * func-name: sub_10033D20
 * func-address: 0x10033d20
 * callers: 0x10033d20, 0x10033dc0
 * callees: 0x10032ca0, 0x10033910, 0x10033d20
 */

void __thiscall sub_10033D20(int *this, _DWORD *Src, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // ecx
  unsigned int i; // eax
  int v8; // edx
  unsigned int v9; // eax
  int v10; // ebx

  v3 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = 0;
      for ( i = 0; i < v3; v6 += v8 )
        v8 = *(unsigned __int16 *)(Src[i++] + 24);
      v9 = v3 > 0x80 ? ((v3 + 15) >> 7) + 1 : 1;
      if ( v6 + 1888 * v9 <= 0xFFE0 )
        break;
      v10 = sub_10032CA0((int)Src, v3, v3 >> 1, (v3 + 1) >> 1);
      sub_10033D20(Src, v10);
      v3 -= v10;
      Src += v10;
      if ( !v3 )
        return;
    }
    sub_10033910(this, Src, v3);
  }
}
