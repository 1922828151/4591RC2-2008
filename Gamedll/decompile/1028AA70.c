/*
 * func-name: sub_1028AA70
 * func-address: 0x1028aa70
 * callers: 0x1000b8fc
 * callees: 0x10008c29, 0x10010dc0, 0x10011414, 0x10012e9f
 */

int __thiscall sub_1028AA70(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // ebp
  unsigned int i; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v13; // [esp+0h] [ebp-10h]
  int v14; // [esp+0h] [ebp-10h]
  int v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-Ch]

  sub_10011414(a2, a3, a4);
  v5 = 0;
  this[980] = 0;
  for ( i = 0; i < sub_10008C29(); v5 += 16 )
  {
    v7 = *(_DWORD *)(a4 + 4);
    if ( !v7 || i >= (*(_DWORD *)(a4 + 8) - v7) >> 4 )
      _invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a4 + 4);
    v9 = *(_DWORD *)(v8 + v5 + 4);
    v10 = v5 + v8;
    if ( v9 )
      v11 = (*(_DWORD *)(v10 + 8) - v9) >> 7;
    else
      v11 = 0;
    this[980] += v11;
    ++i;
  }
  sub_10010DC0(v13, v15);
  return sub_10012E9F(v14, v16);
}
