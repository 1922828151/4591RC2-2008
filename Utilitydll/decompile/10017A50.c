/*
 * func-name: ??0Ascii_To_Wide@Utility@Outpop@@QAE@PBD@Z
 * func-address: 0x10017a50
 * callers: none
 * callees: 0x100179f0
 */

Outpop::Utility::Ascii_To_Wide *__thiscall Outpop::Utility::Ascii_To_Wide::Ascii_To_Wide(
        Outpop::Utility::Ascii_To_Wide *this,
        const char *lpMultiByteStr)
{
  *(_DWORD *)this = Outpop::Utility::Ascii_To_Wide::convert(lpMultiByteStr);
  return this;
}
