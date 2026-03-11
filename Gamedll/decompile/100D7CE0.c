/*
 * func-name: sub_100D7CE0
 * func-address: 0x100d7ce0
 * callers: 0x100126c5
 * callees: 0x10003d96, 0x100094d0, 0x1000c554, 0x102c9d98
 */

int __thiscall sub_100D7CE0(void *this, float a2, char a3, int a4)
{
  float *v5; // esi

  v5 = (float *)operator new(0xCCu);
  if ( v5 )
  {
    sub_10003D96();
    v5[47] = 90.0;
    *(_DWORD *)v5 = &NxWheelVehicleWheel::`vftable';
    v5[49] = 0.0;
    v5[50] = 0.0;
  }
  else
  {
    v5 = 0;
  }
  v5[47] = a2;
  *((_BYTE *)v5 + 192) = a3;
  if ( (unsigned __int8)sub_100094D0((int)this, a4) )
    return sub_1000C554((int)v5);
  else
    return -1;
}
