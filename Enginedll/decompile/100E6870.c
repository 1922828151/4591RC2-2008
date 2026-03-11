/*
 * func-name: ?Refresh@Material@@QAEXXZ
 * func-address: 0x100e6870
 * callers: 0x1001c240, 0x1003d0f0
 * callees: 0x100e5360
 */

void __thiscall Material::Refresh(Material *this)
{
  char v2; // [esp-1Ch] [ebp-24h] BYREF
  int v3; // [esp-18h] [ebp-20h]
  int v4; // [esp-14h] [ebp-1Ch]
  int v5; // [esp-10h] [ebp-18h]
  int v6; // [esp-Ch] [ebp-14h]
  int v7; // [esp-8h] [ebp-10h]
  int v8; // [esp-4h] [ebp-Ch]
  char *v9; // [esp+4h] [ebp-4h]

  v9 = &v2;
  std::string::string(&v2, (char *)this + 56);
  Material::SetTechnique(this, v2, v3, v4, v5, v6, v7, v8);
}
