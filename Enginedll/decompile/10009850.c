/*
 * func-name: ?GetDefaultCameraPos@World@@QAEXAAVVector@@@Z
 * func-address: 0x10009850
 * callers: none
 * callees: none
 */

void __thiscall World::GetDefaultCameraPos(World *this, struct Vector *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 143);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 144);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 145);
}
