/*
 * func-name: sub_10023940
 * func-address: 0x10023940
 * callers: 0x10027030
 * callees: 0x1001d730
 */

_DWORD *__stdcall sub_10023940(_DWORD *a1, int a2, _DWORD *a3)
{
  *a1 = &Outpop::IONetwork::Asynch_Result::`vftable';
  a1[6] = 0;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 0;
  *a1 = &Outpop::Message::Post_Asynch_Request::`vftable';
  a1[7] = a2;
  sub_1001D730(a3, a1 + 8);
  return a1;
}
