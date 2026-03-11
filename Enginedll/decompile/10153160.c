/*
 * func-name: ?GetItemData@CItemHolder@@QAEKH@Z
 * func-address: 0x10153160
 * callers: none
 * callees: none
 */

unsigned int __thiscall CItemHolder::GetItemData(CItemHolder *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 135);
  if ( v3 && a2 < (*((_DWORD *)this + 136) - v3) >> 2 )
    return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 135) + 4 * a2) + 24);
  else
    return 0;
}
