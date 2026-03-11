/*
 * func-name: ?GetItemByData@CItemHolder@@QAEPAUItemInfo@1@K@Z
 * func-address: 0x10153100
 * callers: none
 * callees: none
 */

struct CItemHolder::ItemInfo *__thiscall CItemHolder::GetItemByData(CItemHolder *this, unsigned int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  struct CItemHolder::ItemInfo *result; // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 135);
    if ( !v4 || i >= (*((_DWORD *)this + 136) - v4) >> 2 )
      break;
    result = *(struct CItemHolder::ItemInfo **)(*((_DWORD *)this + 135) + 4 * i);
    if ( result && *((_DWORD *)result + 6) == a2 )
      return result;
  }
  return 0;
}
