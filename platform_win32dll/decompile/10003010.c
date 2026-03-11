/*
 * func-name: sub_10003010
 * func-address: 0x10003010
 * callers: none
 * callees: none
 */

int __thiscall sub_10003010(_DWORD *this, int a2, unsigned int a3)
{
  int v4; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, unsigned int, _DWORD))(*this + 84))(this, a3, 0) )
  {
    v4 = this[1826];
    if ( !v4 || a3 >= (this[1827] - v4) / 28 )
      invalid_parameter_noinfo();
    std::string::string(a2, this[1826] + 28 * a3);
    return a2;
  }
  else
  {
    std::string::string(&unk_1001B5B7);
    return a2;
  }
}
