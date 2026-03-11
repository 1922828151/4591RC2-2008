/*
 * func-name: ?UnSelectAll@Editor@@QAEXXZ
 * func-address: 0x10082690
 * callers: 0x100511a0, 0x10084160, 0x10085820, 0x10087570, 0x10087a10, 0x1008c3e0, 0x1008e080, 0x1008e470
 * callees: none
 */

void __thiscall Editor::UnSelectAll(Editor *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  char *v4; // ebp
  char *v5; // edi
  int v6; // eax
  char *v7; // ebx

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 562);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 563) - v3) >> 2 )
      break;
    *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * i) + 441) = 0;
  }
  v4 = (char *)*((_DWORD *)this + 563);
  if ( v3 > (unsigned int)v4 )
    invalid_parameter_noinfo();
  v5 = (char *)*((_DWORD *)this + 562);
  if ( (unsigned int)v5 > *((_DWORD *)this + 563) )
    invalid_parameter_noinfo();
  if ( v5 != v4 )
  {
    v6 = (*((_DWORD *)this + 563) - (int)v4) >> 2;
    v7 = &v5[4 * v6];
    if ( v6 > 0 )
      memmove_s(v5, 4 * v6, v4, 4 * v6);
    *((_DWORD *)this + 563) = v7;
  }
}
