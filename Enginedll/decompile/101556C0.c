/*
 * func-name: ?ClearControlBox@CControlBoxList@@QAEXXZ
 * func-address: 0x101556c0
 * callers: none
 * callees: none
 */

void __thiscall CControlBoxList::ClearControlBox(CControlBoxList *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  int v4; // ecx
  char *v5; // ebx
  char *v6; // edi
  int v7; // eax
  char *v8; // ebp

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 134);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 135) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(*((_DWORD *)this + 134) + 4 * i);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, 1);
  }
  v5 = (char *)*((_DWORD *)this + 135);
  if ( v3 > (unsigned int)v5 )
    invalid_parameter_noinfo();
  v6 = (char *)*((_DWORD *)this + 134);
  if ( (unsigned int)v6 > *((_DWORD *)this + 135) )
    invalid_parameter_noinfo();
  if ( v6 != v5 )
  {
    v7 = (*((_DWORD *)this + 135) - (int)v5) >> 2;
    v8 = &v6[4 * v7];
    if ( v7 > 0 )
      memmove_s(v6, 4 * v7, v5, 4 * v7);
    *((_DWORD *)this + 135) = v8;
  }
  CControlBoxList::CalcScrollBar(this);
}
