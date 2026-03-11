/*
 * func-name: ?set_defaule_type_handler@Context@Message@Outpop@@QAEXAAVMessage_Handler@23@AAVApp_Request_Handler@23@AAVApp_Asynch_Ack_Handler@23@AAVApp_Asynch_Group_Ack_Handler@23@W4EDispatchType@Utility@3@PAVDispatch_Thread@93@@Z
 * func-address: 0x10006c90
 * callers: 0x1000d270
 * callees: 0x10016b80, 0x100295c0
 */

int __thiscall Outpop::Message::Context::set_defaule_type_handler(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  void *v8; // eax
  int result; // eax
  _DWORD *v10; // ecx

  v8 = operator new(0x20u);
  if ( v8 )
    result = sub_10016B80(v8, a2, a4, a5, a6);
  else
    result = 0;
  v10 = (_DWORD *)this[12];
  this[20] = result;
  v10[14] = result;
  v10[16] = 0;
  v10[15] = 0;
  return result;
}
