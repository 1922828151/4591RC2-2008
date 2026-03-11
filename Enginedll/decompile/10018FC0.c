/*
 * func-name: ?SetUpVector@Light@@QAEXAAVVector@@@Z
 * func-address: 0x10018fc0
 * callers: none
 * callees: none
 */

void __thiscall Light::SetUpVector(Light *this, struct Vector *a2)
{
  *((_DWORD *)this + 308) = *(_DWORD *)a2;
  *((_DWORD *)this + 309) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 310) = *((_DWORD *)a2 + 2);
}
