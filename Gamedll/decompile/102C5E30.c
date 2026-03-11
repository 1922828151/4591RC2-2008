/*
 * func-name: sub_102C5E30
 * func-address: 0x102c5e30
 * callers: none
 * callees: none
 */

unsigned int __thiscall sub_102C5E30(_DWORD *this)
{
  int v2; // ebx
  unsigned int v3; // edi
  unsigned int result; // eax

  if ( !*this || !this[1] )
    _invalid_parameter_noinfo();
  v2 = this[2];
  v3 = *(_DWORD *)(*this + 8);
  if ( v3 > *(_DWORD *)(*this + 12) )
    _invalid_parameter_noinfo();
  if ( (unsigned int)(32 * ((int)(this[1] - v3) >> 2) + v2 + 1) > *(_DWORD *)*this )
    _invalid_parameter_noinfo();
  result = this[2];
  if ( result >= 0x1F )
  {
    this[1] += 4;
    this[2] = 0;
  }
  else
  {
    this[2] = ++result;
  }
  return result;
}
