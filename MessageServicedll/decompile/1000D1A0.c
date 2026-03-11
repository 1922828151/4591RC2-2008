/*
 * func-name: ?register_synch_request_ack@Message_Facade@Message@Outpop@@SAXEG@Z
 * func-address: 0x1000d1a0
 * callers: none
 * callees: 0x1001fd80
 */

void __cdecl Outpop::Message::Message_Facade::register_synch_request_ack(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // esi
  int v3; // edx
  _BYTE v4[12]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v5[4]; // [esp+18h] [ebp-10h] BYREF

  v2 = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 17);
  v3 = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 12);
  v5[1] = 0;
  v5[2] = 0;
  v5[0] = a2 + (a1 << 16);
  v5[3] = v2;
  sub_1001FD80(v3 + 4, v4, v5);
}
