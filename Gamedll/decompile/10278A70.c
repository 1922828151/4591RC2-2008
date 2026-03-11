/*
 * func-name: ?GetPass@CPasswordInputUI@@QAEJXZ_0
 * func-address: 0x10278a70
 * callers: 0x1000a0b5
 * callees: 0x102c9d62
 */

int __thiscall CPasswordInputUI::GetPass(CREStatic **this)
{
  const wchar_t *Text; // eax
  int v2; // ebx
  unsigned int i; // esi
  int v4; // edi
  _BYTE v6[28]; // [esp+10h] [ebp-2Ch] BYREF
  int v7; // [esp+38h] [ebp-4h]

  Text = CREStatic::GetText(this[968]);
  std::wstring::wstring(v6, Text);
  v7 = 0;
  v2 = 0;
  for ( i = 0; i < std::wstring::size(v6); ++i )
  {
    v4 = 0;
    if ( *(_WORD *)std::wstring::operator[](v6, i) >= 0x31u && *(_WORD *)std::wstring::operator[](v6, i) <= 0x39u )
      v4 = *(unsigned __int16 *)std::wstring::operator[](v6, i) - 48;
    v2 = v4 + 10 * v2;
  }
  v7 = -1;
  std::wstring::~wstring(v6);
  return v2;
}
