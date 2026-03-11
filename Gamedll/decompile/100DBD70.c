/*
 * func-name: sub_100DBD70
 * func-address: 0x100dbd70
 * callers: 0x10010249
 * callees: none
 */

int __thiscall sub_100DBD70(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 120 )
    _invalid_parameter_noinfo();
  return this[1] + 120 * a2;
}
