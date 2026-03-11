/*
 * func-name: sub_10017050
 * func-address: 0x10017050
 * callers: 0x10017050, 0x100172e0
 * callees: 0x10017050
 */

void __cdecl sub_10017050(int a1, _DWORD *a2, _DWORD *a3, unsigned __int8 (__cdecl *a4)(int, _DWORD, int), int a5)
{
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax

  v5 = a1;
  if ( a1 )
  {
    if ( ++*a3 > *a2 )
      *a2 = *a3;
    if ( a4 )
    {
      if ( !a4(a1, *a3, a5) )
        return;
      v5 = a1;
    }
    v6 = *(_DWORD *)(v5 + 24);
    if ( (v6 & 0xFFFFFFFE) != 0 )
    {
      sub_10017050(v6 & 0xFFFFFFFE, a2, a3, a4, a5);
      v5 = a1;
      --*a3;
    }
    v7 = *(_DWORD *)(v5 + 24) & 0xFFFFFFFE;
    if ( v7 && v7 != -40 )
    {
      if ( v7 )
        v8 = v7 + 40;
      else
        v8 = 0;
      sub_10017050(v8, a2, a3, a4, a5);
      --*a3;
    }
  }
}
