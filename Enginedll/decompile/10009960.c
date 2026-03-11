/*
 * func-name: ?SetDefaultCameraDir@World@@QAEXABVVector@@@Z
 * func-address: 0x10009960
 * callers: none
 * callees: none
 */

void __thiscall World::SetDefaultCameraDir(World *this, const struct Vector *a2)
{
  *((_DWORD *)this + 146) = *(_DWORD *)a2;
  *((_DWORD *)this + 147) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 148) = *((_DWORD *)a2 + 2);
}
