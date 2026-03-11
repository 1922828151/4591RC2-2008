/*
 * func-name: ?GetSubLanguage@CMLIMEEditBox@@KAGXZ
 * func-address: 0x1006b8d0
 * callers: none
 * callees: none
 */

int __cdecl CMLIMEEditBox::GetSubLanguage()
{
  return (unsigned __int16)CMLIMEEditBox::s_hklCurrent >> 10;
}
