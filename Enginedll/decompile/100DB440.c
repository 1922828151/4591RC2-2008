/*
 * func-name: ?SetMaskMouse@Input@@QAEXW4InputMaskState@@@Z
 * func-address: 0x100db440
 * callers: none
 * callees: none
 */

int __thiscall Input::SetMaskMouse(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[1454] = a2;
  this[830] = a2;
  this[831] = a2;
  this[832] = a2;
  this[833] = a2;
  this[1030] = a2;
  this[1031] = a2;
  return result;
}
