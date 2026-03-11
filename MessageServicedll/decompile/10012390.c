/*
 * func-name: sub_10012390
 * func-address: 0x10012390
 * callers: 0x10010740
 * callees: 0x10012ad0
 */

_DWORD *__stdcall sub_10012390(_DWORD *a1)
{
  _DWORD *v1; // esi

  v1 = a1;
  *a1 = &Outpop::Utility::event_base::`vftable';
  *v1 = &Outpop::Utility::event_template<int,Outpop::Utility::Null_Lock>::`vftable';
  sub_10012AD0(v1 + 1, &a1);
  v1[11] = 0;
  return v1;
}
