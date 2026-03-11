/*
 * func-name: sub_10016160
 * func-address: 0x10016160
 * callers: 0x10015b70
 * callees: 0x1000c5c0
 */

Outpop::Utility::Ref_Object **__usercall sub_10016160@<eax>(
        Outpop::Utility::Ref_Object **a1@<esi>,
        int a2,
        Outpop::Utility::Ref_Object **a3,
        int a4,
        Outpop::Utility::Ref_Object **a5)
{
  sub_1000C5C0(a1, a3, a5);
  return &a1[a5 - a3];
}
