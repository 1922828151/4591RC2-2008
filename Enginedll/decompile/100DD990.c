/*
 * func-name: ?GetProjection@Light@@QAE?AVMatrix@@XZ
 * func-address: 0x100dd990
 * callers: 0x1001cbe0, 0x101220b0, 0x101282d0
 * callees: 0x10178158
 */

float *__thiscall Light::GetProjection(float *this, float *a2)
{
  float *result; // eax
  float v3; // [esp+18h] [ebp-44h]
  _BYTE v4[64]; // [esp+1Ch] [ebp-40h] BYREF

  v3 = this[285] * 0.01745329300562541;
  ((void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))D3DXMatrixPerspectiveFovLH)(
    v4,
    LODWORD(v3),
    1.0,
    0.1,
    this[284]);
  result = a2;
  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[4] = 0.0;
  a2[5] = 0.0;
  a2[6] = 0.0;
  a2[8] = 0.0;
  a2[9] = 0.0;
  a2[10] = 0.0;
  a2[12] = 0.0;
  a2[13] = 0.0;
  a2[14] = 0.0;
  qmemcpy(a2, v4, 0x40u);
  return result;
}
