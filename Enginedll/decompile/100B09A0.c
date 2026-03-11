/*
 * func-name: ?OnPropertyChange@CRESlider@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100b09a0
 * callers: none
 * callees: 0x1006a920, 0x100a31e0, 0x100aac90
 */

void __thiscall CRESlider::OnPropertyChange(CRESlider *this, int a2)
{
  if ( (unsigned __int8)std::operator==<char>(a2, "Min") || (unsigned __int8)std::operator==<char>(a2, "Max") )
  {
    CRESlider::SetRange(this, *((_DWORD *)this + 135), *((_DWORD *)this + 136));
  }
  else if ( (unsigned __int8)std::operator==<char>(a2, "Value") )
  {
    CRESlider::SetValue(this, *((_DWORD *)this + 134));
  }
  else
  {
    CREControl::OnPropertyChange(this, a2);
  }
}
