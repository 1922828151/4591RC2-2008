/*
 * func-name: sub_10019E50
 * func-address: 0x10019e50
 * callers: 0x1001b880
 * callees: 0x100196a0
 */

_DWORD *__fastcall sub_10019E50(int a1, Outpop::Utility::Ref_Object **a2, _DWORD *a3, int a4)
{
  Outpop::Utility::Ref_Object *v5; // [esp+8h] [ebp-10h] BYREF
  int v6; // [esp+14h] [ebp-4h]

  v5 = 0;
  v6 = 0;
  sub_100196A0(a3, a4, a2, a1, &v5);
  LOBYTE(v6) = 2;
  *a3 = &Outpop::Message::Synch_Group_Item::`vftable';
  Outpop::Utility::Manual_Event::Manual_Event((Outpop::Utility::Manual_Event *)(a3 + 24), 0, 0);
  return a3;
}
