/*
 * func-name: sub_10024030
 * func-address: 0x10024030
 * callers: 0x100242e0
 * callees: 0x10005800, 0x1000d700, 0x100232e0, 0x10035665
 */

float *__thiscall sub_10024030(int this)
{
  float *v2; // ebx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  double v7; // st7
  int v8; // [esp+8h] [ebp-100h]
  int v9[7]; // [esp+44h] [ebp-C4h] BYREF
  int v10[4]; // [esp+60h] [ebp-A8h] BYREF
  double X; // [esp+70h] [ebp-98h]

  v2 = (float *)(this + 292);
  if ( *(float *)(this + 292) < 0.0 )
  {
    v3 = *(_DWORD *)(this + 168);
    v4 = *(_DWORD *)(this + 172);
    v9[1] = *(_DWORD *)(this + 160);
    v9[0] = v3;
    v9[4] = v4;
    v9[2] = 12;
    v9[3] = 12;
    v5 = *(_DWORD *)(this + 164);
    v9[6] = 0;
    v9[5] = v5;
    if ( !sub_10005800(v9, 1.0, (int)v10) )
      return 0;
    sub_100232E0((char *)v10, this + 296);
    *(float *)(this + 332) = *(float *)v10;
    *(float *)(this + 336) = *(float *)&v10[1];
    *(float *)(this + 340) = *(float *)&v10[2];
    if ( (_fpclass(*(float *)(this + 296)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 300)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 304)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 308)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 312)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 316)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 320)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 324)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 328)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 332)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 336)) & 0x207) != 0
      || (_fpclass(*(float *)(this + 340)) & 0x207) != 0
      || (_fpclass(X) & 0x207) != 0 )
    {
      return 0;
    }
    v7 = X;
    if ( X < 0.0 )
    {
      sub_1000D700(
        206,
        (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
        417,
        0,
        "ConvexMesh: Mesh has a negative volume! Is it open or do (some) faces have reversed winding? (Taking absolute value.)",
        v8);
      v7 = -X;
      *(float *)(this + 296) = -*(float *)(this + 296);
      *(float *)(this + 300) = -*(float *)(this + 300);
      *(float *)(this + 304) = -*(float *)(this + 304);
      *(float *)(this + 308) = -*(float *)(this + 308);
      *(float *)(this + 312) = -*(float *)(this + 312);
      *(float *)(this + 316) = -*(float *)(this + 316);
      *(float *)(this + 320) = -*(float *)(this + 320);
      *(float *)(this + 324) = -*(float *)(this + 324);
      *(float *)(this + 328) = -*(float *)(this + 328);
    }
    *v2 = v7;
  }
  return v2;
}
