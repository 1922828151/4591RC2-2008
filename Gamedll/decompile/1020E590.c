/*
 * func-name: sub_1020E590
 * func-address: 0x1020e590
 * callers: 0x10019b46
 * callees: 0x10016a4f, 0x100184cb
 */

void __thiscall sub_1020E590(int this, int a2)
{
  int v2; // edi
  _DWORD *i; // esi

  v2 = this + 88;
  *(_DWORD *)(this + 72) = a2;
  for ( i = **(_DWORD ***)(this + 92); i != *(_DWORD **)(v2 + 4); i = (_DWORD *)*i )
  {
    if ( sub_10016A4F(i[2]) )
      sub_100184CB(a2);
    if ( i == *(_DWORD **)(v2 + 4) )
      _invalid_parameter_noinfo();
  }
}
