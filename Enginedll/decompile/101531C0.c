/*
 * func-name: ?ItemOnPoint@CItemHolder@@IAEHAAUtagPOINT@@@Z
 * func-address: 0x101531c0
 * callers: 0x10153480
 * callees: none
 */

unsigned int __thiscall CItemHolder::ItemOnPoint(CItemHolder *this, struct tagPOINT *a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 135);
    if ( !v4 || i >= (*((_DWORD *)this + 136) - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(*((_DWORD *)this + 135) + 4 * i);
    if ( v5 && PtInRect((const RECT *)(v5 + 8), *a2) )
      return i;
  }
  return -1;
}
