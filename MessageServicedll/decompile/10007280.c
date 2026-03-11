/*
 * func-name: sub_10007280
 * func-address: 0x10007280
 * callers: 0x10003d80, 0x10003f80, 0x10010740, 0x10010830
 * callees: 0x100074b0
 */

int __thiscall sub_10007280(_DWORD *this)
{
  int result; // eax

  *this = &Outpop::Utility::event_template<int,Outpop::Utility::Null_Lock>::`vftable';
  result = sub_100074B0(this + 1);
  *this = &Outpop::Utility::event_base::`vftable';
  return result;
}
