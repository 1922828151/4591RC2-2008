/*
 * func-name: ?RemoveControlBoxByData@CControlBoxList@@QAEXK@Z
 * func-address: 0x10155530
 * callers: none
 * callees: 0x10155480
 */

void __thiscall CControlBoxList::RemoveControlBoxByData(CControlBoxList *this, unsigned int a2)
{
  unsigned int i; // edi
  int v4; // ecx

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 134);
    if ( !v4 || i >= (*((_DWORD *)this + 135) - v4) >> 2 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 134) + 4 * i) + 552) == a2 )
      CControlBoxList::RemoveControlBox(this, i);
  }
}
