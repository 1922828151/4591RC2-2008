/*
 * func-name: sub_1029D060
 * func-address: 0x1029d060
 * callers: 0x1000cc02
 * callees: none
 */

struct CREControl *__thiscall sub_1029D060(CREDialog *this, int a2, char a3)
{
  unsigned int i; // ebp
  int v5; // ecx
  struct CREControl *Control; // eax
  struct CREControl *v7; // ecx
  void (__thiscall *v8)(struct CREControl *, int); // eax
  struct CREControl *v9; // eax
  struct CREControl *v10; // eax
  struct CREControl *v11; // ebp
  struct CREControl *v12; // eax
  struct CREControl *v13; // eax
  struct CREControl *v14; // eax
  struct CREControl *v15; // eax
  struct CREControl *result; // eax
  int (__stdcall *v17)(_DWORD, int, _DWORD); // edx

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 987);
    if ( !v5 || i >= (*((_DWORD *)this + 988) - v5) >> 2 )
      break;
    Control = CREDialog::GetControl(this, *(_DWORD *)(*((_DWORD *)this + 987) + 4 * i));
    if ( Control )
      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, a2);
  }
  if ( (_BYTE)a2 )
  {
    v7 = CREDialog::GetControl(this, 101);
    v8 = *(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v7 + 136);
    if ( a3 )
    {
      v8(v7, 0);
      v9 = CREDialog::GetControl(this, 104);
      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v9 + 136))(v9, 1);
    }
    else
    {
      v8(v7, 1);
      v10 = CREDialog::GetControl(this, 104);
      (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v10 + 136))(v10, 0);
    }
  }
  v11 = CREDialog::GetControl(this, 7);
  v12 = CREDialog::GetControl(this, 3);
  *((_BYTE *)v11 + 778) = 0;
  *((_BYTE *)v12 + 778) = 0;
  if ( (_BYTE)a2 )
  {
    if ( a3 )
      *((_BYTE *)v12 + 778) = 1;
    else
      *((_BYTE *)v11 + 778) = 1;
    v13 = CREDialog::GetControl(this, 1);
    (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v13 + 136))(v13, 0);
    v14 = CREDialog::GetControl(this, 2);
    (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v14 + 136))(v14, 0);
  }
  v15 = CREDialog::GetControl(this, 3);
  if ( v15 )
  {
    if ( (_BYTE)a2 )
      (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v15 + 180))(0, a3 != 0 ? -7344645 : -1, 0);
    else
      (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v15 + 180))(0, -1, 0);
  }
  result = CREDialog::GetControl(this, 7);
  if ( result )
  {
    v17 = *(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)result + 180);
    if ( (_BYTE)a2 )
      return (struct CREControl *)v17(0, a3 != 0 ? -1 : -7344645, 0);
    else
      return (struct CREControl *)v17(0, -1, 0);
  }
  return result;
}
