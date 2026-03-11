/*
 * func-name: sub_1002F9D0
 * func-address: 0x1002f9d0
 * callers: 0x1002fc50
 * callees: 0x10005800, 0x100232e0, 0x10035665
 */

float *__thiscall sub_1002F9D0(int this)
{
  float *v2; // ebx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  double v7; // st7
  int v8[7]; // [esp+44h] [ebp-C4h] BYREF
  int v9[4]; // [esp+60h] [ebp-A8h] BYREF
  double X; // [esp+70h] [ebp-98h]

  v2 = (float *)(this + 208);
  if ( *(float *)(this + 208) < 0.0 )
  {
    v3 = *(_DWORD *)(this + 4);
    v4 = *(_DWORD *)(this + 12);
    v8[1] = *(_DWORD *)(this + 8);
    v8[0] = v3;
    v8[4] = v4;
    v8[2] = 12;
    v8[3] = 12;
    v5 = *(_DWORD *)(this + 16);
    v8[6] = 0;
    v8[5] = v5;
    if ( !sub_10005800(v8, 1.0, (int)v9) )
      return 0;
    sub_100232E0((char *)v9, this + 212);
    *(float *)(this + 248) = *(float *)v9;
    *(float *)(this + 252) = *(float *)&v9[1];
    *(float *)(this + 256) = *(float *)&v9[2];
    if ( (_fpclass(*(float *)(this + 212)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 216)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 220)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 224)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 228)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 232)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 236)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 240)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 244)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 248)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 252)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 256)) & 0x207) != 0
      || (_fpclass(X) & 0x207) != 0 )
    {
      return 0;
    }
    v7 = X;
    if ( X < 0.0 )
    {
      v7 = -X;
      *(float *)(this + 212) = -*(float *)(this + 212);
      *(float *)(this + 216) = -*(float *)(this + 216);
      *(float *)(this + 220) = -*(float *)(this + 220);
      *(float *)(this + 224) = -*(float *)(this + 224);
      *(float *)(this + 228) = -*(float *)(this + 228);
      *(float *)(this + 232) = -*(float *)(this + 232);
      *(float *)(this + 236) = -*(float *)(this + 236);
      *(float *)(this + 240) = -*(float *)(this + 240);
      *(float *)(this + 244) = -*(float *)(this + 244);
    }
    *v2 = v7;
  }
  return v2;
}
