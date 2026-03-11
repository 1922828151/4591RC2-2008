/*
 * func-name: ?GetItemText@CREListCtrl@@QAE_NHHAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
 * func-address: 0x100ae850
 * callers: none
 * callees: 0x100096e0, 0x100a1b10, 0x100cddb0
 */

char __thiscall CREListCtrl::GetItemText(_DWORD *this, signed int a2, int a3, int a4)
{
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  _DWORD *v8; // esi
  unsigned int v9; // edi
  int i; // ebx
  int v11; // eax
  int v13; // eax

  if ( a2 < 0 )
    return 0;
  v5 = this[191];
  v6 = this + 190;
  if ( !v5 )
    return 0;
  if ( a2 >= (unsigned int)((this[192] - v5) / 20) )
    return 0;
  if ( a3 < 0 )
    return 0;
  v7 = this[187];
  if ( !v7 )
    return 0;
  if ( a3 >= (unsigned int)((this[188] - v7) / 40) )
    return 0;
  v8 = (_DWORD *)std::vector<AttributeRange>::operator[](v6, a2);
  v9 = 0;
  if ( !sub_100096E0(v8) )
    return 0;
  for ( i = 0; ; i += 44 )
  {
    v11 = v8[1];
    if ( !v11 || v9 >= (v8[2] - v11) / 44 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(i + v8[1]) == a3 )
      break;
    if ( ++v9 >= sub_100096E0(v8) )
      return 0;
  }
  v13 = sub_100CDDB0(v9);
  std::wstring::operator=(a4, v13 + 12);
  return 1;
}
