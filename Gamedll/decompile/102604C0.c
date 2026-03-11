/*
 * func-name: sub_102604C0
 * func-address: 0x102604c0
 * callers: 0x1000a957
 * callees: 0x100162ac
 */

int __thiscall sub_102604C0(_DWORD *this)
{
  int result; // eax

  result = this[133];
  if ( result )
  {
    result = *(_DWORD *)(result + 600);
    if ( result != this[134] )
      return sub_100162AC(0, result);
  }
  return result;
}
