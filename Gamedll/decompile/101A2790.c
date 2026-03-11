/*
 * func-name: ?UpdateArmor@Establishment@GameClient@@QAEXABV?$vector@MV?$allocator@M@std@@@std@@@Z_0
 * func-address: 0x101a2790
 * callers: 0x100069f1
 * callees: 0x10019f56
 */

unsigned int __thiscall GameClient::Establishment::UpdateArmor(_DWORD *this, int a2)
{
  int v2; // ebx
  unsigned int v4; // edi
  unsigned int result; // eax
  int v6; // ecx
  int v7; // eax
  float *v8; // ebx
  int v9; // ecx
  int v10; // eax
  float *v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // [esp+Ch] [ebp-4h]

  v2 = a2;
  v4 = 0;
  result = sub_10019F56();
  if ( result )
  {
    v15 = 0;
    while ( 1 )
    {
      result = this[39];
      if ( !result )
        break;
      result = (int)(this[40] - result) / 20;
      if ( v4 >= result )
        break;
      v6 = *(_DWORD *)(v2 + 4);
      if ( !v6 || v4 >= (*(_DWORD *)(v2 + 8) - v6) >> 2 )
        _invalid_parameter_noinfo();
      v7 = this[39];
      v8 = (float *)(4 * v4 + *(_DWORD *)(v2 + 4));
      if ( !v7 || v4 >= (this[40] - v7) / 20 )
        _invalid_parameter_noinfo();
      if ( (double)*(int *)(v15 + this[39] + 4) < *v8 )
      {
        v12 = this[39];
        if ( !v12 || v4 >= (this[40] - v12) / 20 )
          _invalid_parameter_noinfo();
        v13 = this[39];
        v14 = v15 + v13;
        if ( !v13 || v4 >= (this[40] - v13) / 20 )
          _invalid_parameter_noinfo();
        *(float *)(this[39] + v15 + 8) = (float)*(int *)(v14 + 4);
      }
      else
      {
        v9 = *(_DWORD *)(a2 + 4);
        if ( !v9 || v4 >= (*(_DWORD *)(a2 + 8) - v9) >> 2 )
          _invalid_parameter_noinfo();
        v10 = this[39];
        v11 = (float *)(4 * v4 + *(_DWORD *)(a2 + 4));
        if ( !v10 || v4 >= (this[40] - v10) / 20 )
          _invalid_parameter_noinfo();
        *(float *)(this[39] + v15 + 8) = *v11;
      }
      v15 += 20;
      ++v4;
      result = sub_10019F56();
      if ( v4 >= result )
        break;
      v2 = a2;
    }
  }
  return result;
}
