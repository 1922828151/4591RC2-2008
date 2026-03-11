/*
 * func-name: ??4Acceptor_Config@IONetwork@Outpop@@QAEAAU012@ABU012@@Z
 * func-address: 0x10004480
 * callers: 0x10004bc0, 0x100175c0
 * callees: none
 */

int __thiscall Outpop::IONetwork::Acceptor_Config::operator=(int this, int a2)
{
  qmemcpy((void *)this, (const void *)a2, 0x2Cu);
  std::string::operator=(a2 + 44);
  *(_WORD *)(this + 72) = *(_WORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  *(_BYTE *)(this + 80) = *(_BYTE *)(a2 + 80);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(this + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(this + 100) = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_BYTE *)(this + 112) = *(_BYTE *)(a2 + 112);
  *(_BYTE *)(this + 113) = *(_BYTE *)(a2 + 113);
  *(_WORD *)(this + 114) = *(_WORD *)(a2 + 114);
  return this;
}
