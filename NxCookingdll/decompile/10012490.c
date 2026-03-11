/*
 * func-name: sub_10012490
 * func-address: 0x10012490
 * callers: 0x100126b0
 * callees: none
 */

char __thiscall sub_10012490(_DWORD *this)
{
  unsigned int v1; // edi
  int v2; // edx
  int v3; // eax
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  int v7; // edx
  int v9; // [esp+0h] [ebp-20h]
  unsigned int j; // [esp+4h] [ebp-1Ch]
  unsigned int i; // [esp+8h] [ebp-18h]
  int v12; // [esp+Ch] [ebp-14h]
  int v13; // [esp+10h] [ebp-10h]
  unsigned int k; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h]
  unsigned int v16; // [esp+1Ch] [ebp-4h]

  v16 = this[22];
  for ( i = 0; i < v16; ++i )
  {
    for ( j = 0; j < v16; ++j )
    {
      v1 = 0;
      for ( k = 0; k < v16; ++k )
      {
        v2 = this[22];
        v3 = v1 + i * this[23] + j * v2;
        v15 = v3 + 1;
        v4 = v2 + v3;
        v5 = v3 + this[23];
        v13 = v2 + v3 + 1;
        v12 = v5 + 1;
        v6 = v2 + v5;
        v9 = v2 + v5 + 1;
        if ( k == v2 - 1 )
        {
          v9 = -1;
          v12 = -1;
          v13 = -1;
          v15 = -1;
        }
        v7 = this[22] - 1;
        if ( j == v7 )
        {
          v6 = -1;
          v9 = -1;
          v13 = -1;
          v4 = -1;
        }
        if ( i == v7 )
        {
          v5 = -1;
          v9 = -1;
          v6 = -1;
          v12 = -1;
        }
        if ( (v3 == -1 || (~(*(_DWORD *)(this[27] + 4 * v3) >> 31) & 1) == 0)
          && (v15 == -1 || (~(*(_DWORD *)(this[27] + 4 * v15) >> 31) & 1) == 0)
          && (v4 == -1 || (~(*(_DWORD *)(this[27] + 4 * v4) >> 31) & 1) == 0)
          && (v5 == -1 || (~(*(_DWORD *)(this[27] + 4 * v5) >> 31) & 1) == 0)
          && (v12 == -1 || (~(*(_DWORD *)(this[27] + 4 * v12) >> 31) & 1) == 0)
          && (v6 == -1 || (~(*(_DWORD *)(this[27] + 4 * v6) >> 31) & 1) == 0)
          && (v13 == -1 || (~(*(_DWORD *)(this[27] + 4 * v13) >> 31) & 1) == 0)
          && (v9 == -1 || (~(*(_DWORD *)(this[27] + 4 * v9) >> 31) & 1) == 0) )
        {
          *(_DWORD *)(this[27] + 4 * v3) |= 0x40000000u;
        }
        v1 = k + 1;
      }
    }
  }
  return 1;
}
