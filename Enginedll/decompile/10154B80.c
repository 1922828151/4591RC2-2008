/*
 * func-name: ?SetFormatedText@CFormatedStatic@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
 * func-address: 0x10154b80
 * callers: none
 * callees: 0x100a32c0
 */

void __thiscall CFormatedStatic::SetFormatedText(CREStatic *this, int a2)
{
  const wchar_t *v3; // esi
  _BYTE v4[28]; // [esp+8h] [ebp-28h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  std::wstring::wstring(v4, (char *)this + 532);
  v5 = 0;
  if ( (unsigned __int8)std::operator!=<wchar_t>(v4, a2) )
  {
    if ( *(_DWORD *)(a2 + 24) < 8u )
      v3 = (const wchar_t *)(a2 + 4);
    else
      v3 = *(const wchar_t **)(a2 + 4);
    CREStatic::SetText(this, v3);
  }
  v5 = -1;
  std::wstring::~wstring(v4);
}
