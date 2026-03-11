/*
 * func-name: ?SetChannel@CChatInputUI@@IAEXW4CHANNEL_TYPE@GameClient@@@Z_0
 * func-address: 0x102581a0
 * callers: 0x10005245
 * callees: none
 */

unsigned int __thiscall CChatInputUI::SetChannel(int this, int a2)
{
  unsigned int v3; // edi
  int i; // ebx
  unsigned int result; // eax
  int v6; // eax
  int v7; // eax
  const wchar_t *v8; // eax

  v3 = 0;
  *(_DWORD *)(this + 3880) = a2;
  for ( i = 0; ; i += 36 )
  {
    result = *(_DWORD *)(this + 3888);
    if ( !result )
      break;
    result = (int)(*(_DWORD *)(this + 3892) - result) / 36;
    if ( v3 >= result )
      break;
    v6 = *(_DWORD *)(this + 3888);
    if ( !v6 || v3 >= (*(_DWORD *)(this + 3892) - v6) / 36 )
      _invalid_parameter_noinfo();
    v7 = *(_DWORD *)(this + 3888);
    if ( *(_DWORD *)(i + v7) == a2 )
    {
      if ( !v7 || v3 >= (*(_DWORD *)(this + 3892) - v7) / 36 )
        _invalid_parameter_noinfo();
      v8 = (const wchar_t *)std::wstring::c_str(*(_DWORD *)(this + 3888) + 36 * v3 + 4);
      return CREStatic::SetText(*(CREStatic **)(this + 3872), v8);
    }
    ++v3;
  }
  return result;
}
