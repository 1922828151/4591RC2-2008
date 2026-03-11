/*
 * func-name: ?SetTransform@Model@@UAEXAAVMatrix@@AAVVector@@@Z
 * func-address: 0x100f1b10
 * callers: none
 * callees: none
 */

void __thiscall Model::SetTransform(Model *this, struct Matrix *a2, struct Vector *a3)
{
  int v3; // edx
  _DWORD v4[16]; // [esp+0h] [ebp-40h] BYREF

  if ( *((_DWORD *)this + 77) )
  {
    qmemcpy(v4, a2, sizeof(v4));
    v4[12] = *(_DWORD *)a3;
    v3 = *((_DWORD *)a3 + 1);
    v4[14] = *((_DWORD *)a3 + 2);
    v4[13] = v3;
    qmemcpy((char *)this + 224, v4, 0x40u);
    (*(void (__thiscall **)(Model *, _DWORD *))(*(_DWORD *)this + 32))(this, v4);
  }
}
