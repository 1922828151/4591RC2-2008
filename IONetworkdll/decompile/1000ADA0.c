/*
 * func-name: sub_1000ADA0
 * func-address: 0x1000ada0
 * callers: 0x10009ce0, 0x10022d00, 0x100425e0
 * callees: 0x1000b3b0, 0x1000b770, 0x1000b880, 0x1000bc90, 0x1000be00
 */

int __usercall sub_1000ADA0@<eax>(int a1@<eax>, int a2@<ecx>)
{
  unsigned int v4; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // edx
  unsigned int v14; // ebp
  unsigned int v15; // ebp
  unsigned int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // eax
  int v20; // [esp-8h] [ebp-30h]
  int v21; // [esp+14h] [ebp-14h]
  int v22; // [esp+18h] [ebp-10h]
  int v23; // [esp+1Ch] [ebp-Ch] BYREF
  int v24; // [esp+20h] [ebp-8h]
  unsigned int v25; // [esp+24h] [ebp-4h]

  if ( a2 == a1 )
    return a2;
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v4 )
  {
    sub_1000B770();
    return a2;
  }
  if ( v4 > *(_DWORD *)(a2 + 16) )
  {
    v12 = *(_DWORD *)(a1 + 12);
    v23 = 0;
    if ( v12 > v12 + v4 )
      invalid_parameter_noinfo();
    v13 = *(_DWORD *)(a2 + 16);
    v25 = v12;
    v24 = a1;
    sub_1000B880(v13);
    v14 = *(_DWORD *)(a2 + 12);
    if ( v14 > v14 + *(_DWORD *)(a2 + 16) )
      invalid_parameter_noinfo();
    v15 = *(_DWORD *)(a1 + 12);
    if ( v15 > v15 + *(_DWORD *)(a1 + 16) )
      invalid_parameter_noinfo();
    sub_1000BE00(0, a1, v15, 0);
    v16 = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16);
    v17 = *(_DWORD *)(a1 + 12);
    if ( v17 > v16 || v16 > v17 + *(_DWORD *)(a1 + 16) )
      invalid_parameter_noinfo();
    v20 = a1;
    v18 = *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 16);
    v19 = *(_DWORD *)(a2 + 12);
    if ( v19 > v18 || v18 > v19 + *(_DWORD *)(a2 + 16) )
      invalid_parameter_noinfo();
    sub_1000BC90(a2, 0, a2, v18, 0, v21, v22, 0, v20, v16);
    return a2;
  }
  v6 = *(_DWORD *)(a2 + 12);
  if ( v6 > v6 + *(_DWORD *)(a2 + 16) )
    invalid_parameter_noinfo();
  v7 = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 12);
  if ( v8 > v7 || v7 > v8 + *(_DWORD *)(a1 + 16) )
    invalid_parameter_noinfo();
  v9 = *(_DWORD *)(a1 + 12);
  if ( v9 > v9 + *(_DWORD *)(a1 + 16) )
    invalid_parameter_noinfo();
  sub_1000BE00(0, a1, v9, 0);
  v10 = *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 12);
  if ( v11 > v10 || v10 > v11 + *(_DWORD *)(a2 + 16) )
    invalid_parameter_noinfo();
  sub_1000B3B0(&v23, 0, v24, v25, 0, a2, v10);
  return a2;
}
