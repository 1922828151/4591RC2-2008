/*
 * func-name: ?ClearAllSelect@CMultiLineEB@@IAEXXZ
 * func-address: 0x100ae230
 * callers: 0x100ae290, 0x100ae570
 * callees: none
 */

void __thiscall CMultiLineEB::ClearAllSelect(CMultiLineEB *this)
{
  unsigned int i; // edi
  int v3; // ecx

  *((_BYTE *)this + 856) = 0;
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 224);
    if ( !v3 || i >= (*((_DWORD *)this + 225) - v3) >> 2 )
      break;
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 224) + 4 * i) + 4) = -1;
  }
}
