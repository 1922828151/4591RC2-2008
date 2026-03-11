/*
 * func-name: ?RemoveColumn@CREListCtrl@@QAEXH@Z
 * func-address: 0x100c53c0
 * callers: none
 * callees: 0x100d1c70
 */

void __thiscall CREListCtrl::RemoveColumn(CREListCtrl *this, unsigned int a2)
{
  int v3; // eax
  char *v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edi
  bool v8; // cc
  _BYTE v9[4]; // [esp+8h] [ebp-8h] BYREF
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v3 = *((_DWORD *)this + 187);
  v4 = (char *)this + 744;
  if ( v3 && a2 < (*((_DWORD *)this + 188) - v3) / 40 )
  {
    v5 = *((_DWORD *)this + 187);
    if ( !v5 || a2 >= (*((_DWORD *)this + 188) - v5) / 40 )
      invalid_parameter_noinfo();
    *((_DWORD *)this + 179) -= *(_DWORD *)(*((_DWORD *)v4 + 1) + 40 * a2);
    v6 = *((_DWORD *)v4 + 1);
    if ( v6 > *((_DWORD *)v4 + 2) )
      invalid_parameter_noinfo();
    v7 = v6 + 40 * a2;
    v8 = v7 <= *((_DWORD *)v4 + 2);
    v10 = v6;
    if ( !v8 || v7 < *((_DWORD *)v4 + 1) )
      invalid_parameter_noinfo();
    sub_100D1C70(v9, v4, v7);
  }
}
