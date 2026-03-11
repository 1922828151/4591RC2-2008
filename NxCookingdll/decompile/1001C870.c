/*
 * func-name: sub_1001C870
 * func-address: 0x1001c870
 * callers: 0x1001d650
 * callees: 0x1001bf70
 */

void __thiscall sub_1001C870(int this, unsigned int a2, unsigned int a3)
{
  unsigned int i; // edi
  long double v5; // st7
  long double v6; // st6
  long double v7; // st5
  int v8; // eax
  int v9; // eax

  for ( i = a2; i < a3; i += 32 )
  {
    ++*(_DWORD *)(this + 96);
    v5 = *(float *)(this + 64) - *(float *)i;
    if ( *(float *)(i + 12) + *(float *)(this + 40) < fabs(v5)
      || (v6 = *(float *)(this + 68) - *(float *)(i + 4), *(float *)(this + 44) + *(float *)(i + 16) < fabs(v6))
      || (v7 = *(float *)(this + 72) - *(float *)(i + 8), *(float *)(this + 48) + *(float *)(i + 20) < fabs(v7))
      || *(float *)(this + 48) * *(float *)(i + 16) + *(float *)(this + 44) * *(float *)(i + 20) < fabs(v7 * *(float *)(this + 56) - v6 * *(float *)(this + 60))
      || *(float *)(this + 40) * *(float *)(i + 20) + *(float *)(this + 48) * *(float *)(i + 12) < fabs(v5 * *(float *)(this + 60) - v7 * *(float *)(this + 52))
      || *(float *)(this + 40) * *(float *)(i + 16) + *(float *)(this + 44) * *(float *)(i + 12) < fabs(v6 * *(float *)(this + 52) - v5 * *(float *)(this + 56)) )
    {
      if ( (*(_DWORD *)(i + 24) & 0x40000000) == 0 )
        i += 32 * *(_DWORD *)(i + 28);
    }
    else
    {
      v8 = *(_DWORD *)(i + 24);
      if ( v8 < 0 )
      {
        sub_1001BF70(this, v8 & 0x3FFFFFFF);
        if ( (*(_BYTE *)(this + 4) & 5) == 5 )
          return;
        v9 = *(_DWORD *)(i + 24);
        if ( (v9 & 0x40000000) != 0 )
        {
          sub_1001BF70(this, (v9 & 0x3FFFFFFF) + 1);
          if ( (*(_BYTE *)(this + 4) & 5) == 5 )
            return;
        }
      }
    }
  }
}
