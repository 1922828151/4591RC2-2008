/*
 * func-name: ?AddNumber@CPasswordInputUI@@QAEXH@Z_0
 * func-address: 0x10278b50
 * callers: 0x10014a33
 * callees: 0x102c9d62
 */

void __thiscall CPasswordInputUI::AddNumber(CREStatic **this, int a2)
{
  const wchar_t *Text; // eax
  const wchar_t *v4; // eax
  _BYTE v5[28]; // [esp+8h] [ebp-48h] BYREF
  _BYTE v6[28]; // [esp+24h] [ebp-2Ch] BYREF
  int v7; // [esp+4Ch] [ebp-4h]

  Text = CREStatic::GetText(this[968]);
  std::wstring::wstring(v5, Text);
  v7 = 0;
  if ( (unsigned int)std::wstring::size(v5) > 4 )
    std::wstring::clear(v5);
  if ( std::wstring::size(v5) != 4 )
  {
    std::wstring::wstring(v6);
    LOBYTE(v7) = 1;
    if ( a2 == 10 )
      std::wstring::operator=(48);
    else
      std::wstring::operator=(a2 + 48);
    std::wstring::operator+=(v5, v6);
    v4 = (const wchar_t *)std::wstring::c_str(v5);
    CREStatic::SetText(this[968], v4);
    LOBYTE(v7) = 0;
    std::wstring::~wstring(v6);
  }
  v7 = -1;
  std::wstring::~wstring(v5);
}
