/*
 * func-name: sub_10024740
 * func-address: 0x10024740
 * callers: 0x10022fa0, 0x10023100, 0x10046710
 * callees: 0x10049ff0, 0x1004e870
 */

int __stdcall sub_10024740(_DWORD *a1)
{
  if ( a1[5] )
    operator delete(a1[5]);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  return sub_10049FF0();
}
