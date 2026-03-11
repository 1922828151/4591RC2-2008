/*
 * func-name: ?GetSubLanguage@CREIMEEditBox@@KAGXZ
 * func-address: 0x1006ada0
 * callers: none
 * callees: none
 */

int __cdecl CREIMEEditBox::GetSubLanguage()
{
  return (unsigned __int16)CREIMEEditBox::s_hklCurrent >> 10;
}
