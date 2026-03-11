/*
 * func-name: sub_101195E0
 * func-address: 0x101195e0
 * callers: none
 * callees: none
 */

int __thiscall sub_101195E0(_DWORD *this, int a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax

  v2 = 0;
  for ( i = 0; ; i += 40 )
  {
    v5 = this[2];
    if ( !v5 || v2 >= (this[3] - v5) / 40 )
      break;
    v6 = this[2];
    if ( !v6 || v2 >= (this[3] - v6) / 40 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(i + this[2] + 12, a2) )
      return v2;
    ++v2;
  }
  return -1;
}
