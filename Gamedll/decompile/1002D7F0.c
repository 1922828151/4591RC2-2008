/*
 * func-name: sub_1002D7F0
 * func-address: 0x1002d7f0
 * callers: 0x10016289
 * callees: none
 */

int __stdcall sub_1002D7F0(int a1, int a2, int a3, int (__thiscall *a4)(int))
{
  int i; // edi
  int result; // eax

  for ( i = a3 - 1; i >= 0; --i )
  {
    result = a4(a1);
    a1 += a2;
  }
  return result;
}
