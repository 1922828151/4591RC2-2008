/*
 * func-name: ?GetItem@CItemHolder@@QAEPAUItemInfo@1@H@Z
 * func-address: 0x101530b0
 * callers: none
 * callees: none
 */

struct CItemHolder::ItemInfo *__thiscall CItemHolder::GetItem(CItemHolder *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 135);
  if ( v3 && a2 < (*((_DWORD *)this + 136) - v3) >> 2 )
    return *(struct CItemHolder::ItemInfo **)(*((_DWORD *)this + 135) + 4 * a2);
  else
    return 0;
}
