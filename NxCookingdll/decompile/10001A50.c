/*
 * func-name: sub_10001A50
 * func-address: 0x10001a50
 * callers: 0x100034a0
 * callees: 0x10001980, 0x100303ae, 0x10034ca4
 */

int __thiscall sub_10001A50(int this)
{
  WSAData WSAData; // [esp+4h] [ebp-194h] BYREF

  sub_10001980((_BYTE *)this);
  *(_DWORD *)this = &meq::SocketWin32::`vftable';
  *(_DWORD *)(this + 36) = &meq::SocketWin32::`vftable';
  *(_DWORD *)(this + 32848) = -1;
  WSAStartup(0x202u, &WSAData);
  *(_BYTE *)(this + 32852) = 0;
  return this;
}
