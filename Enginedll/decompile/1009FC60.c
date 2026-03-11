/*
 * func-name: sub_1009FC60
 * func-address: 0x1009fc60
 * callers: 0x1009fc60
 * callees: 0x1009fc60
 */

signed int __cdecl sub_1009FC60(int a1, signed int a2, signed int a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // ecx
  void (__cdecl *v9)(); // ebx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ebx
  int v14; // ecx
  signed int result; // eax
  int v16; // [esp+10h] [ebp-4h]
  float v17; // [esp+18h] [ebp+4h]

  while ( 1 )
  {
    v4 = a3;
    v5 = a2;
    v6 = *(_DWORD *)(a1 + 4);
    v7 = (a3 + a2) / 2;
    if ( !v6 || v7 >= (*(_DWORD *)(a1 + 8) - v6) >> 2 )
      invalid_parameter_noinfo();
    v17 = *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v7) + 12);
    do
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(a1 + 4);
        if ( v8 && v5 < (*(_DWORD *)(a1 + 8) - v8) >> 2 )
        {
          v9 = invalid_parameter_noinfo;
        }
        else
        {
          v9 = invalid_parameter_noinfo;
          invalid_parameter_noinfo();
        }
        if ( v17 >= (double)*(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) + 12) )
          break;
        ++v5;
      }
      while ( 1 )
      {
        v10 = *(_DWORD *)(a1 + 4);
        if ( !v10 || v4 >= (*(_DWORD *)(a1 + 8) - v10) >> 2 )
          v9();
        v11 = *(_DWORD *)(a1 + 4);
        if ( v17 <= (double)*(float *)(*(_DWORD *)(v11 + 4 * v4) + 12) )
          break;
        --v4;
      }
      if ( (int)v4 < (int)v5 )
        break;
      if ( v4 != v5 )
      {
        if ( !v11 || v4 >= (*(_DWORD *)(a1 + 8) - v11) >> 2 )
          v9();
        v12 = *(_DWORD *)(a1 + 4);
        v16 = *(_DWORD *)(v12 + 4 * v4);
        if ( !v12 || v5 >= (*(_DWORD *)(a1 + 8) - v12) >> 2 )
          v9();
        v13 = *(_DWORD *)(a1 + 4);
        if ( !v13 || v4 >= (*(_DWORD *)(a1 + 8) - v13) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v4) = *(_DWORD *)(v13 + 4 * v5);
        v14 = *(_DWORD *)(a1 + 4);
        if ( !v14 || v5 >= (*(_DWORD *)(a1 + 8) - v14) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v5) = v16;
      }
      --v4;
      ++v5;
    }
    while ( (int)v5 <= (int)v4 );
    result = a2;
    if ( a2 < (int)v4 )
      result = sub_1009FC60(a1, a2, v4);
    if ( (int)v5 >= a3 )
      break;
    a2 = v5;
  }
  return result;
}
