/*
 * func-name: ?SetColumn@CREListCtrl@@QAE_NHPB_WHK@Z
 * func-address: 0x100ae720
 * callers: none
 * callees: none
 */

char __thiscall CREListCtrl::SetColumn(CREListCtrl *this, unsigned int a2, const wchar_t *a3, int a4, unsigned int a5)
{
  int v6; // eax
  int v8; // eax
  _DWORD *v9; // edi

  v6 = *((_DWORD *)this + 187);
  if ( !v6 || a2 >= (*((_DWORD *)this + 188) - v6) / 40 )
    return 0;
  v8 = *((_DWORD *)this + 187);
  if ( !v8 || a2 >= (*((_DWORD *)this + 188) - v8) / 40 )
    invalid_parameter_noinfo();
  v9 = (_DWORD *)(*((_DWORD *)this + 187) + 40 * a2);
  if ( a3 )
    std::wstring::operator=(v9 + 3, a3);
  if ( a4 != -1 )
  {
    *((_DWORD *)this + 179) += a4 - *v9;
    *v9 = a4;
  }
  if ( a5 )
    v9[1] = a5;
  return 1;
}
