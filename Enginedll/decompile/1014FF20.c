/*
 * func-name: ?SetItemOnHand@CItemHolder@@QAE_NPAUItemInfo@1@@Z
 * func-address: 0x1014ff20
 * callers: none
 * callees: 0x1014fae0, 0x1014fe10, 0x101a2500
 */

char __thiscall CItemHolder::SetItemOnHand(CItemHolder *this, struct CItemHolder::ItemInfo *a2)
{
  void *v3; // esi

  if ( a2 )
  {
    CItemHolder::SetItemOnHand((int)this, (int)a2 + 28, *((_DWORD *)a2 + 6), (int)a2 + 76);
    return 1;
  }
  else
  {
    v3 = (void *)*((_DWORD *)this + 156);
    if ( v3 )
    {
      sub_1014FAE0(*((_DWORD **)this + 156));
      operator delete(v3);
      *((_DWORD *)this + 156) = 0;
    }
    return 1;
  }
}
