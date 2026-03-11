/*
 * func-name: sub_1000E0D0
 * func-address: 0x1000e0d0
 * callers: 0x1000f0d0
 * callees: 0x10006ff0
 */

_DWORD *__stdcall sub_1000E0D0(_DWORD *a1, int a2, _DWORD *a3)
{
  *a1 = &Outpop::IONetwork::Asynch_Result::`vftable';
  a1[6] = 0;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 0;
  *a1 = &Outpop::Message::Post_Add_Acceptor::`vftable';
  a1[7] = a2;
  sub_10006FF0(a3, a1 + 8);
  return a1;
}
