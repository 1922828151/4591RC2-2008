/*
 * func-name: ?GetLogicCoordOffset@World@@QAEXAAVVector@@@Z
 * func-address: 0x10018220
 * callers: none
 * callees: none
 */

void __thiscall World::GetLogicCoordOffset(World *this, struct Vector *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 140);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 141);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 142);
}
