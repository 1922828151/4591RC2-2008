/*
 * func-name: ?SetUserBBox@StaticModel@@QAEXABVBBox@@@Z
 * func-address: 0x100ee980
 * callers: 0x1010c960, 0x10160210, 0x10166fb0, 0x10169020
 * callees: none
 */

void __thiscall StaticModel::SetUserBBox(StaticModel *this, const struct BBox *a2)
{
  _DWORD *v2; // ecx

  *((_BYTE *)this + 56) = 1;
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 6);
  v2 = (_DWORD *)((char *)this + 88);
  *v2 = *((_DWORD *)a2 + 7);
  v2[1] = *((_DWORD *)a2 + 8);
  v2[2] = *((_DWORD *)a2 + 9);
}
