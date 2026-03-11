/*
 * func-name: sub_1001C9C0
 * func-address: 0x1001c9c0
 * callers: 0x1001d650
 * callees: 0x1001b780
 */

void __thiscall sub_1001C9C0(int this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  int v9; // eax
  int v10; // eax
  float v11; // [esp+10h] [ebp+4h]
  float v12; // [esp+10h] [ebp+4h]
  float v13; // [esp+10h] [ebp+4h]

  v3 = a2;
  if ( a2 < a3 )
  {
    v5 = 0.0;
    do
    {
      ++*(_DWORD *)(this + 96);
      v6 = *(float *)(this + 16) - *(float *)v3;
      v11 = v6;
      if ( (LODWORD(v11) & 0x7FFFFFFFu) > *(_DWORD *)(v3 + 12) && *(float *)(this + 28) * v6 >= v5
        || (v7 = *(float *)(this + 20) - *(float *)(v3 + 4),
            v12 = v7,
            (LODWORD(v12) & 0x7FFFFFFFu) > *(_DWORD *)(v3 + 16))
        && *(float *)(this + 32) * v7 >= v5
        || (v8 = *(float *)(this + 24) - *(float *)(v3 + 8),
            v13 = v8,
            (LODWORD(v13) & 0x7FFFFFFFu) > *(_DWORD *)(v3 + 20))
        && *(float *)(this + 36) * v8 >= v5
        || *(float *)(v3 + 20) * *(float *)(this + 44) + *(float *)(this + 48) * *(float *)(v3 + 16) < fabs(*(float *)(this + 32) * v8 - *(float *)(this + 36) * v7)
        || *(float *)(this + 40) * *(float *)(v3 + 20) + *(float *)(v3 + 12) * *(float *)(this + 48) < fabs(*(float *)(this + 36) * v6 - v8 * *(float *)(this + 28))
        || *(float *)(v3 + 12) * *(float *)(this + 44) + *(float *)(this + 40) * *(float *)(v3 + 16) < fabs(v7 * *(float *)(this + 28) - v6 * *(float *)(this + 32)) )
      {
        if ( (*(_DWORD *)(v3 + 24) & 0x40000000) == 0 )
          v3 += 32 * *(_DWORD *)(v3 + 28);
      }
      else
      {
        v9 = *(_DWORD *)(v3 + 24);
        if ( v9 < 0 )
        {
          sub_1001B780(this, v9 & 0x3FFFFFFF);
          if ( (*(_BYTE *)(this + 4) & 5) == 5 )
            return;
          v10 = *(_DWORD *)(v3 + 24);
          if ( (v10 & 0x40000000) != 0 )
          {
            sub_1001B780(this, (v10 & 0x3FFFFFFF) + 1);
            if ( (*(_BYTE *)(this + 4) & 5) == 5 )
              return;
          }
          v5 = 0.0;
        }
      }
      v3 += 32;
    }
    while ( v3 < a3 );
  }
}
