/*
 * func-name: sub_10003F00
 * func-address: 0x10003f00
 * callers: 0x10003d80
 * callees: 0x100072f0
 */

_DWORD *__userpurge sub_10003F00@<eax>(int a1@<ebx>, _DWORD *a2)
{
  *a2 = &Outpop::Utility::event_base::`vftable';
  *a2 = &Outpop::Utility::event_template<int,Outpop::Utility::Null_Lock>::`vftable';
  sub_100072F0(a2 + 1);
  a2[11] = *(_DWORD *)(a1 + 44);
  return a2;
}
