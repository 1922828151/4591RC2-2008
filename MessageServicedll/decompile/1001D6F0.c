/*
 * func-name: sub_1001D6F0
 * func-address: 0x1001d6f0
 * callers: 0x10003fa0, 0x1001a760, 0x1001a7e0, 0x1001ab90, 0x1001ac90, 0x1001d600, 0x10020ec0
 * callees: 0x1001e540, 0x100294f2
 */

void __usercall sub_1001D6F0(int a1@<ecx>, int *a2@<esi>)
{
  int v2; // eax

  v2 = a2[1];
  if ( v2 )
  {
    sub_1001E540(v2, a1);
    operator delete((void *)a2[1]);
  }
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
}
