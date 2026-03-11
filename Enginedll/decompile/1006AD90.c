/*
 * func-name: ?GetPrimaryLanguage@CREIMEEditBox@@KAGXZ
 * func-address: 0x1006ad90
 * callers: none
 * callees: none
 */

int __cdecl CREIMEEditBox::GetPrimaryLanguage()
{
  return (unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF;
}
