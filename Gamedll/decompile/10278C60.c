/*
 * func-name: ?BackSpace@CPasswordInputUI@@QAEXXZ_0
 * func-address: 0x10278c60
 * callers: 0x100179a9
 * callees: 0x102c9d62
 */

void __thiscall CPasswordInputUI::BackSpace(CREStatic **this)
{
  const wchar_t *Text; // eax
  int v3; // eax
  const wchar_t *v4; // [esp-4h] [ebp-54h]
  _BYTE v5[20]; // [esp+8h] [ebp-48h] BYREF
  int v6; // [esp+1Ch] [ebp-34h]
  _BYTE v7[20]; // [esp+24h] [ebp-2Ch] BYREF
  int v8; // [esp+38h] [ebp-18h]
  int v9; // [esp+4Ch] [ebp-4h]

  Text = CREStatic::GetText(this[968]);
  std::wstring::wstring(v5, Text);
  v9 = 0;
  if ( v6 && std::wstring::size(v5) != 5 )
  {
    v3 = std::wstring::size(v5);
    std::wstring::substr(v5, v7, 0, v3 - 1);
    LOBYTE(v9) = 1;
    if ( v8 )
    {
      v4 = (const wchar_t *)std::wstring::c_str(v7);
      CREStatic::SetText(this[968], v4);
    }
    else
    {
      CREStatic::SetText(this[968], word_1032282C);
    }
    LOBYTE(v9) = 0;
    std::wstring::~wstring(v7);
  }
  v9 = -1;
  std::wstring::~wstring(v5);
}
