/*
 * func-name: sub_10004500
 * func-address: 0x10004500
 * callers: 0x10012140, 0x100169d0, 0x100171d0
 * callees: none
 */

int __stdcall sub_10004500(int a1, int a2, int a3, int (__thiscall *a4)(int))
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
