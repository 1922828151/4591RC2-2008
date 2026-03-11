/*
 * func-name: ?GetIndexByData@CREListCtrl@@QAEHK@Z
 * func-address: 0x100ae9d0
 * callers: none
 * callees: none
 */

unsigned int __thiscall CREListCtrl::GetIndexByData(CREListCtrl *this, unsigned int a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax

  v2 = 0;
  for ( i = 0; ; i += 20 )
  {
    v5 = *((_DWORD *)this + 191);
    if ( !v5 || v2 >= (*((_DWORD *)this + 192) - v5) / 20 )
      break;
    v6 = *((_DWORD *)this + 191);
    if ( !v6 || v2 >= (*((_DWORD *)this + 192) - v6) / 20 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*((_DWORD *)this + 191) + i + 16) == a2 )
      return v2;
    ++v2;
  }
  return -1;
}
