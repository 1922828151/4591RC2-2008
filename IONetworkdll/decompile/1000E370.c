/*
 * func-name: ??4Stream_Channel@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x1000e370
 * callers: none
 * callees: 0x100054f0, 0x100148c0
 */

int __thiscall Outpop::IONetwork::Stream_Channel::operator=(int this, int a2)
{
  Outpop::IONetwork::Channel::operator=((_DWORD *)this, (_DWORD *)a2);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(this + 184) = *(_DWORD *)(a2 + 184);
  *(_DWORD *)(this + 188) = *(_DWORD *)(a2 + 188);
  *(_BYTE *)(this + 192) = *(_BYTE *)(a2 + 192);
  *(_BYTE *)(this + 193) = *(_BYTE *)(a2 + 193);
  *(_DWORD *)(this + 196) = *(_DWORD *)(a2 + 196);
  *(_BYTE *)(this + 200) = *(_BYTE *)(a2 + 200);
  *(_BYTE *)(this + 201) = *(_BYTE *)(a2 + 201);
  *(_DWORD *)(this + 204) = *(_DWORD *)(a2 + 204);
  *(_BYTE *)(this + 208) = *(_BYTE *)(a2 + 208);
  *(_BYTE *)(this + 209) = *(_BYTE *)(a2 + 209);
  sub_100148C0(this + 212);
  *(_DWORD *)(this + 228) = *(_DWORD *)(a2 + 228);
  return this;
}
