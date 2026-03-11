/*
 * func-name: ?SetItemText@CREListCtrl@@QAE_NHHPB_WKK@Z
 * func-address: 0x100c9af0
 * callers: none
 * callees: 0x100d3ca0
 */

char __thiscall CREListCtrl::SetItemText(
        CREListCtrl *this,
        unsigned int a2,
        int a3,
        const wchar_t *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // eax
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // esi
  int v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // ebx
  _BYTE v15[8]; // [esp+8h] [ebp-40h] BYREF
  _DWORD v16[3]; // [esp+10h] [ebp-38h] BYREF
  _BYTE v17[28]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v18; // [esp+38h] [ebp-10h]
  int v19; // [esp+44h] [ebp-4h]

  v7 = *((_DWORD *)this + 191);
  if ( !v7 || a2 >= (*((_DWORD *)this + 192) - v7) / 20 )
    return 0;
  v9 = *((_DWORD *)this + 191);
  if ( !v9 || a2 >= (*((_DWORD *)this + 192) - v9) / 20 )
    invalid_parameter_noinfo();
  v10 = *((_DWORD *)this + 191);
  v11 = *(_DWORD **)(v10 + 20 * a2 + 4);
  v12 = v10 + 20 * a2;
  if ( (unsigned int)v11 > *(_DWORD *)(v12 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v13 = *(_DWORD **)(v12 + 8);
    if ( *(_DWORD *)(v12 + 4) > (unsigned int)v13 )
      invalid_parameter_noinfo();
    if ( !v12 )
      invalid_parameter_noinfo();
    if ( v11 == v13 )
      break;
    if ( !v12 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 8) )
      invalid_parameter_noinfo();
    if ( *v11 >= a3 )
      break;
    if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 8) )
      invalid_parameter_noinfo();
    v11 += 11;
  }
  v14 = *(_DWORD **)(v12 + 8);
  if ( *(_DWORD *)(v12 + 4) > (unsigned int)v14 )
    invalid_parameter_noinfo();
  if ( !v12 )
    invalid_parameter_noinfo();
  if ( v11 == v14 )
    goto LABEL_39;
  if ( !v12 )
    invalid_parameter_noinfo();
  if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 8) )
    invalid_parameter_noinfo();
  if ( *v11 != a3 )
  {
LABEL_39:
    std::wstring::wstring(v17);
    v18 = 0;
    v16[0] = a3;
    v19 = 0;
    std::wstring::operator=(v17, a4);
    v16[1] = a5;
    v16[2] = a6;
    sub_100D3CA0(v15, v12, v11, v16);
    v19 = -1;
    std::wstring::~wstring(v17);
  }
  else
  {
    if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 8) )
      invalid_parameter_noinfo();
    std::wstring::operator=(v11 + 3, a4);
    if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 8) )
      invalid_parameter_noinfo();
    v11[1] = a5;
    if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 8) )
      invalid_parameter_noinfo();
    v11[2] = a6;
  }
  return 1;
}
