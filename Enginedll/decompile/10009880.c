/*
 * func-name: ?GetDefaultCameraDir@World@@QAEXAAVVector@@@Z
 * func-address: 0x10009880
 * callers: none
 * callees: none
 */

void __thiscall World::GetDefaultCameraDir(World *this, struct Vector *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 146);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 147);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 148);
}
