/*
 * func-name: ?ClearCellSelection@CItemHolder@@QAEXXZ
 * func-address: 0x10153830
 * callers: none
 * callees: none
 */

void __thiscall CItemHolder::ClearCellSelection(CItemHolder *this)
{
  unsigned int i; // edi
  int v3; // ecx

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 135);
    if ( !v3 || i >= (*((_DWORD *)this + 136) - v3) >> 2 )
      break;
    *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 135) + 4 * i) + 104) = 0;
  }
}
