/*
 * func-name: ?InitComponent@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027a750
 * callers: 0x1000bb90
 * callees: 0x1000f790, 0x102c9d98
 */

void __thiscall CRadarMapUI::InitComponent(CRadarMapUI *this)
{
  int v2; // eax

  if ( operator new(0x2A0u) )
    v2 = sub_1000F790((int)this);
  else
    v2 = 0;
  *((_DWORD *)this + 974) = v2;
  *(_DWORD *)(v2 + 136) = 2;
  *(_DWORD *)(*((_DWORD *)this + 974) + 524) = 2;
  *(_BYTE *)(*((_DWORD *)this + 974) + 627) = 1;
  CREDialog::AddControl(this, *((struct CREControl **)this + 974));
  CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this + 974), 7, 1);
  CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this + 974), 9, 1);
}
