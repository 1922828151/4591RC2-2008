/*
 * func-name: sub_10009730
 * func-address: 0x10009730
 * callers: 0x10068320, 0x1007c450, 0x100e1440, 0x100e97f0, 0x100ee670, 0x1011b870, 0x1011d270, 0x101220b0, 0x10145800, 0x101b8150
 * callees: none
 */

int __stdcall sub_10009730(int a1, int a2, int a3, int (__thiscall *a4)(int))
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
