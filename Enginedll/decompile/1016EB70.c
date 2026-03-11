/*
 * func-name: sub_1016EB70
 * func-address: 0x1016eb70
 * callers: none
 * callees: 0x1016e600, 0x101a2534
 */

TextureCamera *__stdcall sub_1016EB70(struct World *a1)
{
  TextureCamera *v1; // eax

  v1 = (TextureCamera *)operator new(0x1520u);
  if ( v1 )
    return TextureCamera::TextureCamera(v1, a1);
  else
    return 0;
}
