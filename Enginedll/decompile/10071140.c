/*
 * func-name: sub_10071140
 * func-address: 0x10071140
 * callers: 0x10071230, 0x100751a0, 0x100c6de0, 0x100c6ff0, 0x100c7390, 0x100cada0
 * callees: 0x1000db00, 0x1006f820, 0x101a2500
 */

void __thiscall sub_10071140(int *this)
{
  int v1; // esi
  int *v2; // eax
  int v3; // [esp-Ch] [ebp-24h]
  int *v4; // [esp+4h] [ebp-14h] BYREF
  int v5; // [esp+14h] [ebp-4h]

  v1 = (int)this;
  v4 = this;
  v5 = 0;
  sub_1000DB00(this + 11);
  std::string::~string(v1 + 16);
  v2 = *(int **)(v1 + 8);
  v1 += 4;
  v3 = *v2;
  v5 = -1;
  sub_1006F820(v1, (int *)&v4, v1, v3, v1, (int)v2);
  operator delete(*(void **)(v1 + 4));
  *(_DWORD *)(v1 + 4) = 0;
  *(_DWORD *)(v1 + 8) = 0;
}
