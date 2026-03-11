/*
 * func-name: ?GetFormatedLine@CMultiLineStatic@@QAE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ
 * func-address: 0x100b4790
 * callers: none
 * callees: none
 */

void *__thiscall CMultiLineStatic::GetFormatedLine(_DWORD *this, void *a2)
{
  int v3; // eax
  void (__cdecl *v4)(); // ebp
  _DWORD *v5; // esi
  unsigned int v6; // edi
  unsigned int i; // ebx
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // eax
  int v12; // edi

  std::wstring::wstring(a2);
  v3 = this[179];
  v4 = invalid_parameter_noinfo;
  v5 = this + 175;
  v6 = v5[3];
  if ( v6 > v6 + v3 )
    invalid_parameter_noinfo();
  for ( i = v6; ; ++i )
  {
    v8 = v5[3];
    v9 = v8 + v5[4];
    if ( v8 > v9 )
      v4();
    if ( i == v9 )
      break;
    v10 = i >> 2;
    if ( i >= v5[3] + v5[4] )
      invalid_parameter_noinfo();
    v11 = v5[2];
    if ( v11 <= v10 )
      v10 -= v11;
    v12 = *(_DWORD *)(*(_DWORD *)(v5[1] + 4 * v10) + 4 * (i & 3));
    std::wstring::operator+=(a2, v12);
    if ( !*(_BYTE *)(v12 + 52) )
      std::wstring::operator+=(a2, "\n");
    if ( i >= v5[3] + v5[4] )
      invalid_parameter_noinfo();
    v4 = invalid_parameter_noinfo;
  }
  return a2;
}
