/*
 * func-name: sub_10023310
 * func-address: 0x10023310
 * callers: 0x100236d0, 0x10023e50
 * callees: 0x1000d700, 0x1001e1d0, 0x1001e3c0, 0x1001e400
 */

char __fastcall sub_10023310(int a1, int a2, int a3, int a4)
{
  int v5[4]; // [esp+0h] [ebp-24h] BYREF
  _DWORD v6[5]; // [esp+10h] [ebp-14h] BYREF

  v5[2] = a4;
  v5[1] = a1;
  v5[0] = a3;
  v5[3] = 257;
  sub_1001E1D0(v6, a2);
  if ( sub_1001E400(v6, (int)v5) )
  {
    sub_1001E3C0(v6);
    return 1;
  }
  else
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
      53,
      0,
      "createHull: convex hull computation failed!",
      v5[0]);
    sub_1001E3C0(v6);
    return 0;
  }
}
