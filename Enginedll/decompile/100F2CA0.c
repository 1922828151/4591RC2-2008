/*
 * func-name: ??0Model@@QAE@XZ
 * func-address: 0x100f2ca0
 * callers: 0x10006780, 0x100080a0, 0x10038ca0, 0x10045740, 0x10047270, 0x1004f2e0, 0x10080a00, 0x10084160, 0x100846a0, 0x100b41c0, 0x100e1e90, 0x100efd90, 0x100f5330, 0x1010c190, 0x1010c960, 0x10116c70, 0x1012ffd0, 0x10160210, 0x101658e0, 0x10166fb0, 0x10169020, 0x10173030
 * callees: 0x100ef5b0, 0x100f74b0
 */

Model *__thiscall Model::Model(Model *this)
{
  char v3; // [esp+Bh] [ebp-11h] BYREF
  Model *v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+18h] [ebp-4h]

  v4 = this;
  StaticModel::StaticModel(this);
  *(_DWORD *)this = &Model::`vftable';
  v5 = 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  LOBYTE(v5) = 1;
  sub_100F74B0(&v3, &v3);
  *((_BYTE *)this + 404) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 100) = 0;
  *((_BYTE *)this + 138) = 0;
  *((_DWORD *)this + 112) = 10;
  *((_DWORD *)this + 113) = 256;
  *((_DWORD *)this + 99) = -1;
  return this;
}
