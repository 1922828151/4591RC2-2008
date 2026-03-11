/*
 * func-name: ?GetViewProjection@Light@@QAE?AVMatrix@@XZ
 * func-address: 0x1001cbe0
 * callers: none
 * callees: 0x1001cb70, 0x100dd990, 0x100ddae0
 */

float *__thiscall Light::GetViewProjection(void *this, float *a2)
{
  void *View; // eax
  int Projection; // [esp-4h] [ebp-8Ch]
  _BYTE v6[64]; // [esp+8h] [ebp-80h] BYREF
  _BYTE v7[64]; // [esp+48h] [ebp-40h] BYREF

  Projection = Light::GetProjection(v6);
  View = (void *)Light::GetView(this, v7);
  sub_1001CB70(View, a2, Projection);
  return a2;
}
