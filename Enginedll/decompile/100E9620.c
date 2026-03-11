/*
 * func-name: sub_100E9620
 * func-address: 0x100e9620
 * callers: 0x100eb8b0
 * callees: 0x10061060, 0x100ec790
 */

int __cdecl sub_100E9620(int a1, float *a2, float *a3, float *a4, int a5)
{
  unsigned int v5; // edi
  int i; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // ebx

  v5 = 0;
  if ( !sub_100EC790(a1) )
    return -1;
  for ( i = 0; ; i += 80 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    if ( !v7 || v5 >= (*(_DWORD *)(a1 + 8) - v7) / 80 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(v8 + i + 36) == a5 )
    {
      if ( !v8 || v5 >= (*(_DWORD *)(a1 + 8) - v8) / 80 )
        invalid_parameter_noinfo();
      v9 = *(_DWORD *)(a1 + 4);
      if ( sub_10061060((float *)(v9 + i + 40), a2) )
        break;
      if ( !v9 || v5 >= (*(_DWORD *)(a1 + 8) - v9) / 80 )
        invalid_parameter_noinfo();
      v10 = *(_DWORD *)(a1 + 4);
      if ( sub_10061060((float *)(v10 + i + 40), a3) )
        break;
      if ( !v10 || v5 >= (*(_DWORD *)(a1 + 8) - v10) / 80 )
        invalid_parameter_noinfo();
      if ( sub_10061060((float *)(*(_DWORD *)(a1 + 4) + i + 40), a4) )
        break;
    }
    if ( ++v5 >= sub_100EC790(a1) )
      return -1;
  }
  return v5;
}
