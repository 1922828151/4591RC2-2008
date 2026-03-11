/*
 * func-name: sub_100D1D50
 * func-address: 0x100d1d50
 * callers: 0x1001a523
 * callees: 0x10003d96, 0x100094d0, 0x1000c554, 0x102c9d98
 */

int __thiscall sub_100D1D50(void *this, char a2, float a3, float a4, int a5)
{
  float *v6; // esi

  v6 = (float *)operator new(0xCCu);
  if ( v6 )
  {
    sub_10003D96();
    v6[48] = 1.0;
    *(_DWORD *)v6 = &NxPedrailVehicleWheel::`vftable';
    *((_BYTE *)v6 + 188) = 1;
    v6[50] = 0.0;
  }
  else
  {
    v6 = 0;
  }
  v6[48] = a3;
  v6[49] = a4;
  *((_BYTE *)v6 + 188) = a2;
  if ( (unsigned __int8)sub_100094D0((int)this, a5) )
    return sub_1000C554((int)v6);
  else
    return -1;
}
