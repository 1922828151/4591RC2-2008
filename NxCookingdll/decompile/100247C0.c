/*
 * func-name: NxScaleCookedConvexMesh
 * func-address: 0x100247c0
 * callers: 0x10024ba0
 * callees: 0x1000dbc0, 0x100233a0, 0x100233c0, 0x10023a90, 0x100242e0
 */

bool __cdecl NxScaleCookedConvexMesh(int a1, float a2, int a3)
{
  bool v3; // bl
  float v5[87]; // [esp+8h] [ebp-15Ch] BYREF

  v3 = 0;
  if ( a2 > 0.0 )
  {
    sub_100233A0(v5);
    if ( sub_1000DBC0((int)v5, a1) && sub_10023A90((int)v5, a2) )
      v3 = sub_100242E0((int)v5, a3, 0) != 0;
    sub_100233C0((int *)v5);
  }
  return v3;
}
