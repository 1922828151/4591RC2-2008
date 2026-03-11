/*
 * func-name: sub_100D7350
 * func-address: 0x100d7350
 * callers: 0x1001a19f
 * callees: 0x10003d96, 0x100094d0, 0x1000c554, 0x102c9d98
 */

int __thiscall sub_100D7350(void *this, int a2)
{
  _DWORD *v3; // esi

  v3 = operator new(0xBCu);
  if ( v3 )
  {
    sub_10003D96();
    *v3 = &NxSuspendVehicleWheel::`vftable';
  }
  else
  {
    v3 = 0;
  }
  if ( (unsigned __int8)sub_100094D0((int)this, a2) )
    return sub_1000C554((int)v3);
  if ( v3 )
    (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1);
  return -1;
}
