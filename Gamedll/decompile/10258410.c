/*
 * func-name: ?ChatInputUIEvent@CChatInputUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x10258410
 * callers: 0x10018d8b
 * callees: 0x10005245, 0x100055d3, 0x1000632f, 0x1000c8ba, 0x102c9ea8
 */

void __stdcall CChatInputUI::ChatInputUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  struct CREControl **v6; // eax
  struct CREControl **v7; // ebx
  unsigned int i; // edi
  struct CREControl *v9; // eax
  int *v10; // eax

  v6 = (struct CREControl **)_RTDynamicCast(
                               a1,
                               0,
                               &CREDialog `RTTI Type Descriptor',
                               &CChatInputUI `RTTI Type Descriptor');
  v7 = v6;
  if ( v6 )
  {
    if ( a2 == 24 )
    {
      if ( a5 )
        CREDialog::RequestFocus((CREDialog *)v6, v6[969]);
      else
        CChatInputUI::SendText((CChatInputUI *)v6);
    }
    else if ( a3 == 1 )
    {
      CChatInputUI::ShowChannelList((CChatInputUI *)v6, 1);
    }
    else if ( a4 && *((_DWORD *)a4 + 35) == 1 )
    {
      CChatInputUI::ShowChannelList((CChatInputUI *)v6, 0);
      for ( i = 0; ; ++i )
      {
        v9 = v7[972];
        if ( !v9 || i >= (v7[973] - v9) / 36 )
          break;
        if ( *(struct CREControl **)(sub_100055D3(i) + 32) == a4 )
        {
          v10 = (int *)sub_100055D3(i);
          CChatInputUI::SetChannel(*v10);
          CREDialog::RequestFocus((CREDialog *)v7, v7[969]);
          return;
        }
      }
    }
  }
}
