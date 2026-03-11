/*
 * func-name: ?SetTransform@Actor@@UAEXABVMatrix@@@Z
 * func-address: 0x1004dd80
 * callers: none
 * callees: 0x10179840
 */

void __thiscall Actor::SetTransform(Actor *this, const struct Matrix *a2)
{
  int v3; // edi
  int v4; // eax
  _BYTE v5[64]; // [esp+8h] [ebp-40h] BYREF

  v3 = *(_DWORD *)this;
  v4 = sub_10179840(v5);
  (*(void (__thiscall **)(Actor *, int, char *))(v3 + 32))(this, v4, (char *)a2 + 48);
}
