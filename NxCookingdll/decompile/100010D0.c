/*
 * func-name: sub_100010D0
 * func-address: 0x100010d0
 * callers: none
 * callees: none
 */

int __stdcall sub_100010D0(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    dword_10056004 = a1;
    byte_10056008 = 0;
  }
  else
  {
    byte_10056008 = 1;
  }
  return result;
}
