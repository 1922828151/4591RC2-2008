/*
 * func-name: ?GetText@CREStatic@@QAEPB_WXZ
 * func-address: 0x10069f90
 * callers: none
 * callees: none
 */

const wchar_t *__thiscall CREStatic::GetText(CREStatic *this)
{
  return (const wchar_t *)std::wstring::c_str((char *)this + 532);
}
