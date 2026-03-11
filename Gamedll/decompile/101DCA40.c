/*
 * func-name: sub_101DCA40
 * func-address: 0x101dca40
 * callers: 0x100100af
 * callees: 0x1000a1c3, 0x1001ab18
 */

int __stdcall sub_101DCA40(int a1)
{
  sub_1000A1C3(a1);
  return sub_1001AB18(*(float *)&a1);
}
