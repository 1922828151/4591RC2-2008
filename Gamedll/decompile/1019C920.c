/*
 * func-name: ?GetCurrentVelocity@ControlledEstab@GameClient@@UAE?AVVector@@XZ_0
 * func-address: 0x1019c920
 * callers: 0x10012058
 * callees: none
 */

float *__thiscall GameClient::ControlledEstab::GetCurrentVelocity(_DWORD *this, float *a2)
{
  int v2; // eax
  int v3; // eax
  float *result; // eax
  _BYTE v5[12]; // [esp+0h] [ebp-Ch] BYREF

  v2 = this[114];
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v2 + 4) + 232))(*(_DWORD *)(v2 + 4), v5);
    NxHelper::ToVector(a2, v3);
    return a2;
  }
  else
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  return result;
}
