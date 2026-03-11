/*
 * func-name: ?UpdateMemberID@Group@GameClient@@QAEXABV?$vector@KV?$allocator@K@std@@@std@@ABV?$vector@JV?$allocator@J@std@@@4@@Z_0
 * func-address: 0x101f6e70
 * callers: 0x100179ef
 * callees: 0x1001ac58
 */

unsigned int __thiscall GameClient::Group::UpdateMemberID(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v5; // ecx
  int v6; // edx
  unsigned int result; // eax
  unsigned int v8; // ebx
  int i; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // edi
  int v15; // ecx
  _DWORD *v16; // edi
  int v17; // eax
  unsigned int v18; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
    v5 = (*(_DWORD *)(a2 + 8) - v3) >> 2;
  else
    v5 = 0;
  v6 = *(_DWORD *)(a3 + 4);
  if ( v6 )
    result = (*(_DWORD *)(a3 + 8) - v6) >> 2;
  else
    result = 0;
  if ( v5 == result )
  {
    v18 = 0;
    result = sub_1001AC58();
    if ( result )
    {
      do
      {
        v8 = 0;
        for ( i = 0; ; i += 84 )
        {
          v10 = this[4];
          if ( !v10 || v8 >= (this[5] - v10) / 84 )
            break;
          v11 = this[4];
          if ( !v11 || v8 >= (this[5] - v11) / 84 )
            _invalid_parameter_noinfo();
          v12 = a2;
          v13 = *(_DWORD *)(a2 + 4);
          v14 = (_DWORD *)(i + this[4]);
          if ( !v13 || v18 >= (*(_DWORD *)(a2 + 8) - v13) >> 2 )
          {
            _invalid_parameter_noinfo();
            v12 = a2;
          }
          if ( *v14 == *(_DWORD *)(*(_DWORD *)(v12 + 4) + 4 * v18) )
          {
            v15 = *(_DWORD *)(a3 + 4);
            if ( !v15 || v18 >= (*(_DWORD *)(a3 + 8) - v15) >> 2 )
              _invalid_parameter_noinfo();
            v16 = (_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v18);
            v17 = this[4];
            if ( !v17 || v8 >= (this[5] - v17) / 84 )
              _invalid_parameter_noinfo();
            *(_DWORD *)(84 * v8 + this[4] + 32) = *v16;
            break;
          }
          ++v8;
        }
        ++v18;
        result = sub_1001AC58();
      }
      while ( v18 < result );
    }
  }
  return result;
}
