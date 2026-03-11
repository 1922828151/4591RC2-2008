/*
 * func-name: ?GetVertexCodeComplete@TerrainNode@@SAHHH@Z
 * func-address: 0x1015d490
 * callers: 0x1015d580, 0x1015edf0, 0x10162160
 * callees: none
 */

int __cdecl TerrainNode::GetVertexCodeComplete(int a1, int a2)
{
  int v3; // esi

  if ( a1 < 0
    || a2 < 0
    || a1 > 64
    || a2 > 64
    || !a2 && (a1 & 0x80000001) != 0
    || !a1 && (a2 & 0x80000001) != 0
    || a2 == 64 && (a1 & 0x80000001) != 0
    || a1 == 64 && (a2 & 0x80000001) != 0 )
  {
    return -1;
  }
  if ( !a2 )
    return a1 / 2;
  v3 = 63 * (a2 / 2) + 65 * ((a2 - 1) / 2) + 33;
  if ( a2 == 64 )
    return a1 / 2 + v3;
  if ( (a2 - 1) % 2 )
    return a1 + v3;
  return v3 + a1 - 1;
}
