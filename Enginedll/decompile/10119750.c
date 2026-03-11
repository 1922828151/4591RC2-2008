/*
 * func-name: sub_10119750
 * func-address: 0x10119750
 * callers: none
 * callees: 0x10097800, 0x10119670
 */

int __thiscall sub_10119750(_DWORD *this, int a2, const char *a3)
{
  unsigned int v4; // esi
  int v5; // eax

  v4 = sub_10119670(this, a2);
  if ( v4 == -1 )
    Warning("GetFunc(): Script not found. Func: %s", a3);
  v5 = this[2];
  if ( !v5 || v4 >= (this[3] - v5) / 40 )
    invalid_parameter_noinfo();
  return PyDict_GetItemString(*(_DWORD *)(this[2] + 40 * v4 + 8), a3);
}
