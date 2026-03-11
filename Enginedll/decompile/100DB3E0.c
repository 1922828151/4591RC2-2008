/*
 * func-name: ?SetMask@Input@@QAEXHW4InputMaskState@@@Z
 * func-address: 0x100db3e0
 * callers: none
 * callees: none
 */

int __thiscall Input::SetMask(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( a2 != -1 )
    this[a2 + 430] = a3;
  return result;
}
