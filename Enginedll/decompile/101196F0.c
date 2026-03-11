/*
 * func-name: sub_101196F0
 * func-address: 0x101196f0
 * callers: 0x10118c20
 * callees: 0x10119670
 */

int __thiscall sub_101196F0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // edi
  int v5; // eax

  v4 = sub_10119670(this, a2);
  v5 = this[2];
  if ( !v5 || v4 >= (this[3] - v5) / 40 )
    invalid_parameter_noinfo();
  return PyObject_GetAttrString(*(_DWORD *)(this[2] + 40 * v4 + 4), a3);
}
