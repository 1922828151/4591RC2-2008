/*
 * func-name: sub_1001A760
 * func-address: 0x1001a760
 * callers: 0x1001bd30
 * callees: 0x1001d600
 */

_DWORD *__stdcall sub_1001A760(_DWORD *a1, int a2, int a3)
{
  *a1 = &Outpop::IONetwork::Asynch_Result::`vftable';
  a1[6] = 0;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 0;
  *a1 = &Outpop::Message::Post_Asynch_Group_Send::`vftable';
  a1[7] = a2;
  sub_1001D600(a1 + 8);
  return a1;
}
