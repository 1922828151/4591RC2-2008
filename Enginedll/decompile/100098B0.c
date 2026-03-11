/*
 * func-name: ?SetDefaultCameraPos@World@@QAEXABVVector@@@Z
 * func-address: 0x100098b0
 * callers: none
 * callees: none
 */

void __thiscall World::SetDefaultCameraPos(World *this, const struct Vector *a2)
{
  *((_DWORD *)this + 143) = *(_DWORD *)a2;
  *((_DWORD *)this + 144) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 145) = *((_DWORD *)a2 + 2);
}
