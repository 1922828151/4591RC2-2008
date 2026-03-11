/*
 * func-name: ?Regist@AnimationSet@@SA_NPAV1@@Z
 * func-address: 0x100f5510
 * callers: none
 * callees: 0x100f5b70, 0x100f5bb0, 0x100f6490, 0x100f8300, 0x1010ec50, 0x1010fd40, 0x1013f020
 */

char __cdecl AnimationSet::Regist(struct AnimationSet *a1)
{
  char *v2; // ebp
  _DWORD **v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // [esp-14h] [ebp-64h]
  _DWORD **v11; // [esp+4h] [ebp-4Ch] BYREF
  _DWORD *v12; // [esp+8h] [ebp-48h]
  char v13[4]; // [esp+10h] [ebp-40h] BYREF
  int v14; // [esp+14h] [ebp-3Ch]
  int v15; // [esp+18h] [ebp-38h]
  char v16[28]; // [esp+1Ch] [ebp-34h] BYREF
  char v17[12]; // [esp+38h] [ebp-18h] BYREF
  int v18; // [esp+4Ch] [ebp-4h]

  if ( !a1 )
    return 0;
  v2 = (char *)a1 + 4;
  sub_1010FD40(&v11, (char *)a1 + 4);
  v3 = v11;
  v4 = dword_11240DB8;
  if ( !v11 || v11 != (_DWORD **)&unk_11240DB4 )
    invalid_parameter_noinfo();
  if ( v12 == v4 )
  {
    v14 = sub_1010EC50(v13);
    v15 = 0;
    v5 = (_DWORD *)(v14 + 4);
    v10 = *(_DWORD *)(v14 + 4);
    v18 = 0;
    v6 = sub_100F5B70(v14, v10, &a1);
    sub_100F5BB0(1);
    *v5 = v6;
    **(_DWORD **)(v6 + 4) = v6;
    v7 = sub_100F6490(v2, v13);
    LOBYTE(v18) = 1;
    sub_100F8300(&v11, v7);
    LOBYTE(v18) = 0;
    sub_1013F020(v17);
    std::string::~string(v16);
    sub_1013F020(v13);
    return 1;
  }
  else
  {
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v12 == v3[1] )
      invalid_parameter_noinfo();
    v8 = v12[10];
    v9 = sub_100F5B70(v8, *(_DWORD *)(v8 + 4), &a1);
    sub_100F5BB0(1);
    *(_DWORD *)(v8 + 4) = v9;
    **(_DWORD **)(v9 + 4) = v9;
    return 1;
  }
}
