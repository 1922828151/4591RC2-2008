/*
 * func-name: ?addNewBatch@FXManager@@SAHPAVMaterial@@@Z
 * func-address: 0x100a12a0
 * callers: 0x100a1a40
 * callees: 0x100a23e0
 */

unsigned int __cdecl FXManager::addNewBatch(struct Material *a1)
{
  int v1; // ebx
  int v2; // eax
  unsigned int result; // eax
  unsigned int v4; // esi
  _DWORD *v5; // ebp
  int v6; // edi
  char *v7; // ebp
  char *v8; // ebp
  char *v9; // ebp
  char *v10; // ebp

  v1 = 0;
  v2 = (int)byte_102EF38C;
  while ( *(_BYTE *)v2 )
  {
    v2 += 162110;
    ++v1;
    if ( v2 >= 287723460 )
      return -1;
  }
  if ( v1 == -1 )
    return -1;
  if ( dword_1123D68C )
    v4 = (dword_1123D690 - (int)dword_1123D68C) / 20;
  else
    v4 = 0;
  sub_100A23E0((int)&FXManager::batchedQuads, v4 + 1, 0, 0, 0, 0, 0);
  v5 = dword_1123D68C;
  if ( !dword_1123D68C || v4 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v5 = dword_1123D68C;
  }
  v6 = 20 * v4;
  v5[5 * v4] = a1;
  v7 = (char *)dword_1123D68C;
  if ( !dword_1123D68C || v4 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v7 = (char *)dword_1123D68C;
  }
  *(_DWORD *)&v7[v6 + 4] = 0;
  v8 = (char *)dword_1123D68C;
  if ( !dword_1123D68C || v4 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v8 = (char *)dword_1123D68C;
  }
  *(_DWORD *)&v8[v6 + 8] = 5;
  v9 = (char *)dword_1123D68C;
  if ( !dword_1123D68C || v4 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v9 = (char *)dword_1123D68C;
  }
  *(_DWORD *)&v9[v6 + 16] = 0;
  v10 = (char *)dword_1123D68C;
  if ( !dword_1123D68C || v4 >= (dword_1123D690 - (int)dword_1123D68C) / 20 )
  {
    invalid_parameter_noinfo();
    v10 = (char *)dword_1123D68C;
  }
  *(_DWORD *)&v10[v6 + 12] = v1;
  result = v4;
  byte_102EF38C[162110 * v1] = 1;
  return result;
}
