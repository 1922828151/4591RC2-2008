/*
 * func-name: sub_10260410
 * func-address: 0x10260410
 * callers: 0x100162ac
 * callees: none
 */

void __thiscall sub_10260410(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax

  this[134] = a3;
  for ( this[135] = 1; ; ++this[135] )
  {
    v4 = this[146];
    if ( !v4 )
      break;
    v5 = this[135];
    if ( v5 >= (this[147] - v4) / 44 )
      break;
    v6 = this[146];
    if ( !v6 || v5 >= (this[147] - v6) / 44 )
      _invalid_parameter_noinfo();
    if ( this[134] <= *(_DWORD *)(44 * v5 + this[146] + 32) )
      break;
  }
  --this[135];
}
