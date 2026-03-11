/*
 * func-name: sub_1001E350
 * func-address: 0x1001e350
 * callers: 0x100242e0
 * callees: 0x100162c0, 0x1001e290, 0x10022c20, 0x10024570, 0x100302d0
 */

bool __thiscall sub_1001E350(_DWORD *this, int a2)
{
  char v3; // al

  v3 = NxPlatformMismatch();
  if ( !sub_100162C0(67, 76, 72, 76, 0, v3, a2) || !(unsigned __int8)sub_10022C20(a2) )
    return 0;
  if ( !this[4] )
    sub_1001E290(this);
  return (unsigned __int8)sub_100302D0(a2) != 0;
}
