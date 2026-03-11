/*
 * func-name: ?wp_delta@Stream_Base@Utility@Outpop@@QAEPADH@Z
 * func-address: 0x1000f2a0
 * callers: none
 * callees: none
 */

char *__thiscall Outpop::Utility::Stream_Base::wp_delta(Outpop::Utility::Stream_Base *this, int a2)
{
  int v2; // edx
  char *result; // eax

  v2 = *((_DWORD *)this + 3);
  result = (char *)(v2 + **((_DWORD **)this + 2));
  *((_DWORD *)this + 3) = a2 + v2;
  return result;
}
