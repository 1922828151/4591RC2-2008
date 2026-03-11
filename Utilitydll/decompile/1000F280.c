/*
 * func-name: ?rp_delta@Stream_Base@Utility@Outpop@@QAEPADH@Z
 * func-address: 0x1000f280
 * callers: none
 * callees: none
 */

char *__thiscall Outpop::Utility::Stream_Base::rp_delta(Outpop::Utility::Stream_Base *this, int a2)
{
  int v2; // edx
  char *result; // eax

  v2 = *((_DWORD *)this + 4);
  result = (char *)(v2 + **((_DWORD **)this + 2));
  *((_DWORD *)this + 4) = a2 + v2;
  return result;
}
