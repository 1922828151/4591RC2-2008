/*
 * func-name: ?GetVertexCodeReduce@TerrainNode@@SAHHH@Z
 * func-address: 0x1015d430
 * callers: none
 * callees: none
 */

int __cdecl TerrainNode::GetVertexCodeReduce(int a1, int a2)
{
  if ( a1 < 0 || a2 < 0 || a1 > 64 || a2 > 64 || (a1 & 0x80000001) != 0 || (a2 & 0x80000001) != 0 )
    return -1;
  else
    return 33 * (a2 / 2) + a1 / 2;
}
