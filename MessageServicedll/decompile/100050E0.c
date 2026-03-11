/*
 * func-name: ??4Remote_Event_Stub@Message@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100050e0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Message::Remote_Event_Stub::operator=(int this, int a2)
{
  int result; // eax

  result = this;
  *(_BYTE *)(this + 4) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(this + 5) = *(_BYTE *)(a2 + 5);
  *(_WORD *)(this + 6) = *(_WORD *)(a2 + 6);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  return result;
}
