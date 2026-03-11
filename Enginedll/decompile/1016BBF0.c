/*
 * func-name: sub_1016BBF0
 * func-address: 0x1016bbf0
 * callers: none
 * callees: 0x10165f10, 0x101a2534
 */

SurfaceNode *__stdcall sub_1016BBF0(struct World *a1)
{
  SurfaceNode *v1; // eax

  v1 = (SurfaceNode *)operator new(0x4B8u);
  if ( v1 )
    return SurfaceNode::SurfaceNode(v1, a1);
  else
    return 0;
}
