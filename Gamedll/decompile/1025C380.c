/*
 * func-name: sub_1025C380
 * func-address: 0x1025c380
 * callers: 0x100060b9
 * callees: none
 */

int __thiscall sub_1025C380(int this)
{
  int v2; // eax
  int result; // eax
  _DWORD v4[13]; // [esp-Ch] [ebp-34h] BYREF

  *(_DWORD *)(this + 692) = 0;
  *(_DWORD *)(this + 696) = 0;
  CTYDialog::MoveNestedDialog((CTYDialog *)this);
  v4[9] = v4;
  *(_BYTE *)(this + 85) = 1;
  *(_DWORD *)(this + 88) = 14;
  *(_DWORD *)(this + 736) = sub_1000FAF1;
  std::string::string(v4, "guiclick");
  v4[12] = 0;
  v2 = Input::Instance(v4[0]);
  result = Input::GetControlHandle(v2);
  *(_DWORD *)(this + 3916) = result;
  return result;
}
