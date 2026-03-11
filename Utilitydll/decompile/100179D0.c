/*
 * func-name: ??0Wide_To_Ascii@Utility@Outpop@@QAE@PB_W@Z
 * func-address: 0x100179d0
 * callers: none
 * callees: 0x10017970
 */

Outpop::Utility::Wide_To_Ascii *__thiscall Outpop::Utility::Wide_To_Ascii::Wide_To_Ascii(
        Outpop::Utility::Wide_To_Ascii *this,
        const wchar_t *lpWideCharStr)
{
  *(_DWORD *)this = Outpop::Utility::Wide_To_Ascii::convert(lpWideCharStr);
  return this;
}
