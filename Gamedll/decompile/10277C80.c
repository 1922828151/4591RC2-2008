/*
 * func-name: ?MiniWorldMapUIEvent@CMiniWorldMapUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x10277c80
 * callers: 0x1001a163
 * callees: 0x10005105, 0x10009bb0, 0x10011db0, 0x100123fa, 0x102c9ea8
 */

void __stdcall CMiniWorldMapUI::MiniWorldMapUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  CMiniWorldMapUI *v6; // esi

  v6 = (CMiniWorldMapUI *)_RTDynamicCast(
                            a1,
                            0,
                            &CREDialog `RTTI Type Descriptor',
                            &CMiniWorldMapUI `RTTI Type Descriptor');
  if ( v6 && a2 != 24 )
  {
    switch ( a3 )
    {
      case 1:
        goto LABEL_8;
      case 2:
        goto LABEL_7;
      case 3:
        a1 = 0;
        sub_10011DB0(18, (int)&a1);
        if ( a1 )
          CHallMapUI::SetLeftTop(a1, (unsigned __int16)a5, HIWORD(a5));
        return;
      case 4:
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(**((_DWORD **)v6 + 970) + 140))(*((_DWORD **)v6 + 970)) )
LABEL_7:
          CMiniWorldMapUI::Show(v6);
        else
LABEL_8:
          CMiniWorldMapUI::Hide(v6);
        break;
      default:
        return;
    }
  }
}
