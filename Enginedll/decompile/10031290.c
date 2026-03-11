/*
 * func-name: ??0Model@@QAE@ABV0@@Z
 * func-address: 0x10031290
 * callers: 0x1005ddc0
 * callees: 0x10021f60, 0x10028d10, 0x10030e80
 */

Model *__thiscall Model::Model(Model *this, const struct Model *a2)
{
  StaticModel::StaticModel(this, a2);
  *(_DWORD *)this = &Model::`vftable';
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 94);
  sub_10021F60((_DWORD *)this + 95, (int)a2 + 380);
  *((_DWORD *)this + 99) = *((_DWORD *)a2 + 99);
  *((_DWORD *)this + 100) = *((_DWORD *)a2 + 100);
  *((_BYTE *)this + 404) = *((_BYTE *)a2 + 404);
  sub_10030E80((_DWORD *)this + 102, (_BYTE *)a2 + 408);
  *((_DWORD *)this + 112) = *((_DWORD *)a2 + 112);
  *((_DWORD *)this + 113) = *((_DWORD *)a2 + 113);
  return this;
}
