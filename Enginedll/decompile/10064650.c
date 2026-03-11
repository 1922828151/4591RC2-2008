/*
 * func-name: ?InvalidateDeviceObjects@Canvas@@UAEXXZ
 * func-address: 0x10064650
 * callers: none
 * callees: none
 */

void __thiscall Canvas::InvalidateDeviceObjects(Canvas *this)
{
  if ( *((_DWORD *)this + 15) )
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 15) + 72))(*((_DWORD *)this + 15));
}
