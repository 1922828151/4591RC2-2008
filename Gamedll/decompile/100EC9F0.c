/*
 * func-name: sub_100EC9F0
 * func-address: 0x100ec9f0
 * callers: 0x100031ca
 * callees: 0x1000d3cd
 */

int __thiscall sub_100EC9F0(struct Texture **this)
{
  *this = (struct Texture *)&CommandHUD::`vftable';
  Precacher::PurgeTexture(this + 1);
  Precacher::PurgeTexture(this + 2);
  return sub_1000D3CD((struct HUDBase *)this);
}
