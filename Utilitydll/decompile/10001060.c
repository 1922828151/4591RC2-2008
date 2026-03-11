/*
 * func-name: ?get_tick@Time_Value@Utility@Outpop@@QAE_JXZ
 * func-address: 0x10001060
 * callers: none
 * callees: 0x10019720
 */

__int64 __thiscall Outpop::Utility::Time_Value::get_tick(Outpop::Utility::Time_Value *this)
{
  __int64 v1; // rax

  v1 = *(int *)this + 3054539008LL;
  HIDWORD(v1) += 2;
  return 10 * *((_DWORD *)this + 1) + 10000000 * v1 + 504911520000000000LL;
}
