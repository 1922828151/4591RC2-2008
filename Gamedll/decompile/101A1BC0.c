/*
 * func-name: ?SubmitEstabInfo@Establishment@GameClient@@QAEXJJ@Z_0
 * func-address: 0x101a1bc0
 * callers: 0x10012e72
 * callees: none
 */

void __thiscall GameClient::Establishment::SubmitEstabInfo(GameClient::Establishment *this, int a2, int a3)
{
  *((_DWORD *)this + 91) = a2;
  *((_DWORD *)this + 92) = a3;
}
