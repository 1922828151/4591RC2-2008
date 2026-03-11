/*
 * func-name: sub_10019A80
 * func-address: 0x10019a80
 * callers: 0x1001af80, 0x1001b4d0
 * callees: 0x100196a0
 */

_DWORD *__fastcall sub_10019A80(
        int a1,
        Outpop::Utility::Ref_Object **a2,
        _DWORD *a3,
        int a4,
        Outpop::Utility::Ref_Object **a5)
{
  sub_100196A0(a3, a4, a2, a1, a5);
  *a3 = &Outpop::Message::Asynch_Group_Item::`vftable';
  return a3;
}
