/*
 * func-name: ??0OS_Buffer@Utility@Outpop@@QAE@PADH_N@Z
 * func-address: 0x1000eac0
 * callers: none
 * callees: none
 */

Outpop::Utility::OS_Buffer *__thiscall Outpop::Utility::OS_Buffer::OS_Buffer(
        Outpop::Utility::OS_Buffer *this,
        char *a2,
        int a3,
        bool a4)
{
  Outpop::Utility::OS_Buffer *result; // eax

  result = this;
  *((_DWORD *)this + 1) = a3;
  *(_DWORD *)this = a2;
  return result;
}
