/*
 * func-name: ?OnPropertyChange@CREButton@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100bc020
 * callers: none
 * callees: 0x100a3360, 0x100bb130
 */

void __thiscall CREButton::OnPropertyChange(int *this, int a2)
{
  if ( !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "NormalPicName", 13)
    || !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "NormalPicRect", 13) )
  {
    CREControl::SetCustomPic((int)this, (int)(this + 45), this + 94, 0);
  }
  else if ( !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "ClickPicName", 12)
         || !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "ClickPicRect", 12) )
  {
    CREControl::SetCustomPic((int)this, (int)(this + 80), this + 114, 5u);
  }
  else if ( !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "FocusedPicName", 14)
         || !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "FocusedPicRect", 14) )
  {
    CREControl::SetCustomPic((int)this, (int)(this + 66), this + 106, 3u);
  }
  else if ( !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "MouseOverPicName", 16)
         || !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "MouseOverPicRect", 16) )
  {
    CREControl::SetCustomPic((int)this, (int)(this + 73), this + 110, 4u);
  }
  else if ( !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "DisabledPicName", 15)
         || !std::string::compare(a2, 0, *(_DWORD *)(a2 + 20), "DisabledPicRect", 15) )
  {
    CREControl::SetCustomPic((int)this, (int)(this + 52), this + 98, 1u);
  }
  else
  {
    CREStatic::OnPropertyChange(this, a2);
  }
}
