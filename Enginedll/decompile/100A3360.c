/*
 * func-name: ?OnPropertyChange@CREStatic@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100a3360
 * callers: 0x100bc020
 * callees: 0x100a31e0
 */

int __thiscall CREStatic::OnPropertyChange(_DWORD *this, int a2)
{
  _DWORD *v4; // eax

  if ( (unsigned __int8)std::operator==<char>(a2, "NormalTextColor") )
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*this + 180))(this, 0, this[163], 0);
  if ( (unsigned __int8)std::operator==<char>(a2, "NormalFontName")
    || (unsigned __int8)std::operator==<char>(a2, "NormalFontSize")
    || (unsigned __int8)std::operator==<char>(a2, "NormalFontBold") )
  {
    if ( this[170] < 8u )
      v4 = this + 165;
    else
      v4 = (_DWORD *)this[165];
    return (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD))(*this + 168))(
             this,
             v4,
             this[171],
             *((unsigned __int8 *)this + 688));
  }
  else if ( (unsigned __int8)std::operator==<char>(a2, "NormalTextFormat") )
  {
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, this[173]);
  }
  else
  {
    return CREControl::OnPropertyChange(this, a2);
  }
}
