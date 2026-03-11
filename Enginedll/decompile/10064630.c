/*
 * func-name: ?DeleteDeviceObjects@Canvas@@UAEXXZ
 * func-address: 0x10064630
 * callers: none
 * callees: none
 */

void __thiscall Canvas::DeleteDeviceObjects(Canvas *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 15);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)this + 15) = 0;
  }
}
