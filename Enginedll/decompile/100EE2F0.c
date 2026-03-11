/*
 * func-name: ?SetTransform@StaticModel@@UAEXAAVMatrix@@AAVVector@@@Z
 * func-address: 0x100ee2f0
 * callers: none
 * callees: none
 */

void __thiscall StaticModel::SetTransform(StaticModel *this, struct Matrix *a2, struct Vector *a3)
{
  int v3; // edx
  _DWORD v4[16]; // [esp+8h] [ebp-40h] BYREF

  qmemcpy(v4, a2, sizeof(v4));
  v4[12] = *(_DWORD *)a3;
  v3 = *((_DWORD *)a3 + 1);
  v4[14] = *((_DWORD *)a3 + 2);
  v4[13] = v3;
  (*(void (__thiscall **)(StaticModel *, _DWORD *))(*(_DWORD *)this + 32))(this, v4);
}
