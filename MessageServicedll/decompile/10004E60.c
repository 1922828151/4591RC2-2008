/*
 * func-name: ??4Remote_Event_Proxy@Message@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10004e60
 * callers: none
 * callees: 0x100090e0, 0x10009320
 */

int __thiscall Outpop::Message::Remote_Event_Proxy::operator=(int this, int a2)
{
  int v3; // ecx

  if ( a2 )
    v3 = a2 + 4;
  else
    v3 = 0;
  if ( this + 4 != v3 )
    *(_DWORD *)(this + 8) = 0;
  *(_BYTE *)(this + 12) = *(_BYTE *)(a2 + 12);
  *(_WORD *)(this + 14) = *(_WORD *)(a2 + 14);
  if ( this + 16 != a2 + 16 )
    sub_100090E0(this + 16, a2 + 16);
  if ( this + 56 != a2 + 56 )
    sub_10009320(this + 56, a2 + 56);
  *(_DWORD *)(this + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(this + 100) = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  return this;
}
