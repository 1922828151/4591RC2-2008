/*
 * func-name: ?GetLocalizedText@Engine@@QAE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@H@Z
 * func-address: 0x100964e0
 * callers: none
 * callees: 0x1009a0d0
 */

void *__thiscall Engine::GetLocalizedText(_DWORD *this, void *a2, unsigned int a3)
{
  int v3; // eax
  _DWORD *v4; // ecx
  void *v5; // eax

  if ( (a3 & 0x80000000) == 0 && (v3 = this[9], v4 = this + 8, v3) && a3 < (v4[2] - v3) / 28 )
  {
    v5 = (void *)sub_1009A0D0(a3);
    std::wstring::wstring(a2, v5);
    return a2;
  }
  else
  {
    std::wstring::wstring(a2, L"Engine::GetLocalizedText -> Bad index");
    return a2;
  }
}
