/*
 * func-name: sub_1029CD40
 * func-address: 0x1029cd40
 * callers: 0x100121f7
 * callees: none
 */

struct CREControl *__thiscall sub_1029CD40(CREDialog *this, int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  struct CREControl *Control; // eax
  int j; // edi
  struct CREControl *v7; // eax
  int k; // edi
  struct CREControl *v9; // eax
  struct CREControl *v10; // eax
  struct CREControl *v11; // eax
  struct CREControl *result; // eax
  int (__stdcall *v13)(_DWORD, int, _DWORD); // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 975);
    if ( !v4 || i >= (*((_DWORD *)this + 976) - v4) >> 2 )
      break;
    Control = CREDialog::GetControl(this, *(_DWORD *)(*((_DWORD *)this + 975) + 4 * i));
    if ( Control )
      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, a2);
  }
  for ( j = 213; j <= 218; ++j )
  {
    v7 = CREDialog::GetControl(this, j);
    (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v7 + 136))(v7, 0);
  }
  for ( k = 207; k <= 210; ++k )
  {
    v9 = CREDialog::GetControl(this, k);
    (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v9 + 136))(v9, 0);
  }
  *((_BYTE *)CREDialog::GetControl(this, 4) + 778) = a2;
  if ( (_BYTE)a2 )
  {
    v10 = CREDialog::GetControl(this, 1);
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v10 + 136))(v10, 1);
    v11 = CREDialog::GetControl(this, 2);
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v11 + 136))(v11, 1);
  }
  result = CREDialog::GetControl(this, 4);
  if ( result )
  {
    v13 = *(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)result + 180);
    if ( (_BYTE)a2 )
      return (struct CREControl *)v13(0, -7344645, 0);
    else
      return (struct CREControl *)v13(0, -1, 0);
  }
  return result;
}
