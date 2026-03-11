/*
 * func-name: sub_1000DE20
 * func-address: 0x1000de20
 * callers: 0x10015a50, 0x10015ae0, 0x1001b3d0, 0x1001b470, 0x1001b5c0, 0x1001b740, 0x1001b8f0, 0x10020350, 0x10020b70, 0x10020c80, 0x10020dc0, 0x10020f00, 0x1002c520, 0x1002c5c0, 0x1003c2d0, 0x1003c370, 0x1004e630, 0x1004e6d0
 * callees: none
 */

_DWORD *__stdcall sub_1000DE20(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = &Outpop::IONetwork::Asynch_Result::`vftable';
  a1[6] = 0;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 0;
  *a1 = &Outpop::IONetwork::Asynch_IO_Result::`vftable';
  a1[7] = 0;
  a1[8] = 0;
  return result;
}
