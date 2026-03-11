/*
 * func-name: ?OnPropertyChange@CTYDialog@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100c2130
 * callers: none
 * callees: 0x100af0a0, 0x100baf70
 */

void __thiscall CTYDialog::OnPropertyChange(CTYDialog *this, int a2)
{
  if ( (unsigned __int8)std::operator==<char>(a2, "PosX") || (unsigned __int8)std::operator==<char>(a2, "PosY") )
  {
    CTYDialog::MoveNestedDialog(this);
  }
  else if ( (unsigned __int8)std::operator==<char>(a2, "BackGroundFile")
         || (unsigned __int8)std::operator==<char>(a2, "BackGroundFileRect") )
  {
    CREDialog::SetBackGroundPic((char *)this, (int)this + 104, (_DWORD *)this + 33);
  }
}
