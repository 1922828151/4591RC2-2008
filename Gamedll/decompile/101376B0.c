/*
 * func-name: sub_101376B0
 * func-address: 0x101376b0
 * callers: 0x10013def
 * callees: 0x1000ab4b
 */

void __thiscall sub_101376B0(_DWORD **this, void *a2)
{
  _DWORD *v2; // esi
  _DWORD **v3; // edi

  v2 = (_DWORD *)*this[13];
  v3 = this + 12;
  while ( v2 != v3[1] )
  {
    sub_1000AB4B(a2, v2 + 2);
    if ( v2 == v3[1] )
      _invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
}
