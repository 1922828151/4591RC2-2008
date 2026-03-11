/*
 * func-name: ?ResetPass@Establishment@GameClient@@QAEXXZ_0
 * func-address: 0x1011eb90
 * callers: 0x1000fc5e
 * callees: none
 */

void __thiscall GameClient::Establishment::ResetPass(GameClient::Establishment *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 90);
  *((_DWORD *)this + 92) = -1;
  *((_DWORD *)this + 91) = v1;
}
