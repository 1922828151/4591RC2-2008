/*
 * func-name: ?GetPrimaryLanguage@CMLIMEEditBox@@KAGXZ
 * func-address: 0x1006b8c0
 * callers: none
 * callees: none
 */

int __cdecl CMLIMEEditBox::GetPrimaryLanguage()
{
  return (unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF;
}
