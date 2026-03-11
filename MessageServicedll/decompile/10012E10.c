/*
 * func-name: sub_10012E10
 * func-address: 0x10012e10
 * callers: 0x10015330
 * callees: 0x10007170, 0x10007360
 */

_DWORD *__stdcall sub_10012E10(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  *a1 = &Outpop::IONetwork::Asynch_Result::`vftable';
  a1[6] = 0;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 0;
  *a1 = &Outpop::Message::Post_Connector::`vftable';
  a1[7] = a2;
  sub_10007360(a3, (int)(a1 + 8));
  sub_10007170(a4, a1 + 12);
  return a1;
}
