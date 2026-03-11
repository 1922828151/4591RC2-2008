/*
 * func-name: sub_10035F20
 * func-address: 0x10035f20
 * callers: 0x10019f06
 * callees: 0x10001dfc, 0x102c9ea8
 */

float *__thiscall sub_10035F20(float *this, char a2, float a3)
{
  float v4; // ecx
  int v5; // eax
  float *result; // eax
  int v7; // ecx
  int v8; // edx

  v4 = *this;
  this[16] = a3;
  if ( *((_DWORD *)this + 1) != 16 )
  {
    *((_DWORD *)this + 1) = 16;
    this[17] = 0.0;
  }
  *((_BYTE *)this + 116) = a2;
  v5 = sub_10001DFC(*(_DWORD *)(LODWORD(v4) + 292));
  result = (float *)_RTDynamicCast(
                      v5,
                      0,
                      &GameClient::WorldObject `RTTI Type Descriptor',
                      &GameClient::Robot `RTTI Type Descriptor',
                      0);
  if ( result )
  {
    this[31] = result[6];
    this[32] = result[7];
    this[33] = result[8];
    this[32] = 0.0;
    result = (float *)*((_DWORD *)this + 31);
    v7 = *((_DWORD *)this + 32);
    v8 = *((_DWORD *)this + 33);
    *((_DWORD *)this + 13) = result;
    *((_DWORD *)this + 14) = v7;
    *((_DWORD *)this + 15) = v8;
  }
  return result;
}
