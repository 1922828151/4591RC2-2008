/*
 * func-name: ?DeleteLine@CREListCtrl@@QAEXH@Z
 * func-address: 0x100cda90
 * callers: none
 * callees: 0x100d5240
 */

void __thiscall CREListCtrl::DeleteLine(CREListCtrl *this, int a2)
{
  int v2; // eax
  char *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // edi
  _BYTE v6[4]; // [esp+4h] [ebp-8h] BYREF
  unsigned int v7; // [esp+8h] [ebp-4h]

  if ( a2 >= 0 )
  {
    v2 = *((_DWORD *)this + 191);
    v3 = (char *)this + 760;
    if ( v2 )
    {
      if ( a2 < (unsigned int)((*((_DWORD *)this + 192) - v2) / 20) )
      {
        v4 = *((_DWORD *)this + 191);
        if ( v4 > *((_DWORD *)this + 192) )
          invalid_parameter_noinfo();
        v7 = v4;
        v5 = v4 + 20 * a2;
        if ( v5 > *((_DWORD *)v3 + 2) || v5 < *((_DWORD *)v3 + 1) )
          invalid_parameter_noinfo();
        sub_100D5240(v6, v3, v5);
      }
    }
  }
}
