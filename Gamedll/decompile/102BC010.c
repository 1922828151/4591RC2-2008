/*
 * func-name: sub_102BC010
 * func-address: 0x102bc010
 * callers: 0x1001386d
 * callees: none
 */

void *__thiscall sub_102BC010(_DWORD *this, void *a2, unsigned int a3)
{
  int v4; // eax

  v4 = this[1];
  if ( !v4 || a3 >= (this[2] - v4) / 36 )
    _invalid_parameter_noinfo();
  std::string::string(a2, (void *)(this[1] + 36 * a3 + 4));
  return a2;
}
