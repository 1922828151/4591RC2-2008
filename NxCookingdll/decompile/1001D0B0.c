/*
 * func-name: sub_1001D0B0
 * func-address: 0x1001d0b0
 * callers: 0x1001d650
 * callees: 0x1001b780
 */

void __thiscall sub_1001D0B0(int this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  double v5; // st7
  double v6; // st6
  int v7; // ebx
  double v8; // st6
  double v9; // st5
  double v10; // st4
  unsigned int v11; // ebp
  float v12; // [esp+Ch] [ebp+4h]
  float v13; // [esp+Ch] [ebp+4h]
  float v14; // [esp+Ch] [ebp+4h]

  v3 = a2;
  if ( a2 < a3 )
  {
    v5 = 0.0;
    do
    {
      v6 = *(float *)(this + 16);
      v7 = 1;
      ++*(_DWORD *)(this + 96);
      v8 = v6 - *(float *)v3;
      v12 = v8;
      if ( (LODWORD(v12) & 0x7FFFFFFFu) > *(_DWORD *)(v3 + 12) && *(float *)(this + 28) * v8 >= v5
        || (v9 = *(float *)(this + 20) - *(float *)(v3 + 4),
            v13 = v9,
            (LODWORD(v13) & 0x7FFFFFFFu) > *(_DWORD *)(v3 + 16))
        && *(float *)(this + 32) * v9 >= v5
        || (v10 = *(float *)(this + 24) - *(float *)(v3 + 8),
            v14 = v10,
            (LODWORD(v14) & 0x7FFFFFFFu) > *(_DWORD *)(v3 + 20))
        && *(float *)(this + 36) * v10 >= v5
        || *(float *)(v3 + 20) * *(float *)(this + 44) + *(float *)(this + 48) * *(float *)(v3 + 16) < fabs(*(float *)(this + 32) * v10 - *(float *)(this + 36) * v9)
        || *(float *)(this + 40) * *(float *)(v3 + 20) + *(float *)(this + 48) * *(float *)(v3 + 12) < fabs(*(float *)(this + 36) * v8 - v10 * *(float *)(this + 28))
        || *(float *)(this + 40) * *(float *)(v3 + 16) + *(float *)(this + 44) * *(float *)(v3 + 12) < fabs(v9 * *(float *)(this + 28) - v8 * *(float *)(this + 32)) )
      {
        v7 = 0;
      }
      v11 = *(_DWORD *)(v3 + 24) & 0x80000000;
      if ( *(int *)(v3 + 24) < 0 )
      {
        if ( !v7 )
          goto LABEL_18;
        sub_1001B780(this, *(_DWORD *)(v3 + 24) & 0x3FFFFFFF);
        if ( (*(_BYTE *)(this + 4) & 5) == 5 )
          return;
        v5 = 0.0;
      }
      if ( !v7 )
      {
LABEL_18:
        if ( !v11 )
          v3 += 36 * *(_DWORD *)(v3 + 32);
      }
      v3 += 36;
    }
    while ( v3 < a3 );
  }
}
