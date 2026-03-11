/*
 * func-name: sub_10117A70
 * func-address: 0x10117a70
 * callers: 0x10018af7
 * callees: none
 */

_DWORD *__thiscall sub_10117A70(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
