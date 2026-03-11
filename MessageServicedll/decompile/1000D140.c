/*
 * func-name: ?register_synch_group_request_ack@Message_Facade@Message@Outpop@@SAXEG@Z
 * func-address: 0x1000d140
 * callers: none
 * callees: 0x1001fd80
 */

void __cdecl Outpop::Message::Message_Facade::register_synch_group_request_ack(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // edx
  _BYTE v3[12]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v4[4]; // [esp+18h] [ebp-10h] BYREF

  v4[3] = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 19) + 136;
  v4[2] = 0;
  v2 = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 12);
  v4[1] = 0;
  v4[0] = a2 + (a1 << 16);
  sub_1001FD80(v2 + 4, v3, v4);
}
