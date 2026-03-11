/*
 * func-name: ?SetText@CREStatic@@QAEJPB_W@Z
 * func-address: 0x100a32c0
 * callers: 0x100d5780, 0x100d59b0, 0x1014a750, 0x10154b80, 0x1015ac30, 0x1015b520, 0x1015b610, 0x1015b760
 * callees: none
 */

int __thiscall CREStatic::SetText(CREStatic *this, const wchar_t *a2)
{
  char *v2; // ecx

  v2 = (char *)this + 532;
  if ( a2 )
    std::wstring::operator=(v2, a2);
  else
    std::wstring::clear(v2);
  return 0;
}
