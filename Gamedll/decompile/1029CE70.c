/*
 * func-name: sub_1029CE70
 * func-address: 0x1029ce70
 * callers: 0x10018d77
 * callees: none
 */

struct CREControl *__thiscall sub_1029CE70(CREDialog *this, int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  struct CREControl *Control; // eax
  struct CREControl *v6; // eax
  struct CREControl *v7; // eax
  struct CREControl *result; // eax
  int (__stdcall *v9)(_DWORD, int, _DWORD); // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 979);
    if ( !v4 || i >= (*((_DWORD *)this + 980) - v4) >> 2 )
      break;
    Control = CREDialog::GetControl(this, *(_DWORD *)(*((_DWORD *)this + 979) + 4 * i));
    if ( Control )
      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, a2);
  }
  *((_BYTE *)CREDialog::GetControl(this, 5) + 778) = a2;
  if ( (_BYTE)a2 )
  {
    v6 = CREDialog::GetControl(this, 1);
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v6 + 136))(v6, 1);
    v7 = CREDialog::GetControl(this, 2);
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v7 + 136))(v7, 1);
  }
  result = CREDialog::GetControl(this, 5);
  if ( result )
  {
    v9 = *(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)result + 180);
    if ( (_BYTE)a2 )
      return (struct CREControl *)v9(0, -7344645, 0);
    else
      return (struct CREControl *)v9(0, -1, 0);
  }
  return result;
}
