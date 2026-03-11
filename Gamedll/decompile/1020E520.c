/*
 * func-name: sub_1020E520
 * func-address: 0x1020e520
 * callers: 0x10009674
 * callees: 0x10011a27, 0x10016a4f
 */

void __thiscall sub_1020E520(int this, int a2)
{
  int v2; // edi
  _DWORD *i; // esi

  v2 = this + 88;
  *(_DWORD *)(this + 68) = a2;
  for ( i = **(_DWORD ***)(this + 92); i != *(_DWORD **)(v2 + 4); i = (_DWORD *)*i )
  {
    if ( sub_10016A4F(i[2]) )
      sub_10011A27(a2);
    if ( i == *(_DWORD **)(v2 + 4) )
      _invalid_parameter_noinfo();
  }
}
