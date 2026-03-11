/*
 * func-name: ?ShowMember@CGroupMemberUI@@QAEXXZ_0
 * func-address: 0x10271030
 * callers: 0x10007824
 * callees: none
 */

void __thiscall CGroupMemberUI::ShowMember(CGroupMemberUI *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // eax
  int v5; // eax
  struct CREControl *Control; // eax
  struct CREControl *v7; // eax

  v1 = 0;
  for ( i = 0; ; i += 80 )
  {
    v4 = *((_DWORD *)this + 969);
    if ( !v4 || v1 >= (*((_DWORD *)this + 970) - v4) / 80 )
      break;
    v5 = *((_DWORD *)this + 969);
    if ( !v5 || v1 >= (*((_DWORD *)this + 970) - v5) / 80 )
      _invalid_parameter_noinfo();
    *(_BYTE *)(i + *((_DWORD *)this + 969)) = 1;
    ++v1;
  }
  Control = CREDialog::GetControl(this, 2);
  (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, 1);
  v7 = CREDialog::GetControl(this, 3);
  (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v7 + 136))(v7, 0);
}
