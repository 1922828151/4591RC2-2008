/*
 * func-name: sub_10010270
 * func-address: 0x10010270
 * callers: 0x10012080
 * callees: 0x10007360
 */

_DWORD *__stdcall sub_10010270(_DWORD *a1, int a2, _DWORD *a3)
{
  *a1 = &Outpop::IONetwork::Asynch_Result::`vftable';
  a1[6] = 0;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 0;
  *a1 = &Outpop::Message::Post_Start_Channel::`vftable';
  a1[7] = a2;
  sub_10007360(a3, (int)(a1 + 8));
  return a1;
}
