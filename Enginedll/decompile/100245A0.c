/*
 * func-name: ??0CollisionInfo@@QAE@ABU0@@Z
 * func-address: 0x100245a0
 * callers: 0x1004c6f0, 0x100522d0, 0x10052c10, 0x10052ca0, 0x10052f60, 0x10053000, 0x100530a0, 0x10053140, 0x10146be0, 0x10146c80, 0x10146e00, 0x10147110, 0x101488d0, 0x10148a20
 * callees: 0x10022a90, 0x10022b80
 */

CollisionInfo *__thiscall CollisionInfo::CollisionInfo(CollisionInfo *this, const struct CollisionInfo *a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  *((double *)this + 1) = *((double *)a2 + 1);
  sub_10022A90((_DWORD *)this + 4, (int)a2 + 16);
  sub_10022A90((_DWORD *)this + 8, (int)a2 + 32);
  sub_10022B80((_DWORD *)this + 12, (int)a2 + 48);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  return this;
}
