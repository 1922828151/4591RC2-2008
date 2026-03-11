/*
 * func-name: ?SetControlCenterList@CControlCenterListUI@@QAEXABV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@ABV?$vector@W4NATION_TYPE@@V?$allocator@W4NATION_TYPE@@@std@@@3@@Z_0
 * func-address: 0x1025d710
 * callers: 0x100070ef
 * callees: 0x10011a3b, 0x10011b7b, 0x102c8d6c, 0x102c9d62
 */

unsigned int __thiscall CControlCenterListUI::SetControlCenterList(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  unsigned int i; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ebp
  unsigned int result; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  CREStatic **v15; // ebx
  const char *v16; // eax
  const wchar_t *v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  const char *v22; // eax
  const wchar_t *v23; // eax
  int v24; // ecx
  int v25; // ecx
  _DWORD v26[7]; // [esp-8h] [ebp-9Ch] BYREF
  struct tagRECT *p_rc; // [esp+14h] [ebp-80h]
  int v28; // [esp+2Ch] [ebp-68h]
  int v29; // [esp+30h] [ebp-64h]
  _DWORD *v30; // [esp+34h] [ebp-60h]
  int v31; // [esp+38h] [ebp-5Ch]
  struct tagRECT rc; // [esp+3Ch] [ebp-58h] BYREF
  _BYTE v33[28]; // [esp+4Ch] [ebp-48h] BYREF
  _BYTE v34[28]; // [esp+68h] [ebp-2Ch] BYREF
  int v35; // [esp+90h] [ebp-4h]

  v3 = a2;
  v29 = a2;
  v31 = a3;
  for ( i = 0; ; ++i )
  {
    v6 = this[969];
    if ( !v6 || i >= (this[970] - v6) >> 2 )
      break;
    v7 = *(_DWORD *)(this[969] + 4 * i);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 136))(v7, 0);
    v8 = this[973];
    if ( !v8 || i >= (this[974] - v8) >> 2 )
      _invalid_parameter_noinfo();
    v9 = *(_DWORD *)(this[973] + 4 * i);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 136))(v9, 0);
  }
  v10 = 0;
  result = sub_10011B7B();
  if ( result )
  {
    v28 = 0;
    while ( 1 )
    {
      v12 = *(_DWORD *)(v3 + 4);
      if ( !v12 || v10 >= (*(_DWORD *)(v3 + 8) - v12) / 28 )
        _invalid_parameter_noinfo();
      v13 = this[969];
      v30 = (_DWORD *)(v28 + *(_DWORD *)(v3 + 4));
      if ( !v13 || v10 >= (this[970] - v13) >> 2 )
        _invalid_parameter_noinfo();
      v14 = 4 * v10;
      v15 = (CREStatic **)(4 * v10 + this[969]);
      v16 = (const char *)std::string::c_str(v30);
      v17 = atow(v16);
      CREStatic::SetText(*v15, v17);
      v18 = this[969];
      if ( !v18 || v10 >= (this[970] - v18) >> 2 )
        _invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v14 + this[969]) + 136))(*(_DWORD *)(v14 + this[969]), 1);
      SetRect(&rc, 0, 0, 95, 72);
      v19 = v31;
      v20 = *(_DWORD *)(v31 + 4);
      if ( !v20 || v10 >= (*(_DWORD *)(v31 + 8) - v20) >> 2 )
        _invalid_parameter_noinfo();
      v21 = sub_10011A3B(v33, *(_DWORD *)(*(_DWORD *)(v19 + 4) + 4 * v10));
      v35 = 0;
      v22 = (const char *)std::string::c_str(v21);
      v23 = atow(v22);
      std::wstring::wstring(v34, v23);
      LOBYTE(v35) = 2;
      std::string::~string(v33);
      p_rc = &rc;
      v30 = v26;
      std::wstring::wstring(v26, v34);
      v24 = this[973];
      if ( !v24 || v10 >= (this[974] - v24) >> 2 )
        _invalid_parameter_noinfo();
      CPictureLabel::ChangeTexture(
        *(_DWORD *)(this[973] + 4 * v10),
        v26[0],
        v26[1],
        v26[2],
        v26[3],
        v26[4],
        v26[5],
        v26[6],
        p_rc);
      v25 = this[973];
      if ( !v25 || v10 >= (this[974] - v25) >> 2 )
        _invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v14 + this[973]) + 136))(*(_DWORD *)(v14 + this[973]), 1);
      v35 = -1;
      std::wstring::~wstring(v34);
      v28 += 28;
      ++v10;
      result = sub_10011B7B();
      if ( v10 >= result )
        break;
      v3 = v29;
    }
  }
  return result;
}
