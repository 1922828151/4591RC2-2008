/*
 * func-name: ?ChangeShowState@Equip@GameClient@@QAEX_N@Z_0
 * func-address: 0x1015a9a0
 * callers: 0x10012166
 * callees: 0x10002f7c, 0x1000ae2a, 0x1000bf05, 0x1001a5d2, 0x102c1270, 0x102c9ea2
 */

void __thiscall GameClient::Equip::ChangeShowState(GameClient::Equip *this, bool a2)
{
  int v3; // eax
  _DWORD *v4; // ebx
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int (__thiscall *v15)(int, int, float *, _DWORD); // eax
  char v16; // bl
  unsigned int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // [esp-8h] [ebp-D4h]
  int i; // [esp+18h] [ebp-B4h]
  int v23; // [esp+18h] [ebp-B4h]
  int v24; // [esp+1Ch] [ebp-B0h]
  int j; // [esp+1Ch] [ebp-B0h]
  _DWORD *v26; // [esp+20h] [ebp-ACh]
  float v27[16]; // [esp+24h] [ebp-A8h] BYREF
  float v28[16]; // [esp+64h] [ebp-68h] BYREF
  _BYTE v29[28]; // [esp+A4h] [ebp-28h] BYREF
  int v30; // [esp+C8h] [ebp-4h]

  v3 = *((_DWORD *)this + 37);
  v4 = (_DWORD *)*((_DWORD *)this + 2);
  v5 = 0;
  v26 = v4;
  if ( !v3 )
    goto LABEL_17;
  if ( (*(_DWORD *)(v3 + 368) & 0x20) != 0 )
  {
    v6 = *((_DWORD *)this + 45);
    if ( !*(_BYTE *)(v6 + 816) )
      goto LABEL_16;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(v3 + 700) )
  {
    if ( v4[49] == 3 )
    {
      v9 = *((_DWORD *)this + 45);
      if ( *(_BYTE *)(v9 + 816) )
        *(_BYTE *)(v9 + 816) = 0;
      goto LABEL_17;
    }
    if ( !a2 )
    {
      v6 = *((_DWORD *)this + 45);
LABEL_16:
      *(_BYTE *)(v6 + 816) = 1;
      goto LABEL_17;
    }
    *(_BYTE *)(*((_DWORD *)this + 45) + 816) = 0;
LABEL_17:
    v8 = *((_DWORD *)this + 45);
    goto LABEL_18;
  }
  v7 = *((_DWORD *)this + 45);
  if ( !*(_BYTE *)(v7 + 816) )
    *(_BYTE *)(v7 + 816) = 1;
  v8 = *((_DWORD *)this + 45);
  if ( a2 )
  {
    *(_BYTE *)(v8 + 1384) = 1;
    goto LABEL_19;
  }
LABEL_18:
  *(_BYTE *)(v8 + 1384) = 0;
LABEL_19:
  v24 = 0;
  for ( i = 0; ; i += 120 )
  {
    v10 = *((_DWORD *)this + 82);
    if ( !v10 || v5 >= (*((_DWORD *)this + 83) - v10) / 120 )
      break;
    v11 = *((_DWORD *)this + 82);
    if ( !v11 || v5 >= (*((_DWORD *)this + 83) - v11) / 120 )
      _invalid_parameter_noinfo();
    if ( sub_1000BF05() )
    {
      memset(v27, 0, sizeof(v27));
      sub_102C1270(1.0);
      v12 = v4[173];
      v27[15] = 1.0;
      if ( !v12 || v5 >= (v4[174] - v12) / 28 )
        _invalid_parameter_noinfo();
      v13 = std::operator+<char>(v29, v24 + v4[173], "FPV");
      v14 = *((_DWORD *)this + 45);
      v21 = v13;
      v15 = *(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)v14 + 120);
      v30 = 0;
      v16 = v15(v14, v21, v27, 0);
      v30 = -1;
      std::string::~string(v29);
      if ( v16 )
      {
        sub_10002F7C((int)v27);
        sub_1000AE2A((int)&v27[12]);
      }
      sub_1001A5D2(*(_BYTE *)(*((_DWORD *)this + 45) + 1384) != 0);
      v4 = v26;
    }
    ++v5;
    v24 += 28;
  }
  v17 = 0;
  v23 = 0;
  for ( j = 0; ; j += 120 )
  {
    v18 = *((_DWORD *)this + 78);
    if ( !v18 || v17 >= (*((_DWORD *)this + 79) - v18) / 120 )
      break;
    v19 = *((_DWORD *)this + 78);
    if ( !v19 || v17 >= (*((_DWORD *)this + 79) - v19) / 120 )
      _invalid_parameter_noinfo();
    if ( sub_1000BF05() )
    {
      memset(v28, 0, sizeof(v28));
      sub_102C1270(1.0);
      v28[15] = 1.0;
      v20 = v26[165];
      if ( !v20 || v17 >= (v26[166] - v20) / 28 )
        _invalid_parameter_noinfo();
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, float *, _DWORD))(**((_DWORD **)this + 45) + 120))(
             *((_DWORD *)this + 45),
             v23 + v26[165],
             v28,
             0) )
      {
        sub_10002F7C((int)v28);
        sub_1000AE2A((int)&v28[12]);
      }
      sub_1001A5D2(*(_BYTE *)(*((_DWORD *)this + 45) + 816) == 0);
    }
    ++v17;
    v23 += 28;
  }
}
