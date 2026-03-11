/*
 * func-name: ?OnPropertyChange@CREControl@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100a31e0
 * callers: 0x100a3360, 0x100b09a0, 0x100bfdc0, 0x10154f60
 * callees: none
 */

int __thiscall CREControl::OnPropertyChange(void *this, int a2)
{
  int result; // eax

  if ( (unsigned __int8)std::operator==<char>(a2, "Width") )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 164))(this);
  if ( (unsigned __int8)std::operator==<char>(a2, "Height") )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 164))(this);
  if ( (unsigned __int8)std::operator==<char>(a2, "PosX") )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 164))(this);
  result = std::operator==<char>(a2, "PosY");
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 164))(this);
  return result;
}
