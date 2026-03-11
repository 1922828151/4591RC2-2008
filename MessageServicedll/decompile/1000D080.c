/*
 * func-name: ?register_asynch_group_ack@Message_Facade@Message@Outpop@@SAXEGAAVApp_Asynch_Group_Ack_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@63@@Z
 * func-address: 0x1000d080
 * callers: none
 * callees: 0x1000c320, 0x1001fd80
 */

int __cdecl Outpop::Message::Message_Facade::register_asynch_group_ack(
        unsigned __int8 a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        int a5)
{
  int v5; // esi
  _BYTE v7[4]; // [esp+Ch] [ebp-1Ch] BYREF
  int v8; // [esp+10h] [ebp-18h]
  _DWORD v9[2]; // [esp+18h] [ebp-10h] BYREF
  int v10; // [esp+20h] [ebp-8h]
  int v11; // [esp+24h] [ebp-4h]

  v5 = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 12);
  v8 = 0;
  if ( a5 )
  {
    v11 = sub_1000C320(a3, a4, a5);
    v9[0] = a2 + (a1 << 16);
    v10 = v8;
  }
  else
  {
    v11 = sub_1000C320(a3, a4, *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 15));
    v9[0] = a2 + (a1 << 16);
    v10 = 0;
  }
  v9[1] = 0;
  return sub_1001FD80(v5 + 4, v7, v9);
}
