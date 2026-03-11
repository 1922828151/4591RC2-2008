/*
 * func-name: sub_1005FA40
 * func-address: 0x1005fa40
 * callers: 0x1005fd50
 * callees: 0x101a26c0
 */

bool __usercall sub_1005FA40@<al>(float *a1@<eax>, float *a2@<edi>, float *a3@<esi>)
{
  return (int)(*a1 / *a3) == (int)(*a2 / *a3)
      && (int)(a1[1] / a3[1]) == (int)(a2[1] / a3[1])
      && (int)(a1[2] / a3[2]) == (int)(a2[2] / a3[2]);
}
