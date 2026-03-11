/*
 * func-name: ?Hide@Establishment@GameClient@@QAEXXZ_0
 * func-address: 0x101a1cb0
 * callers: 0x1000ee62
 * callees: none
 */

void __thiscall GameClient::Establishment::Hide(GameClient::Establishment *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 75);
  if ( v1 )
    *(_BYTE *)(v1 + 816) = 1;
  (*(void (__thiscall **)(GameClient::Establishment *, _DWORD))(*(_DWORD *)this + 156))(this, 0);
}
