/*
 * func-name: ?LoginUIEvent@CLoginUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x10276d40
 * callers: 0x1001409c
 * callees: 0x10002856, 0x1000e17e, 0x102c9ea8
 */

void __stdcall CLoginUI::LoginUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  CLoginUI *v6; // ecx
  int v7; // eax
  UINT v8; // [esp-Ch] [ebp-Ch]

  v6 = (CLoginUI *)_RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CLoginUI `RTTI Type Descriptor');
  if ( v6 )
  {
    if ( a2 == 24 )
    {
      if ( a5 )
        CLoginUI::RefreshStatus(v6);
    }
    else
    {
      switch ( a3 )
      {
        case 1:
        case 2:
          if ( a2 == 1537 )
            goto LABEL_8;
          break;
        case 3:
LABEL_8:
          CLoginUI::Login(v6);
          break;
        case 11:
          v7 = Engine::Instance(274);
          SendMessageA(*(HWND *)(v7 + 140), v8, 0xF060u, 0);
          break;
        default:
          return;
      }
    }
  }
}
