/*
 * func-name: sub_100033E0
 * func-address: 0x100033e0
 * callers: 0x10002dc0
 * callees: none
 */

BOOL __cdecl sub_100033E0(_DWORD *a1, _DWORD *a2)
{
  unsigned int i; // esi
  int v5; // edx
  unsigned int v6; // esi
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // ecx
  unsigned int v9; // esi
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // ecx
  int v14; // eax

  for ( i = 16; i >= 4; i -= 4 )
  {
    if ( *a1 != *a2 )
      goto LABEL_5;
    ++a2;
    ++a1;
  }
  if ( !i )
  {
LABEL_14:
    v14 = 0;
    return v14 == 0;
  }
LABEL_5:
  v5 = *(unsigned __int8 *)a1 - *(unsigned __int8 *)a2;
  if ( !v5 )
  {
    v6 = i - 1;
    v7 = (unsigned __int8 *)a2 + 1;
    v8 = (unsigned __int8 *)a1 + 1;
    if ( !v6 )
      goto LABEL_14;
    v5 = *v8 - *v7;
    if ( !v5 )
    {
      v9 = v6 - 1;
      v10 = v7 + 1;
      v11 = v8 + 1;
      if ( !v9 )
        goto LABEL_14;
      v5 = *v11 - *v10;
      if ( !v5 )
      {
        v12 = v10 + 1;
        v13 = v11 + 1;
        if ( v9 == 1 )
          goto LABEL_14;
        v5 = *v13 - *v12;
        if ( !v5 )
          goto LABEL_14;
      }
    }
  }
  v14 = 1;
  if ( v5 <= 0 )
    return 0;
  return v14 == 0;
}
