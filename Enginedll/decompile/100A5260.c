/*
 * func-name: ?PumpMessage@CREIMEEditBox@@QAEXXZ
 * func-address: 0x100a5260
 * callers: none
 * callees: none
 */

void __thiscall CREIMEEditBox::PumpMessage(CREIMEEditBox *this)
{
  tagMSG Msg; // [esp+4h] [ebp-1Ch] BYREF

  if ( PeekMessageW(&Msg, 0, 0, 0, 0) )
  {
    while ( GetMessageW(&Msg, 0, 0, 0) )
    {
      TranslateMessage(&Msg);
      DispatchMessageA(&Msg);
      if ( !PeekMessageW(&Msg, 0, 0, 0, 0) )
        return;
    }
    PostQuitMessage(Msg.wParam);
  }
}
