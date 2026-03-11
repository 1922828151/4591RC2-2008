/*
 * func-name: sub_1029CF50
 * func-address: 0x1029cf50
 * callers: 0x10001ae1
 * callees: 0x100064dd
 */

struct CREControl *__thiscall sub_1029CF50(CREDialog *this, int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  struct CREControl *Control; // eax
  struct CREControl *v6; // eax
  struct CREControl *v7; // eax
  int j; // edi
  struct CREControl *v9; // eax
  struct CREControl *result; // eax
  int (__stdcall *v11)(_DWORD, int, _DWORD); // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 983);
    if ( !v4 || i >= (*((_DWORD *)this + 984) - v4) >> 2 )
      break;
    Control = CREDialog::GetControl(this, *(_DWORD *)(*((_DWORD *)this + 983) + 4 * i));
    if ( Control )
      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, a2);
  }
  *((_BYTE *)CREDialog::GetControl(this, 6) + 778) = a2;
  if ( (_BYTE)a2 )
  {
    v6 = CREDialog::GetControl(this, 1);
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v6 + 136))(v6, 1);
    v7 = CREDialog::GetControl(this, 2);
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v7 + 136))(v7, 1);
  }
  for ( j = 901; j <= 908; ++j )
  {
    v9 = CREDialog::GetControl(this, j);
    if ( v9 )
      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v9 + 136))(v9, a2);
  }
  sub_100064DD(*((_DWORD *)this + 996), a2);
  result = CREDialog::GetControl(this, 6);
  if ( result )
  {
    v11 = *(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)result + 180);
    if ( (_BYTE)a2 )
      return (struct CREControl *)v11(0, -7344645, 0);
    else
      return (struct CREControl *)v11(0, -1, 0);
  }
  return result;
}
