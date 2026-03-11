/*
 * func-name: sub_1001CF60
 * func-address: 0x1001cf60
 * callers: 0x1001d650
 * callees: 0x1001bf70
 */

void __thiscall sub_1001CF60(int this, unsigned int a2, unsigned int a3)
{
  unsigned int i; // edi
  double v5; // st7
  int v6; // ebx
  long double v7; // st7
  long double v8; // st6
  long double v9; // st5
  unsigned int v10; // ebp

  for ( i = a2; i < a3; i += 36 )
  {
    v5 = *(float *)(this + 64);
    v6 = 1;
    ++*(_DWORD *)(this + 96);
    v7 = v5 - *(float *)i;
    if ( *(float *)(this + 40) + *(float *)(i + 12) < fabs(v7)
      || (v8 = *(float *)(this + 68) - *(float *)(i + 4), *(float *)(this + 44) + *(float *)(i + 16) < fabs(v8))
      || (v9 = *(float *)(this + 72) - *(float *)(i + 8), *(float *)(this + 48) + *(float *)(i + 20) < fabs(v9))
      || *(float *)(this + 48) * *(float *)(i + 16) + *(float *)(this + 44) * *(float *)(i + 20) < fabs(v9 * *(float *)(this + 56) - v8 * *(float *)(this + 60))
      || *(float *)(this + 48) * *(float *)(i + 12) + *(float *)(this + 40) * *(float *)(i + 20) < fabs(v7 * *(float *)(this + 60) - v9 * *(float *)(this + 52))
      || *(float *)(this + 44) * *(float *)(i + 12) + *(float *)(this + 40) * *(float *)(i + 16) < fabs(v8 * *(float *)(this + 52) - v7 * *(float *)(this + 56)) )
    {
      v6 = 0;
    }
    v10 = *(_DWORD *)(i + 24) & 0x80000000;
    if ( *(int *)(i + 24) < 0 )
    {
      if ( !v6 )
        goto LABEL_13;
      sub_1001BF70(this, *(_DWORD *)(i + 24) & 0x3FFFFFFF);
      if ( (*(_BYTE *)(this + 4) & 5) == 5 )
        return;
    }
    if ( !v6 )
    {
LABEL_13:
      if ( !v10 )
        i += 36 * *(_DWORD *)(i + 32);
    }
  }
}
