/*
 * func-name: ?register_message_handler@Handler_Manager@Message@Outpop@@QAEXEGAAVMessage_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@63@@Z
 * func-address: 0x1001eff0
 * callers: none
 * callees: 0x1001fd80
 */

int __thiscall Outpop::Message::Handler_Manager::register_message_handler(
        char *this,
        unsigned __int8 a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        int a6)
{
  _BYTE v7[12]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v8[4]; // [esp+18h] [ebp-10h] BYREF

  v8[1] = a6;
  v8[2] = a5;
  v8[0] = a3 + (a2 << 16);
  v8[3] = a4;
  return sub_1001FD80(this + 4, v7, v8);
}
