/*
 * func-name: ?AddControl@CREContainer@@QAEXPAVCREControl@@@Z
 * func-address: 0x100c5cc0
 * callers: none
 * callees: 0x100d2070, 0x100d2c90
 */

void __thiscall CREContainer::AddControl(CREContainer *this, struct CREControl *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // ecx
  struct CREControl *v6; // ebp
  int v7; // ecx

  sub_100D2C90((int)this + 532, (int)&a2);
  v3 = *((_DWORD *)this + 138);
  if ( v3 )
    v4 = (*((_DWORD *)this + 139) - v3) >> 3;
  else
    v4 = 0;
  sub_100D2070(v4 + 1, 0, 0);
  v5 = *((_DWORD *)this + 138);
  if ( !v5 || v4 >= (*((_DWORD *)this + 139) - v5) >> 3 )
    invalid_parameter_noinfo();
  v6 = a2;
  *(_DWORD *)(*((_DWORD *)this + 138) + 8 * v4) = *((_DWORD *)a2 + 24) - *((_DWORD *)this + 24);
  v7 = *((_DWORD *)this + 138);
  if ( !v7 || v4 >= (*((_DWORD *)this + 139) - v7) >> 3 )
    invalid_parameter_noinfo();
  *(_DWORD *)(*((_DWORD *)this + 138) + 8 * v4 + 4) = *((_DWORD *)v6 + 25) - *((_DWORD *)this + 25);
}
