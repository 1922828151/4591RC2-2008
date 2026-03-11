/*
 * func-name: sub_100EC950
 * func-address: 0x100ec950
 * callers: 0x1000d12f
 * callees: 0x10012742
 */

int __thiscall sub_100EC950(int this)
{
  int v2; // eax
  _BYTE v4[28]; // [esp-20h] [ebp-40h] BYREF
  int v5; // [esp-4h] [ebp-24h]
  int v6; // [esp+Ch] [ebp-14h]
  _BYTE *v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v6 = this;
  sub_10012742((struct HUDBase *)this);
  v5 = 1;
  v7 = v4;
  v8 = 0;
  *(_DWORD *)this = &CommandHUD::`vftable';
  std::string::string(v4, "TargetArrow.dds");
  v2 = Precacher::CacheTexture();
  v5 = 1;
  v7 = v4;
  *(_DWORD *)(this + 4) = v2;
  std::string::string(v4, "TargetBlock.dds");
  *(_DWORD *)(this + 8) = Precacher::CacheTexture();
  return this;
}
