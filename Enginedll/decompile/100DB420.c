/*
 * func-name: ?SetMaskAll@Input@@QAEXW4InputMaskState@@@Z
 * func-address: 0x100db420
 * callers: none
 * callees: none
 */

int __thiscall Input::SetMaskAll(int this, int a2)
{
  int result; // eax

  result = a2;
  memset32((void *)(this + 1720), a2, 0x400u);
  return result;
}
