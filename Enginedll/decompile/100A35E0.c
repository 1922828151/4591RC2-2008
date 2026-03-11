/*
 * func-name: ?SetCustomText@CREButton@@QAEXPB_W@Z
 * func-address: 0x100a35e0
 * callers: none
 * callees: none
 */

void __thiscall CREButton::SetCustomText(CREButton *this, const wchar_t *a2)
{
  char *v3; // ecx

  v3 = (char *)this + 532;
  if ( a2 )
  {
    std::wstring::operator=(v3, a2);
    *((_BYTE *)this + 776) = 1;
  }
  else
  {
    std::wstring::clear(v3);
  }
}
