/*
 * func-name: sub_10002970
 * func-address: 0x10002970
 * callers: 0x100034f0
 * callees: 0x10001610, 0x100017e0, 0x100019e0
 */

_DWORD *__thiscall sub_10002970(void *this)
{
  int v2; // ecx
  _DWORD *result; // eax

  v2 = *((_DWORD *)this + 8215);
  *(_DWORD *)this = &RemoteDebugger::`vftable';
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  if ( *((_DWORD *)this + 8222) )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *((_DWORD *)this + 8222));
  *((_DWORD *)this + 8222) = 0;
  *((_DWORD *)this + 8223) = 0;
  *((_DWORD *)this + 8224) = 0;
  *((_DWORD *)this + 1) = &meq::SocketWin32::`vftable';
  *((_DWORD *)this + 10) = &meq::SocketWin32::`vftable';
  sub_100017E0((_DWORD *)this + 10);
  (*(void (__thiscall **)(int))(*((_DWORD *)this + 1) + 20))((int)this + 4);
  sub_10001610((char *)this + 32820, byte_10049374);
  *((_DWORD *)this + 8212) = 0;
  result = sub_100019E0((char *)this + 4);
  *(_DWORD *)this = &NxRemoteDebugger::`vftable';
  return result;
}
