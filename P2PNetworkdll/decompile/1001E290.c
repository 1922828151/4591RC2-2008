/*
 * func-name: sub_1001E290
 * func-address: 0x1001e290
 * callers: 0x1001ef20
 * callees: 0x1001dee0, 0x1001df30, 0x1001df70, 0x1001ee40
 */

int __usercall sub_1001E290@<eax>(
        int a1@<eax>,
        int a2,
        int a3,
        int a4,
        int *a5,
        int *a6,
        int *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int *v9; // ebp
  int v11; // eax
  int v12; // ebx
  int v13; // esi
  int v15; // eax
  int v16; // ebp
  int v17; // eax
  int v18; // esi
  int v19; // ebp
  int v20; // eax
  int v21; // eax
  int v22; // [esp+10h] [ebp-Ch] BYREF
  int v23; // [esp+14h] [ebp-8h] BYREF
  int v24; // [esp+18h] [ebp-4h] BYREF

  v9 = a6;
  v24 = 0;
  v22 = 0;
  v23 = 0;
  v11 = *(_DWORD *)(a1 + 64);
  v12 = a4 - 2 * v11;
  a3 += v11 + 4 * v11;
  if ( !sub_1001DF70(&v23, a3, a1, v12, &v22, &v24, &a3) )
    goto LABEL_37;
  v13 = v22;
  if ( !v22 )
    goto LABEL_37;
  if ( (*(int (__cdecl **)(int, int, int, const char *))(a1 + 24))(a1, v22, v23, "version") )
  {
    if ( v9 )
      *v9 = v24;
    if ( !sub_1001DF70(&v23, a3, a1, v12, &v22, &v24, &a3) )
      goto LABEL_37;
    v13 = v22;
    if ( !v22 )
    {
      if ( a2 )
      {
        *a5 = a3;
        return 0;
      }
      return 1;
    }
  }
  else if ( !a2 )
  {
    *a5 = v13;
    return 0;
  }
  if ( !(*(int (__cdecl **)(int, int, int, const char *))(a1 + 24))(a1, v13, v23, "encoding") )
    goto LABEL_24;
  v13 = v24;
  v15 = sub_1001DEE0(a1, v24, v12);
  if ( (v15 < 97 || v15 > 122) && (unsigned int)(v15 - 65) > 0x19 )
    goto LABEL_23;
  if ( a7 )
    *a7 = v13;
  v16 = a3;
  if ( a8 )
  {
    v17 = sub_1001EE40(a1, v13, a3 - *(_DWORD *)(a1 + 64));
    *a8 = v17;
  }
  if ( !sub_1001DF70(&v23, v16, a1, v12, &v22, &v24, &a3) )
  {
LABEL_37:
    *a5 = a3;
    return 0;
  }
  v13 = v22;
  if ( !v22 )
    return 1;
LABEL_24:
  if ( !(*(int (__cdecl **)(int, int, int, const char *))(a1 + 24))(a1, v13, v23, "standalone") || a2 )
  {
LABEL_23:
    *a5 = v13;
    return 0;
  }
  v18 = a3;
  v19 = v24;
  if ( (*(int (__cdecl **)(int, int, int, void *))(a1 + 24))(a1, v24, a3 - *(_DWORD *)(a1 + 64), &unk_10028A74) )
  {
    if ( a9 )
      *a9 = 1;
  }
  else
  {
    if ( !(*(int (__cdecl **)(int, int, int, void *))(a1 + 24))(a1, v19, v18 - *(_DWORD *)(a1 + 64), &unk_10028D5C) )
    {
      *a5 = v19;
      return 0;
    }
    if ( a9 )
      *a9 = 0;
  }
  v20 = sub_1001DEE0(a1, v18, v12);
  if ( sub_1001DF30(v20) )
  {
    do
    {
      v18 += *(_DWORD *)(a1 + 64);
      v21 = sub_1001DEE0(a1, v18, v12);
    }
    while ( sub_1001DF30(v21) );
  }
  if ( v18 == v12 )
    return 1;
  *a5 = v18;
  return 0;
}
