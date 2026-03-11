/*
 * func-name: sub_1016BB80
 * func-address: 0x1016bb80
 * callers: none
 * callees: 0x101655b0, 0x101a2534
 */

TerrainNode *__stdcall sub_1016BB80(struct World *a1)
{
  TerrainNode *v1; // eax

  v1 = (TerrainNode *)operator new(0x4F4u);
  if ( v1 )
    return TerrainNode::TerrainNode(v1, a1);
  else
    return 0;
}
