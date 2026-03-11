/*
 * func-name: sub_1001E790
 * func-address: 0x1001e790
 * callers: 0x1001e800
 * callees: none
 */

void __cdecl sub_1001E790(int a1, int *a2, unsigned __int8 *a3, _DWORD *a4, int a5)
{
  __int16 v5; // ax
  int v6; // ecx

  for ( ; (unsigned __int8 *)*a2 != a3; *a4 += 2 )
  {
    if ( *a4 == a5 )
      break;
    v5 = *(_WORD *)(a1 + 2 * *(unsigned __int8 *)*a2 + 372);
    if ( v5 )
    {
      v6 = *a2 + 1;
    }
    else
    {
      v5 = (*(int (__cdecl **)(_DWORD, int))(a1 + 364))(*(_DWORD *)(a1 + 368), *a2);
      v6 = *(unsigned __int8 *)(*(unsigned __int8 *)*a2 + a1 + 72) + *a2 - 3;
    }
    *a2 = v6;
    *(_WORD *)*a4 = v5;
  }
}
