/*
 * func-name: sub_1029CC90
 * func-address: 0x1029cc90
 * callers: 0x100064dd
 * callees: none
 */

struct CREControl *__thiscall sub_1029CC90(CREDialog *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // esi
  struct CREControl *result; // eax
  int (__stdcall *v8)(_DWORD, int, _DWORD); // edx

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v6 = 444;
      v5 = 471;
      v4 = 406;
    }
    else if ( a2 == 2 )
    {
      v6 = 472;
      v5 = 479;
      v4 = 407;
    }
  }
  else
  {
    v6 = 408;
    v5 = 443;
    v4 = 405;
  }
  result = CREDialog::GetControl(this, v4);
  if ( result )
  {
    v8 = *(int (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)result + 180);
    if ( (_BYTE)a3 )
      result = (struct CREControl *)v8(0, -7344645, 0);
    else
      result = (struct CREControl *)v8(0, -1, 0);
  }
  for ( ; v6 <= v5; ++v6 )
  {
    result = CREDialog::GetControl(this, v6);
    if ( result )
      result = (struct CREControl *)(*(int (__thiscall **)(struct CREControl *, int))(*(_DWORD *)result + 136))(
                                      result,
                                      a3);
  }
  return result;
}
