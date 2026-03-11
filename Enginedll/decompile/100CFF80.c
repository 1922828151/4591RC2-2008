/*
 * func-name: ?IsDlgFrontOfMe@CREDialog@@QAE_NH@Z
 * func-address: 0x100cff80
 * callers: 0x100d75b0
 * callees: none
 */

bool __thiscall CREDialog::IsDlgFrontOfMe(CREDialog *this, int a2)
{
  _DWORD *v2; // ebx
  void (__cdecl *v3)(); // ebp
  char *v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // ebx

  v2 = (_DWORD *)*((_DWORD *)this + 936);
  v3 = invalid_parameter_noinfo;
  v4 = (char *)this + 3736;
  if ( *((_DWORD *)this + 935) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v5 = (_DWORD *)*((_DWORD *)v4 + 1);
  if ( (unsigned int)v5 > *((_DWORD *)v4 + 2) )
    invalid_parameter_noinfo();
  for ( ; v5 != v2; ++v5 )
  {
    if ( *v5 == a2 )
      break;
  }
  v6 = (_DWORD *)*((_DWORD *)v4 + 2);
  if ( *((_DWORD *)v4 + 1) > (unsigned int)v6 )
  {
    invalid_parameter_noinfo();
    v3 = invalid_parameter_noinfo;
  }
  if ( !v4 )
    v3();
  return v5 != v6;
}
