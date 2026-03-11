/*
 * func-name: sub_1014FA80
 * func-address: 0x1014fa80
 * callers: 0x1014fe10, 0x101526a0, 0x10152870, 0x10152c10, 0x10153240
 * callees: none
 */

int __thiscall sub_1014FA80(int this)
{
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 24) = 0;
  std::wstring::wstring((void *)(this + 28));
  std::wstring::wstring((void *)(this + 76));
  *(_BYTE *)(this + 104) = 0;
  *(_DWORD *)(this + 72) = -1;
  return this;
}
