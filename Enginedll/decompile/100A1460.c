/*
 * func-name: ?addNewBatch@FXManager@@SAHPAVTexture@@W4BlendMode@@@Z
 * func-address: 0x100a1460
 * callers: 0x100a1910
 * callees: 0x100a23e0
 */

int __cdecl FXManager::addNewBatch(int a1, int a2)
{
  int v2; // ebp
  int v3; // eax
  int result; // eax
  unsigned int v5; // esi
  _DWORD *v6; // ebx
  int v7; // edi
  char *v8; // ebx
  char *v9; // ebx
  char *v10; // ebx
  char *v11; // ebx

  v2 = 0;
  v3 = (int)byte_102EF38C;
  while ( *(_BYTE *)v3 )
  {
    v3 += 162110;
    ++v2;
    if ( v3 >= 287723460 )
      return -1;
  }
  if ( v2 == -1 )
    return -1;
  if ( dword_1123D68C )
    v5 = (dword_1123D690 - (int)dword_1123D68C) / 20;
  else
    v5 = 0;
  sub_100A23E0((int)&FXManager::batchedQuads, v5 + 1, 0, 0, 0, 0, 0);
  v6 = dword_1123D68C;
  if ( !dword_1123D68C || v5 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v6 = dword_1123D68C;
  }
  v7 = 20 * v5;
  v6[5 * v5 + 1] = a1;
  v8 = (char *)dword_1123D68C;
  if ( !dword_1123D68C || v5 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v8 = (char *)dword_1123D68C;
  }
  *(_DWORD *)&v8[v7] = 0;
  v9 = (char *)dword_1123D68C;
  if ( !dword_1123D68C || v5 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v9 = (char *)dword_1123D68C;
  }
  *(_DWORD *)&v9[v7 + 8] = a2;
  v10 = (char *)dword_1123D68C;
  if ( !dword_1123D68C || v5 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v10 = (char *)dword_1123D68C;
  }
  *(_DWORD *)&v10[v7 + 16] = 0;
  v11 = (char *)dword_1123D68C;
  if ( !dword_1123D68C || v5 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v11 = (char *)dword_1123D68C;
  }
  *(_DWORD *)&v11[v7 + 12] = v2;
  result = v5;
  byte_102EF38C[162110 * v2] = 1;
  return result;
}
