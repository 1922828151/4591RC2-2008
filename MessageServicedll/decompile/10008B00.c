/*
 * func-name: sub_10008B00
 * func-address: 0x10008b00
 * callers: 0x10003bf0, 0x10007170, 0x10012e10, 0x10012ea0, 0x100131c0, 0x10013290
 * callees: 0x1000b210, 0x100294f2
 */

void __usercall sub_10008B00(int a1@<ecx>, int *a2@<esi>)
{
  int v2; // eax

  v2 = a2[1];
  if ( v2 )
  {
    sub_1000B210(v2, a1);
    operator delete((void *)a2[1]);
  }
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
}
