/*
 * func-name: sub_1001A3E0
 * func-address: 0x1001a3e0
 * callers: 0x1000c320
 * callees: none
 */

_DWORD *__fastcall sub_1001A3E0(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *result; // eax

  result = a3;
  *a3 = &Outpop::Message::Message_Handler::`vftable';
  a3[1] = a1;
  a3[2] = a2;
  *a3 = &Outpop::Message::Asych_Group_Ack_Handler::`vftable';
  a3[3] = a4;
  a3[4] = a5;
  return result;
}
