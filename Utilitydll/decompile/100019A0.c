/*
 * func-name: ?get_absoluteness_week_num@Time_Value@Utility@Outpop@@QAEHXZ
 * func-address: 0x100019a0
 * callers: none
 * callees: 0x10019590, 0x10019670, 0x10019720
 */

int __thiscall Outpop::Utility::Time_Value::get_absoluteness_week_num(Outpop::Utility::Time_Value *this)
{
  __int64 v1; // rax
  __int64 v2; // kr00_8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = *(int *)this + 3054539008LL;
  HIDWORD(v1) += 2;
  v2 = 10 * *((_DWORD *)this + 1) + 10000000 * v1;
  v3 = (__int64)((unsigned int)v2 + ((unsigned __int64)HIDWORD(v2) << 32)) / 3600 / 24 / 10000000;
  if ( !v3 )
    v3 = 1;
  v5 = v3 % 7;
  v4 = v3 / 7;
  if ( v5 )
    LODWORD(v4) = v4 + 1;
  return v4;
}
