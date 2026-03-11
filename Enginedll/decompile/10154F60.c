/*
 * func-name: ?OnPropertyChange@CPaster@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10154f60
 * callers: none
 * callees: 0x100a31e0, 0x10151200, 0x10151350, 0x101514a0
 */

int __thiscall CPaster::OnPropertyChange(_DWORD *this, int a2)
{
  if ( (unsigned __int8)std::operator==<char>(a2, "FirstPicFileName")
    || (unsigned __int8)std::operator==<char>(a2, "FirstPicRect") )
  {
    return CPaster::SetFirstPic((int)this, this + 137, this + 144);
  }
  if ( (unsigned __int8)std::operator==<char>(a2, "LastPicFileName")
    || (unsigned __int8)std::operator==<char>(a2, "LastPicRect") )
  {
    return CPaster::SetLastPic((int)this, this + 148, this + 155);
  }
  if ( (unsigned __int8)std::operator==<char>(a2, "MiddlePicFileName")
    || (unsigned __int8)std::operator==<char>(a2, "MiddlePicRect") )
  {
    return CPaster::SetMiddlePic((int)this, this + 159, this + 166);
  }
  return CREControl::OnPropertyChange(this, a2);
}
