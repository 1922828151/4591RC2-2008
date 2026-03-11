/*
 * func-name: ?register_asynch_message_handler@Message_Facade@Message@Outpop@@SAXEGAAVMessage_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@63@@Z
 * func-address: 0x1000cee0
 * callers: none
 * callees: 0x1001fd80
 */

int __cdecl Outpop::Message::Message_Facade::register_asynch_message_handler(
        unsigned __int8 a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        int a5)
{
  int v5; // eax
  int v7; // ecx
  _BYTE v8[12]; // [esp+Ch] [ebp-1Ch] BYREF
  int v9; // [esp+18h] [ebp-10h] BYREF
  int v10; // [esp+1Ch] [ebp-Ch]
  int v11; // [esp+20h] [ebp-8h]
  int v12; // [esp+24h] [ebp-4h]

  if ( a5 )
  {
    v12 = a3;
    v11 = a4;
    v7 = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 12);
    v10 = a5;
    v9 = a2 + (a1 << 16);
    return sub_1001FD80(v7 + 4, v8, &v9);
  }
  else
  {
    v5 = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 12);
    v10 = *((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 15);
    v11 = a4;
    v9 = a2 + (a1 << 16);
    v12 = a3;
    return sub_1001FD80(v5 + 4, v8, &v9);
  }
}
