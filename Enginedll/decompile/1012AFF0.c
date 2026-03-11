/*
 * func-name: sub_1012AFF0
 * func-address: 0x1012aff0
 * callers: 0x1012bcb0, 0x10134090
 * callees: none
 */

int __thiscall sub_1012AFF0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 176;
  return result;
}
