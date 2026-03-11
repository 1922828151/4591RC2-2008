/*
 * func-name: ?CopyInclusionExclusionList@Actor@@QAEXPAV1@@Z
 * func-address: 0x1004f650
 * callers: none
 * callees: none
 */

void __thiscall Actor::CopyInclusionExclusionList(Actor *this, struct Actor *a2)
{
  *((_BYTE *)this + 352) = *((_BYTE *)a2 + 352);
  *((_BYTE *)this + 332) = *((_BYTE *)a2 + 332);
  sub_10011510((int)this + 336, (int)a2 + 336);
}
